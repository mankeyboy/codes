#ifndef __ASS5_13CS30021_TRANSLATOR_H
#define __ASS5_13CS30021_TRANSLATOR_H

#include <vector>
#include <cstdlib>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;

const size_t size_of_int = 4, size_of_double = 8,
size_of_char = 1, size_of_bool = 1, size_of_ptr = 4;


class SymbolTable;

enum typeEnum
{
    t_VOID = 0, t_CHAR, t_INT, t_BOOL, t_PTR, t_ARRAY, t_FUNC, t_DOUBLE 
};

union typeUnion
{
    int ival;
    double dval;
    char cval;
};


struct typeNode
{
    int size;
    typeNode *next;
    typeEnum baseType;
    
    typeNode(typeEnum t, int s = 1, typeNode *n = NULL);
    size_t getSize();
    void print();
};

typeNode *CopyType(typeNode *t);    // To copy type from one type node to another
// GLOBAL VARIABLES NEEDED BY THE GRAMMAR
extern int cnt_temp;            // to count the temporary variables
extern int nextinstr;            // global variable to store the index of the next instruction
extern unsigned int w;         // Store the type width as a global variable, inherited attribute
extern typeNode *t;            // Store the type as an inherited attribute,  a global variable

// For Maintaining List. Used in nextlist, trulist and falselist for quad indexes
typedef struct list
{
    /*This is just a normal integer linked list. Used in nextlist truelist and falselist to store the quad indexes*/
    int index;
    struct list *next;
}list;

// structure for attributes of expression(any general expression)
struct expStruct
{
    symtab_element *loc;                    // stores the pointer to the concerned variable in the symboltable
    symtab_element *array;                  // stores the base address of the array if the expression is of type array
    typeNode *type;                     // stores the type of the expression
    list *truelist;                     // truelist of the designated expression
    list *falselist;                    // falselist of the designated expression
    bool isPointer;                     // Boolean flag for storing if the current expression is a pointer
};

// sturcture for argument expression list with a simple vector used to store the locations of all seen arguments
struct arglistStruct
{
    vector<expStruct*> *arguments;      
};

// struct for declaration grammar, type of decl and width of declaration
struct decStruct
{
    unsigned int width;
    typeNode *type;          
};

// struct for a identifier with a pointer to the symboltable for this and name of the indentifier in a string
struct idStruct
{
    symtab_element *loc;                 
    string name;                              
};


// Class quad in a Simple enumeration of all the availabe quad operators
enum opcodeType
{
    o_PLUS = 1, o_MINUS, o_MULT, o_DIV,  o_MOD, o_UMINUS, o_COPY, o_PARAM,  o_GOTO, o_CALL, o_JLT, o_JLE, 
    o_JGT, o_JGE, o_JE, o_JNE, o_JT, o_JF, o_INT2DBL, o_DBL2INT, o_CHAR2INT, o_INT2CHAR, o_LDEREF, o_RDEREF,
    o_ADDR, o_RINDEX, o_LINDEX, o_RET, o_SHL, o_SHR, o_BAND, o_BOR, o_BXOR, o_BNOT
};

// symbol table element entry
struct symtab_element
{
    // Structure for single entry in sym table : symtab_element which stands for "symbol table element"
    string name;                        // string for storing the name of the variable
    typeNode* type;                   // typeNode for storing the type of the variable
    typeUnion initialValue;           // to store the initial value of the variable
    unsigned int size;                 // Size of the variable
    unsigned int offset;               // Offset of the variable in its symbol table
    // In every function variable: next variable remains null
    // It is initialized for only the members of global symbol table
    SymbolTable *nestedTable;   // A pointer to the nestedtable for the current variable
    
    string var_type;                    // this is for storing the type of vairable ex: "local" "param" "func" "return"
    bool isInitialized;                  // Boolean value to store whether a variable is initialized or not

    symtab_element(string Name = "");       // Constructor of this class; No default constructor used.
};

/* 
    SymbolTable is just a vector of the above declared symbol_table_elements(symtab_element)
    Along with the symbol table it keeps offset variable which is frequently used in offset calculation of local variables
    It also stores the name of the symbol table seperately since there could be different symbol tables according to scope
*/
class SymbolTable
{
    public:
    vector<symtab_element*> table;          // Actual table is in the vector format
    string name;                                       // name of the symbol table
    int offset;                                            // Offset variable
    void print();                                         // prints the complete symboltable

    symtab_element * lookup(string name);   // Lookup function searches the variable with name. If the variable is present then returns its pointer location else creates a new entry with its name and returns that pointer
    symtab_element * search(string name);   // Search just searches the variable with name in symbol table and returns its pointer if present
    symtab_element * gentemp(typeNode *type);   // gentemp creates a new temporary in the symbol table with the provided type
    void update(symtab_element *loc, typeNode *type, typeUnion initval, SymbolTable *next = NULL);  // Update function updates the row values of a symboltableelement
    
    SymbolTable();                      // class constructor
    ~SymbolTable();                     // class destructor
    
};


/* struct for a quad array element. 
    Most important part is that a quad element consists of 3 strings namely for arg1, arg2 and result and 
    an operator enum for storing the opcode
*/
struct quad_element
{
    opcodeType op;
    string arg1, arg2, result;
    quad_element(opcodeType, string, string, string);   // class parameterised constructor only, no default since that would violate any TAC
};

//As for Symbol Table, so for Quad class which can be represented as a vector of single quad elements
class Quad
{
    public:
    vector<quad_element> quadarray;
    void print();                       // prints all of the quads
    Quad();
    void emit(opcodeType op, string s1 = "", string s2 = "",  string s3 = "");  //emit used for general operations with 3 inputs
    void emit(opcodeType op, int x, string s2 = "");                            // emit used for assign type and instruction dealing with direct integer
    void emit(opcodeType op, double x, string s2 = "");                         // emit instruction for double value
    void emit(opcodeType op, char x, string s2 = "");                           // emit instruction for char value
    
};

extern SymbolTable *globalST;           // A Global Symbol Table pointer
// this is basically for storing the function headers in our case since C/C++ is a function based language and that gives eveything scope
extern SymbolTable *currST;             // A Current symbol table pointer
// this is a dynamic symbol table which will change throughout the compilation process phase. All the local and temporary variables are added to this table and maintained here.
extern Quad quad;                       // variable of the Quad class which will store all the quads at the end of compilation

// global function declarations
list *makelist(int i);                  // Create a single entity list with i as the only quad entry
list *merge(list *p1, list *p2);        // Merge the two lists p1 and p2 and return the pointer to the merged list
void backpatch(list *p, int i);         // Assign the quadindex i to all the dangling goto's in the list and deletes the list leaving only the quads
void typecheck(expStruct *e1, expStruct *e2, bool isAssign = false);    // Check and change the type of the two input structure expressions 
void conv2Bool(expStruct *e);               // Convert the input expression to boolean if not already a boolean
typeNode *CopyType(typeNode *t);        // Duplicate the input type and return the pointer to the newly created typeNode
void print_list(list* root);                        // Helper function to print the list of the dangling goto's(To be used only while debugging)
#endif