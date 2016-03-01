%{
/* C/C++ Headers and  include files */
#include <stdio.h>
extern int yylex(void);
void yyerror(const char* s);
#include <iostream>
#include "ass5_13CS30021_translator.h"
#include <cstdlib>
#include <cstring>
#include <string>
using namespace std;
%}

%union 
{
/* All the different types that can be needed for emitting out a TAC
 for all types we've decided to work with */

  	int intval;
	float floatval;
	string *strval;
	char charval;
	idStruct idAttr;
	expStruct expAttr;
	list *nextlist;
	arglistStruct argsAttr;
	decStruct decAttr;
	SymbolTable *ST;
	int instr;
}

//All tokens have been listed together since all of them are keywords anyways, doesn't matter which order

%token AUTO_KEYWORD RESTRICT_KEYWORD ENUM_KEYWORD BREAK_KEYWORD CASE_KEYWORD SWITCH_KEYWORD CONST_KEYWORD CONTINUE_KEYWORD DEFAULT_KEYWORD GOTO_KEYWORD IF_KEYWORD ELSE_KEYWORD EXTERN_KEYWORD REGISTER_KEYWORD VOLATILE_KEYWORD
%token FOR_KEYWORD WHILE_KEYWORD DO_KEYWORD INLINE_KEYWORD DOUBLE_KEYWORD FLOAT_KEYWORD SIGNED_KEYWORD UNSIGNED_KEYWORD LONG_KEYWORD INT_KEYWORD SHORT_KEYWORD CHAR_KEYWORD VOID_KEYWORD BOOL_KEYWORD COMPLEX_KEYWORD IMAGINARY_KEYWORD RETURN_KEYWORD SIZEOF_KEYWORD STATIC_KEYWORD STRUCT_KEYWORD TYPEDEF_KEYWORD UNION_KEYWORD  

%token <idAttr> IDENTIFIER
//Identifier name and loc
%token <intval> INTEGER_CONSTANT
// integer value of constant
%token <floatval> FLOATING_CONSTANT
// floating val of constant
%token <strval> ENUM_CONSTANT
%token <charval> CHAR_CONSTANT
// stors the character value of the constant
%token <strval> STRING_LITERAL
%token VAL_AT PLUS_PLUS MINUS_MINUS LEFT_SHIFT RIGHT_SHIFT LESS_EQUAL GREATER_EQUAL EQUAL NOT_EQUAL
%token AND OR ELLIPSIS STAR_EQUAL BY_EQUAL PERCENT_EQUAL PLUS_EQUAL MINUS_EQUAL
%token LEFT_SHIFT_EQUAL RIGHT_SHIFT_EQUAL AND_EQUAL BITWISENOT_EQUAL OR_EQUAL SINGLECOMMENT MULTICOMMENT  

%type <expAttr> primary_expression postfix_expression unary_expression cast_expression 
multiplicative_expression additive_expression shift_expression relational_expression
equality_expression and_expression exclusive_or_expression inclusive_or_expression
logical_and_expression logical_or_expression conditional_expression assignment_expression_opt
assignment_expression constant_expression expression expression_statement expression_opt
declarator direct_declarator initializer identifier_opt declaration init_declarator_list
init_declarator_list_opt init_declarator
// All of the above Non-Terminals have been assigned in the expression block, details and explanations can be found there
%type <argsAttr> argument_expression_list argument_expression_list_opt
%type <decAttr> type_name pointer pointer_opt type_specifier declaration_specifiers specifier_qualifier_list  
%type <nextlist> block_item_list block_item statement labeled_statement compound_statement 
selection_statement iteration_statement jump_statement block_item_list_opt
//All of the above non-terminals are given nextlist as type as all of them will have to support a list of dangling GOTOs
%type <nextlist> 	N
%type <instr> 		M
%type <charval> 	unary_operator


%start translation_unit

%left '+' '-'
%left '*' '/' '%'
%nonassoc UNARY

%%
N:
{
	$$ = makelist(nextinstr);
	quad.emit(o_GOTO, -1);
};

M:
{
	$$ = nextinstr;
};

/*Expressions*/
primary_expression:			IDENTIFIER {
									/*Check if function name*/
									symtab_element * check_func = globalST->search(*$1.name);
									if(check_func != NULL)
									{	//If yes, it is a function
										$$.loc = check_func;
										$$.type = check_func->type;
										$$.array = NULL;
										$$.isPointer = false;	
									}
									else
									{
										//It isn't a function
										$$.loc 	=  currST->lookup(*$1.name);
										if(!($$.loc->type != NULL && $$.loc->type->baseType == t_ARRAY))
										{
											// it is a local variable if it isn't an array
											$$.type = $$.loc->type;
											$$.array = NULL;
											$$.isPointer = false;
										}
										else
										{
											//If array then store the exppression_Structure.array and send a temp val with zero init val
											$$.array = $$.loc;
											$$.loc = currST->gentemp(new typeNode(t_INT));
											$$.loc->initialValue.ival = 0;
											$$.loc->isInitialized = true;
											quad.emit(o_COPY,0,$$.loc->name);
											$$.type = $$.array->type;
										}
									}
								} |
								CHAR_CONSTANT {
									//Initialize the value of the temporary variable with char val
									$$.loc 	= currST->gentemp(new typeNode(t_CHAR));
									$$.type = $$.loc->type;
									$$.loc->initialValue.cval = $1;
									$$.loc->isInitialized = true;
									$$.array = NULL;
								quad.emit(o_COPY, $1, $$.loc->name);
								} |
								INTEGER_CONSTANT {
									//Initialize the value of the temporary variable with int val
									$$.loc 	= currST->gentemp(new typeNode(t_INT));
									$$.type = $$.loc->type;
									$$.loc->initialValue.ival = $1;
									$$.loc->isInitialized = true;
									$$.array = NULL;
									quad.emit(o_COPY, $1, $$.loc->name);
								} |
								FLOATING_CONSTANT {
									//Initialize the value of the temporary variable with float val
									$$.loc 	= currST->gentemp(new typeNode(t_DOUBLE));
									$$.type = $$.loc->type;
									$$.loc->initialValue.dval = $1;
									$$.loc->isInitialized = true;
									$$.array = NULL;
									quad.emit(o_COPY, $1, $$.loc->name);
								} |
								STRING_LITERAL {} |
								'(' expression ')' {
									// Copy the Value
									$$ = $2;
								};

ENUMERATION_CONST:				IDENTIFIER {};

postfix_expression :			primary_expression {
									$$ = $1;
								} |
								postfix_expression '[' expression ']' {
									/*Logic for the Array expression
									$$.array->type has the full type of the array which will be used for size calculations for memory
									$$.array will store the base pointer
									$$.type will store the base type of the array
									*/
									char temp[10];
									$$.loc = currST -> gentemp(new typeNode(t_INT));
									symtab_element *temporary = currST->gentemp(new typeNode(t_INT));
									sprintf(temp,"%ld",$1.type->next->getSize());
									quad.emit(o_MULT,$3.loc->name,temp,temporary->name);
									quad.emit(o_PLUS,$1.loc->name,temporary->name,$$.loc->name);
									// calculate the size and pass the temporary variable storing the size on a $$.loc
									$$.array = $1.array;
									$$.type = $1.type->next;
								} |
								postfix_expression '(' argument_expression_list_opt ')' {
									/*Function Call Logic
									Function call value will be stored in a temporary variable
									*/
									$$.loc = currST->gentemp(CopyType($1.type));
									char str[10];
									if($3.arguments == NULL)
									{	//No function Parameters directly call the function
										sprintf(str,"0");
										quad.emit(o_CALL,$1.loc->name,str,$$.loc->name);
									}
									else
									{
										for(int i=0;i<$3.arguments->size();i++)
										{	//Print all parameters one by one, without performing any parameter typechecking to reduce the complexity, also assumed input as valid
											quad.emit(o_PARAM,(*$3.arguments)[i]->loc->name);
										}
										sprintf(str,"%ld",$3.arguments->size());
										quad.emit(o_CALL,$1.loc->name,str,$$.loc->name);
									}
									$$.array = NULL;
									$$.type = $$.loc->type;
								} |
								postfix_expression '.' IDENTIFIER {/*struct logic, not compulsory to implement, skipping*/}|
								postfix_expression VAL_AT IDENTIFIER {/*same for this, skilpping*/} |
								postfix_expression MINUS_MINUS {
									$$.loc = currST->gentemp(CopyType($1.type));
									if($1.array == NULL)
									{	// Post decrement_simple logic
										quad.emit(o_COPY,$1.loc->name,$$.loc->name);
										quad.emit(o_MINUS,$1.loc->name,"1",$1.loc->name);
									}
									else
									{	// Post decrement_array elem logic
										symtab_element * temp_elem = currST->gentemp(CopyType($1.type));
										quad.emit(o_RINDEX,$1.array->name,$1.loc->name,$$.loc->name);
										quad.emit(o_RINDEX,$1.array->name,$1.loc->name,temp_elem->name);
										quad.emit(o_MINUS,temp_elem->name,"1",temp_elem->name);
										quad.emit(o_LINDEX,$1.loc->name,temp_elem->name,$1.array->name);
										$$.array = NULL;
									}
									$$.type = $$.loc->type;
								} |
								postfix_expression PLUS_PLUS {
									$$.loc = currST->gentemp(CopyType($1.type));
									if($1.array == NULL)
									{	// Post increment_simple logic
										quad.emit(o_COPY,$1.loc->name,$$.loc->name);
										quad.emit(o_PLUS,$1.loc->name,"1",$1.loc->name);
									}
									else
									{
										// Post increment_array elem logic
										symtab_element *temp_elem = currST->gentemp(CopyType($1.type));
										quad.emit(o_RINDEX,$1.array->name,$1.loc->name,$$.loc->name);
										quad.emit(o_RINDEX,$1.array->name,$1.loc->name,temp_elem->name);
										quad.emit(o_PLUS,temp_elem->name,"1",temp_elem->name);
										quad.emit(o_LINDEX,$1.loc->name,temp_elem->name,$1.array->name);
										$$.array = NULL;

									}
									$$.type = $$.loc->type;									
								} |
								'(' type_name ')' '{' initializer_list ',' '}' {/*Skipping both types of type conversion(casting)*/}|
								'(' type_name ')' '{' initializer_list '}' {};

argument_expression_list:		assignment_expression 
								{	/*Argument handling for function calls, either a single arg or list*/
									$$.arguments = new vector<expStruct*>;
									expStruct * tex = new expStruct($1);
									$$.arguments->push_back(tex);
								}|
								argument_expression_list ',' assignment_expression {
									/*List to be handled in function calls*/
									expStruct * tex = new expStruct($3);
									$$.arguments->push_back(tex);
								};

argument_expression_list_opt:	argument_expression_list {
									/*Handling to be done later*/
									$$ = $1;
								}|
								{	/*Epsilon Case: Set default here*/
									$$.arguments = NULL;
								};

unary_expression:				postfix_expression {
									$$ = $1;
								}|
								MINUS_MINUS unary_expression {
									$$.loc = currST->gentemp(CopyType($2.type));
									if($2.array == NULL)
									{	// Pre decrement_simple logic
										quad.emit(o_MINUS,$2.loc->name,"1",$2.loc->name);
										quad.emit(o_COPY,$2.loc->name,$$.loc->name);
									}
									else
									{	// Pre_decrement_array elem logic
										symtab_element * temp_elem = currST->gentemp(CopyType($2.type));
										quad.emit(o_RINDEX,$2.array->name,$2.loc->name,temp_elem->name);
										quad.emit(o_MINUS,temp_elem->name,"1",temp_elem->name);
										quad.emit(o_LINDEX,$2.loc->name,temp_elem->name,$2.array->name);
										quad.emit(o_RINDEX,$2.array->name,$2.loc->name,$$.loc->name);
										$$.array = NULL;
									}
									$$.type = $$.loc->type;
								}|
								PLUS_PLUS unary_expression {
									$$.loc = currST->gentemp(CopyType($2.type));
									if($2.array == NULL)
									{	// Pre-Increment_simple logic
										quad.emit(o_PLUS,$2.loc->name,"1",$2.loc->name);
										quad.emit(o_COPY,$2.loc->name,$$.loc->name);
									}
									else
									{	// Pre-increment_array elem logic
										symtab_element * temp_elem = currST->gentemp(CopyType($2.type));
										quad.emit(o_RINDEX,$2.array->name,$2.loc->name,temp_elem->name);
										quad.emit(o_PLUS,temp_elem->name,"1",temp_elem->name);
										quad.emit(o_LINDEX,$2.loc->name,temp_elem->name,$2.array->name);
										quad.emit(o_RINDEX,$2.array->name,$2.loc->name,$$.loc->name);
										$$.array = NULL;
									}
									$$.type = $$.loc->type;
								}|
								unary_operator cast_expression
								{
									typeNode *temp_type;
									switch($1)
									{
										case '~':
											/*Bitwise Not*/
											$$.loc = currST->gentemp(CopyType($2.type));
											$$.type = $$.loc->type;
											quad.emit(o_BNOT,$2.loc->name,$$.loc->name);
											break;
										case '!':
											$$.loc = currST->gentemp(CopyType($2.type));
											$$.type = $$.loc->type;
											$$.truelist = $2.falselist;
											$$.falselist = $2.truelist;
											break;
										case '-':
											$$.loc = currST->gentemp(CopyType($2.type));
											$$.type = $$.loc->type;
											quad.emit(o_UMINUS,$2.loc->name,$$.loc->name);
											break;
										case '+':
											$$.loc = currST->gentemp(CopyType($2.type));
											$$.type = $$.loc->type;
											quad.emit(o_COPY,$2.loc->name,$$.loc->name);
											break;
										case '&':/*Use a temp to copy the address into it and append type as pointer*/
											temp_type = new typeNode(t_PTR,1,$2.type);
											$$.loc = currST->gentemp(CopyType(temp_type));
											$$.type = $$.loc->type;
											quad.emit(o_ADDR,$2.loc->name,$$.loc->name);
											$$.array = NULL;
											break;
										case '*':/*isPointer = true*/
											$$.isPointer = true;
											$$.type = $2.loc->type->next;
											$$.loc = $2.loc;
											$$.array = NULL;
											break;
										default:/*Error*/
											break;
									}
								}|
								SIZEOF_KEYWORD unary_expression {/*Later*/}|
								SIZEOF_KEYWORD '(' type_name ')' {};

unary_operator:				'~' {
									$$ = '~';
								}|
								'!' {
									$$ = '!';
								}|
								'+' {
									$$ = '+';
								}|
								'-' {
									$$ = '-';
								}|
								'&' {
									$$ = '&';
								}|
								'*'	{
									$$ = '*';
								};

cast_expression : 				unary_expression {
									if($1.isPointer)
									{
										/*It is R-type dereferecing if it is a pointer after reaching cast-expression*/
										$$.loc = currST->gentemp(CopyType($1.type));
										$$.isPointer = false;
										quad.emit(o_RDEREF,$1.loc->name,$$.loc->name);
									}
									else if(!($1.array || $1.array->type))
									{	/*RINDEX operation: The unary expression moves to cast expression and still is an array then it is an R-type indexing for the array element*/
										$$.loc = currST->gentemp(new typeNode($1.type->baseType));
										quad.emit(o_RINDEX,$1.array->name,$1.loc->name,$$.loc->name);
										$$.array = NULL;
										$$.type = $$.loc->type;
									}
									else
										$$ = $1;
								}|
								'(' type_name ')' cast_expression{/*Handling of cast expression later*/};

/*All calcutation based expression from here onwards, expressions on both sides are typechecked first and a quad is generated with generation of a temporary accordingly*/
multiplicative_expression:		cast_expression {
									$$ = $1;
								}|
								multiplicative_expression '/' cast_expression {
									typecheck(&$1,&$3);
									$$.loc = currST->gentemp($1.type);
									$$.type = $$.loc->type;
									quad.emit(o_DIV,$1.loc->name,$3.loc->name,$$.loc->name);
								}|
								multiplicative_expression '%' cast_expression {
									typecheck(&$1,&$3);
									$$.loc = currST->gentemp($1.type);
									$$.type = $$.loc->type;
									quad.emit(o_MOD,$1.loc->name,$3.loc->name,$$.loc->name);
								}|
								multiplicative_expression '*' cast_expression {
									typecheck(&$1,&$3);
									$$.loc = currST->gentemp($1.type);
									$$.type = $$.loc->type;
									quad.emit(o_MULT,$1.loc->name,$3.loc->name,$$.loc->name);
								};

additive_expression :			multiplicative_expression {
									$$ = $1;
								}|
								additive_expression '+' multiplicative_expression {
									typecheck(&$1,&$3);
									$$.loc = currST->gentemp($1.type);
									$$.type = $$.loc->type;
									quad.emit(o_PLUS,$1.loc->name,$3.loc->name,$$.loc->name);
								}|
								additive_expression '-' multiplicative_expression {
									typecheck(&$1,&$3);
									$$.loc = currST->gentemp($1.type);
									$$.type = $$.loc->type;
									quad.emit(o_MINUS,$1.loc->name,$3.loc->name,$$.loc->name);
								};

/*IAll shift operation requires is left and right sides both to be integers*/
shift_expression:				additive_expression {
									$$ = $1;
								}|
								shift_expression LEFT_SHIFT additive_expression {
									$$.loc = currST->gentemp($1.type);
									$$.type = $$.loc->type;
									quad.emit(o_SHL,$1.loc->name,$3.loc->name,$$.loc->name);
								}|
								shift_expression RIGHT_SHIFT additive_expression{
									$$.loc = currST->gentemp($1.type);
									$$.type = $$.loc->type;
									quad.emit(o_SHR,$1.loc->name,$3.loc->name,$$.loc->name);
								};

/*Changing/setting the type of input expression to boolean is what defines a relational expression*/
relational_expression:			shift_expression {
									$$ = $1;
								}|
								relational_expression LESS_EQUAL shift_expression {
									typecheck(&$1,&$3);
									$$.type = new typeNode(t_BOOL);
									$$.truelist = makelist(nextinstr);
									$$.falselist = makelist(nextinstr+1);
									quad.emit(o_JLE,$1.loc->name,$3.loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								}|
								relational_expression GREATER_EQUAL shift_expression {
									typecheck(&$1,&$3);
									$$.type = new typeNode(t_BOOL);
									$$.truelist = makelist(nextinstr);
									$$.falselist = makelist(nextinstr+1);
									quad.emit(o_JGE,$1.loc->name,$3.loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								}|
								relational_expression '<' shift_expression {
									typecheck(&$1,&$3);
									$$.type = new typeNode(t_BOOL);
									$$.truelist = makelist(nextinstr);
									$$.falselist = makelist(nextinstr+1);
									quad.emit(o_JLT,$1.loc->name,$3.loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								}|
								relational_expression '>' shift_expression {
									typecheck(&$1,&$3);
									$$.type = new typeNode(t_BOOL);
									$$.truelist = makelist(nextinstr);
									$$.falselist = makelist(nextinstr+1);
									quad.emit(o_JGT,$1.loc->name,$3.loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								};

equality_expression:			relational_expression {
									$$ = $1;
								}|
								equality_expression EQUAL relational_expression {
									typecheck(&$1,&$3);
									$$.type = new typeNode(t_BOOL);
									$$.truelist = makelist(nextinstr);
									$$.falselist = makelist(nextinstr+1);
									quad.emit(o_JE,$1.loc->name,$3.loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								}|
								equality_expression NOT_EQUAL relational_expression {
									typecheck(&$1,&$3);
									$$.type = new typeNode(t_BOOL);
									$$.truelist = makelist(nextinstr);
									$$.falselist = makelist(nextinstr+1);
									quad.emit(o_JNE,$1.loc->name,$3.loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								};

/*Bitwise AND operations assumed to be operated on int*/
and_expression :				equality_expression {
									$$ = $1;
								}|
								and_expression '&' equality_expression {
									$$.loc = currST->gentemp($1.type);
									$$.type = $$.loc->type;
									quad.emit(o_BAND,$1.loc->name,$3.loc->name,$$.loc->name);
								};

logical_and_expression:			inclusive_or_expression {
									$$ = $1;
								}|
								logical_and_expression AND M inclusive_or_expression {
									if($1.type->baseType != t_BOOL)
										conv2Bool(&$1);
									if($4.type->baseType != t_BOOL)
										conv2Bool(&$4);
									backpatch($1.truelist,$3);
									$$.type = new typeNode(t_BOOL);
									$$.falselist = merge($1.falselist,$4.falselist);
									$$.truelist = $4.truelist;
								};

inclusive_or_expression:		exclusive_or_expression {
									$$ = $1;
								}|
								inclusive_or_expression '|' exclusive_or_expression	{
									$$.loc = currST->gentemp($1.type);
									$$.type = $$.loc->type;
									quad.emit(o_BOR,$1.loc->name,$3.loc->name,$$.loc->name);
								};

exclusive_or_expression:		and_expression {
									$$ = $1;
								}|
								exclusive_or_expression '^' and_expression {
									$$.loc = currST->gentemp($1.type);
									$$.type = $$.loc->type;
									quad.emit(o_BXOR,$1.loc->name,$3.loc->name,$$.loc->name);
								};

logical_or_expression:			logical_and_expression {
									$$ = $1;
								}|
								logical_or_expression OR M logical_and_expression	{
									if($1.type->baseType != t_BOOL)
										conv2Bool(&$1);
									if($4.type->baseType != t_BOOL)
										conv2Bool(&$4);	
									backpatch($1.falselist,$3);
									$$.type = new typeNode(t_BOOL);
									$$.truelist = merge($1.truelist,$4.truelist);
									$$.falselist = $4.falselist;
								};

/*I assumed that type of expressions and boolean expresstions work as the same type  */
conditional_expression: 		logical_or_expression {
									$$ = $1;
								}|
								logical_or_expression N '?' M expression N ':' M conditional_expression {
									$$.loc = currST->gentemp($5.type);
									$$.type = $$.loc->type;
									quad.emit(o_COPY,$9.loc->name,$$.loc->name);
									list* I = makelist(nextinstr);
									quad.emit(o_GOTO,"-1");
									backpatch($6,nextinstr);
									quad.emit(o_COPY,$5.loc->name,$$.loc->name);
									I = merge(I,makelist(nextinstr));
									quad.emit(o_GOTO,"-1");
									backpatch($2,nextinstr);
									conv2Bool(&$1);
									backpatch($1.truelist,$4);
									backpatch($1.falselist,$8);
									backpatch(I,nextinstr);
								};

/*I assumed that only Equal operator will emerge out of this non-terminal*/
assignment_operator:			'=' 							|
								STAR_EQUAL				|
								BY_EQUAL 					|
								PERCENT_EQUAL 			|
								PLUS_EQUAL 				|
								MINUS_EQUAL 				|
								AND_EQUAL 				|
								BITWISENOT_EQUAL		|
								OR_EQUAL					|
								LEFT_SHIFT_EQUAL 		|
								RIGHT_SHIFT_EQUAL 		;								

assignment_expression:		conditional_expression {
									$$ = $1;
								}|
								unary_expression assignment_operator assignment_expression {
									/*If unary_expression upto here is array or ptr then it is a left dereference or left index respectively.*/
									if($1.isPointer)
									{
										quad.emit(o_LDEREF,$3.loc->name,$1.loc->name);
									}
									typecheck(&$1,&$3,true);
									if($1.array != NULL)
									{
										/*Assign later in an array*/
										quad.emit(o_LINDEX,$1.loc->name,$3.loc->name,$1.array->name);
									}
									else if(!$1.isPointer)
										quad.emit(o_COPY,$3.loc->name,$1.loc->name);
									$$.loc = currST->gentemp($3.type);
									$$.type = $$.loc->type;
									quad.emit(o_COPY,$3.loc->name,$$.loc->name);
								};

/*A const value of this expression exists*/
constant_expression:			conditional_expression {$$ = $1;};
/*Comma and assignment*/
expression :					assignment_expression {$$ = $1;}|
								expression ',' assignment_expression {$$ = $3;};
/*DECLARATIONS*/

init_declarator_list_opt: 		init_declarator_list {
									if($1.type != NULL && $1.type->baseType == t_FUNC)
									{
										$$ = $1;
									}
								}|
								/*Epslion*/	{
									$$.loc = NULL;
								};

declaration:					declaration_specifiers init_declarator_list_opt ';' {
									/*IThe semicolon assures that this has to be a function prototype if it is a function at all in the declaration*/
									/*Assign Types to all the entities of init_declarator_list*/
									if($2.loc != NULL && $2.type != NULL && $2.type->baseType == t_FUNC)
									{
										/*Delete current_ST*/
										currST = new SymbolTable();
									}
								};

declaration_specifiers_opt: 	declaration_specifiers|
								/*Epslion*/;

declaration_specifiers:			type_specifier declaration_specifiers_opt|
								type_qualifier declaration_specifiers_opt {}|
								storage_class_specifier declaration_specifiers_opt {}|
								function_specifier declaration_specifiers_opt {};

init_declarator_list:			init_declarator {
									/*Only function declaration expected*/
									$$ = $1;
								}|
								init_declarator_list ',' init_declarator;

init_declarator:				declarator {
									/*Function Declaration! Nothing to be done here*/
									if($1.type != NULL && $1.type->baseType == t_FUNC)
									{
										$$ = $1;
									}
								}|
								declarator '=' initializer {
									/*Declarator initialized with the proper value*/
									typecheck(&$1,&$3,true);
									quad.emit(o_COPY,$3.loc->name,$1.loc->name);
								};

storage_class_specifier:		AUTO_KEYWORD{}|
								STATIC_KEYWORD {}|
								EXTERN_KEYWORD {}|
								REGISTER_KEYWORD {};

type_specifier:					VOID_KEYWORD {/*Void too needs a new type node*/
									t = new typeNode(t_VOID);
								}|
								BOOL_KEYWORD {}|
								CHAR_KEYWORD {
									t = new typeNode(t_CHAR);
								}|
								SHORT_KEYWORD {}|
								SIGNED_KEYWORD {}|
								UNSIGNED_KEYWORD {}|
								INT_KEYWORD	{
									t = new typeNode(t_INT);
								}|
								LONG_KEYWORD {}|
								FLOAT_KEYWORD {}|
								DOUBLE_KEYWORD {
									t = new typeNode(t_DOUBLE);
								}|
								COMPLEX_KEYWORD {}|
								IMAGINARY_KEYWORD {}|
								enum_specifier {};

specifier_qualifier_list_opt: 	specifier_qualifier_list {}|
								/*Epslion*/	{};

specifier_qualifier_list: 		type_specifier specifier_qualifier_list_opt {
									/*Nothing to be done here. The type is already initialized globally*/
								}|
								type_qualifier specifier_qualifier_list_opt {};	

identifier_opt:					IDENTIFIER {
									$$.loc  = currST->lookup(*$1.name);
									$$.type = new typeNode(t->baseType);
								}|
								/*Epslion*/	{};

enumerator_list:				enumerator {}|
								enumerator_list ',' enumerator {};

enum_specifier:				ENUM_KEYWORD identifier_opt '{' enumerator_list '}' {}|
								ENUM_KEYWORD identifier_opt '{' enumerator_list ',' '}' {}|
								ENUM_KEYWORD IDENTIFIER	{};

enumerator:					ENUMERATION_CONST{}|
								ENUMERATION_CONST'=' constant_expression {};

type_qualifier:					RESTRICT_KEYWORD {}|
								VOLATILE_KEYWORD {}|
								CONST_KEYWORD {};
								
function_specifier:				INLINE_KEYWORD {};

pointer_opt:					pointer {
									$$ = $1;
								}|
								/*Epslion*/	{
									/*NO POINTER!*/
									$$.type = NULL;
								};

declarator :					pointer_opt direct_declarator {
									if(!($1.type))
									{
										/*Append pointers to this direct_declarator*/
										if($2.loc->type->baseType != t_PTR)
										{
											typeNode * test = $1.type;
											while(test->next != NULL)
												test = test->next;
											test->next = $2.loc->type;
											$2.loc->type = $1.type;
										}
									}
									else
									{
										/*No Pointer for this direct_declarator*/
									}

									if($2.type != NULL && $2.type->baseType == t_FUNC)
									{
										/*Function type... Just adjust offset*/
										$$ = $2;
									}
									else
									{
										/*Not a function, update size and offset*/
										$2.loc->size = $2.loc->type->getSize();
										$2.loc->offset = currST->offset;
										currST->offset += $2.loc->size;
										$$ = $2;
										$$.type = $$.loc->type;
									}
								};

direct_declarator:				IDENTIFIER {
									/*Identifier will be added to current symbol table here*/
									/*Type of this variable is set here but the pointers are not appended*/	
									$$.loc = currST->lookup(*$1.name);
										if($$.loc->var_type == "")
										{
											$$.loc->var_type = "local";
											/*Initialize type here*/
											$$.loc->type = new typeNode(t->baseType);
										}
										else if($$.loc->var_type == "return")
										{
											/*Already declared function change the symbol table*/

										}
										$$.type = $$.loc->type;
								}|
								direct_declarator '[' type_qualifier_list_opt assignment_expression_opt ']' {
									/*Append in the type_array and adjust the size*/
									if($1.type->baseType == t_ARRAY)
									{ /*Case: type is already an array*/
										typeNode * typ1 = $1.type,*typ = $1.type;
										typ1 = typ1->next;
										while(typ1->next != NULL)
										{
											typ1 = typ1->next;
											typ = typ->next;
										}
										typ->next = new typeNode(t_ARRAY,$4.loc->initialValue.ival,typ1);
									}
									else
									{ /*Append array type*/
										if($4.loc == NULL)
											$1.type = new typeNode(t_ARRAY,-1,$1.type);
										else
											$1.type = new typeNode(t_ARRAY,$4.loc->initialValue.ival,$1.type);
									}
									$$ = $1;
									$$.loc->type = $$.type;
								}|
								'(' declarator ')' {
									$$ = $2;
								}|
								direct_declarator '(' parameter_type_list ')' {
									/*Function Declarator: First Element of this table is Our Function and the rest of the elements are Params*/
									/*add a new entry in global symbol table*/
									symtab_element * new_func = globalST->search(currST->table[0]->name);
									if(new_func == NULL)
									{
										new_func = globalST->lookup(currST->table[0]->name);
										$$.loc = currST->table[0];
										if(new_func->var_type == "")
										{ /*Declaring func for the first time*/
											new_func->type = CopyType(currST->table[0]->type);
											new_func->var_type = "func";
											new_func->isInitialized = false;
											new_func->nestedTable = currST;
											currST->name = currST->table[0]->name;
											currST->table[0]->var_type = "return";
											currST->table[0]->size = currST->table[0]->type->getSize();
											currST->table[0]->offset = 0;
											currST->offset = currST->table[0]->size;
											for(int i=1;i<currST->table.size();i++)
											{
												currST->table[i]->var_type = "param";
												currST->table[i]->offset += currST->table[0]->size;
												currST->offset += currST->table[i]->size;
											}
											/*After Function Declaration, new Symbol Table(ST) is created*/
										}
									}
									else
									{
										/* Already declared function. Drop the new table and connect current symbol table pointer to the existing funciton symbol table */
										currST = new_func->nestedTable;
									}
									$$.loc = new_func;
									$$.type = new typeNode(t_FUNC);
								}|
								direct_declarator '[' STATIC_KEYWORD type_qualifier_list_opt assignment_expression ']' {}|
								direct_declarator '[' type_qualifier_list STATIC_KEYWORD assignment_expression ']' {}|
								direct_declarator '[' type_qualifier_list_opt '*' ']' {/*Not implementing this*/}|
								direct_declarator '(' identifier_list_opt ')' {
									/*No Parameters*/
									symtab_element * new_func = globalST->search(currST->table[0]->name);
									if(new_func == NULL)
									{
										new_func = globalST->lookup(currST->table[0]->name);
										$$.loc = currST->table[0];
										if(new_func->var_type == "")
										{ /*Function is being declared here for the first time*/
											new_func->type = CopyType(currST->table[0]->type);
											new_func->var_type = "func";
											new_func->isInitialized = false;
											new_func->nestedTable = currST;
											currST->name = currST->table[0]->name;
											currST->table[0]->var_type = "return";
											/*Change the first element to return_val and change the rest to param*/
											currST->table[0]->size = currST->table[0]->type->getSize();
											currST->table[0]->offset = 0;
											currST->offset = currST->table[0]->size;
										}
									}
									else
									{
										/* Already declared function. Drop the new table and connect current symbol table pointer to the existing funciton symbol table */
										currST = new_func->nestedTable;
									}
									$$.loc = new_func;
									$$.type = new typeNode(t_FUNC);
								};

type_qualifier_list_opt:		type_qualifier_list {}|
								/*Epslion*/	{};

type_qualifier_list:			type_qualifier {}|
								type_qualifier_list type_qualifier {};

identifier_list_opt:			identifier_list |
							/*Epslion*/;

identifier_list :				IDENTIFIER|
							identifier_list ',' IDENTIFIER	;

type_name:				specifier_qualifier_list;

initializer:					assignment_expression {
									$$ = $1;
								}|
							'{' initializer_list '}' {}|
							'{' initializer_list ',' '}' {};

initializer_list:				designation_opt initializer |
							initializer_list ',' designation_opt initializer;

parameter_type_list:			parameter_list {
									/*No need to store the List in explicit since all the parameters are stored in the currST by default*/
								}|
								parameter_list ',' ELLIPSIS	{};

parameter_list:					parameter_declaration {
									/*First Parameter Added here*/
								}|
								parameter_list ',' parameter_declaration {
									/*More Parameters are already added here*/
								};

parameter_declaration:		declaration_specifiers declarator {
								/*The parameter is already in the current Symbol Table*/
								}|
								declaration_specifiers {};

assignment_expression_opt:	assignment_expression {$$ = $1;}|
								/*Epslion*/ {$$.loc = NULL;};

pointer:						'*' type_qualifier_list_opt {
									$$.type = new typeNode(t_PTR);
								}|
								'*' type_qualifier_list_opt pointer {
									$$.type = new typeNode(t_PTR,1,$3.type);
								};

designation_opt:				designation	|
								/*Epslion*/	;

designation:					designator_list '=' ;

designator_list:					designator 	|
								designator_list designator;

designator:						'[' constant_expression ']'|
								'.' IDENTIFIER {};

/*STATEMENTS*/
statement:						labeled_statement {/*Switch Case*/}|
								compound_statement {$$ = $1;}|
								expression_statement {$$ = NULL;}|
								selection_statement{$$ = $1;}|
								iteration_statement {$$ = $1;}|
								jump_statement {$$ = $1;};

labeled_statement:				IDENTIFIER ':' statement {}|
								CASE_KEYWORD constant_expression ':' statement {}|
								DEFAULT_KEYWORD ':' statement {};

compound_statement:			'{' block_item_list_opt '}'	{$$ = $2;};

block_item_list_opt:			block_item_list {$$ = $1;}|	
								/*Epslion*/	{$$ = NULL;};

block_item_list:					block_item {$$ = $1;}|
								block_item_list M block_item {backpatch($1,$2);
									$$ = $3;};

block_item:						declaration {$$ = NULL;}|
								statement {$$ = $1;};

expression_statement:			expression_opt ';'{$$ = $1;};

expression_opt:				expression {$$ = $1;}|
								/*Epslion*/	{/*Initialize Expression to NULL*/
									$$.loc = NULL;
								};

selection_statement:			IF_KEYWORD '(' expression N ')' M statement N ELSE_KEYWORD M statement {
									/* All the logics mentioned here have been discussed in class for selection and iteration statements*/
									/* A dangling goto is present after expression just in case if the type of the expression is not boolean
									then a type conversion will be performed. The code of the type conversion will be placed at the end. Therefore, this dangling pointer needs to be pointing the newly created if which checks whether the expression is zero or not.
									Another dangling goto after the statement of IF condition. That is also just for safety. It will be used if the nested statement will also have some conditional statements
									There are Ms in between to store the location / quad index of first list of statements and second list of statements*/
									$7 = merge($7,$8);
									$11 = merge($11,makelist(nextinstr));
									quad.emit(o_GOTO,"-1");
									backpatch($4,nextinstr);
									conv2Bool(&$3);
									backpatch($3.truelist,$6);
									backpatch($3.falselist,$10);
									$$ = merge($7,$11);
								}|
								IF_KEYWORD '(' expression N ')' M statement {
									/* Very similar to IF and ELSE part. Here the else part is missing so we do not specifically need dangling goto for the statements list. We will however need dangling goto for expression (if it is not boolean, that is the only situation)*/
									$7 = merge($7,makelist(nextinstr));
									quad.emit(o_GOTO,"-1");
									backpatch($4,nextinstr);
									conv2Bool(&$3);
									backpatch($3.truelist,$6);
									$$ = merge($7,$3.falselist);
								}|
								SWITCH_KEYWORD '(' expression ')' statement	{};

iteration_statement:			DO_KEYWORD M statement  WHILE_KEYWORD '(' M expression N ')' ';' {
									/*Here we don't have to by default jump to the start. The output of the condtion of the while will decide whether we have to jump to the beginning of the loop or to the next instruction. So, we have M in front of the statements to store its locations. We also have M in front of the expression because there can be conditional statements in statement block. So there must be a pointer which stores the location of the start of expression. Again we have a dangling goto after expression (if it is not boolean)*/
									backpatch($8,nextinstr);
									backpatch($3,$6);			/*S1.nextlist to M2.instr*/
									conv2Bool(&$7);
									backpatch($7.truelist,$2);	/*B.truelist to M1.instr*/
									$$ = $7.falselist;
								}|
								FOR_KEYWORD '(' expression_opt ';' M expression_opt N ';' M expression_opt N ')' M statement {
									/*After the loop end there has to be a goto to 3rd expression. Thus, we have a M before the third expression. After the execution of the third expression we move to the middle condition. Dangling pointer is there if the expression is not boolean. If the condition is successful then we have to go to the statements list and therefore, we have a M before the statements list.*/
									backpatch($11,$5);			/*N2.nextlist to M1.instr*/
									backpatch($14,$9);			/*S.nextlist to M2.instr*/
									quad.emit(o_GOTO,$9);
									backpatch($7,nextinstr);	/*N1.nextlist to nextinstr*/
									conv2Bool(&$6);
									backpatch($6.truelist,$13);
									$$ = $6.falselist;
								}|
								WHILE_KEYWORD '(' M expression N ')' M statement {
									/*There has to be goto which takes it again to the beginning of the loop where we check the conditions. For storing that location we have a M in front of the expression. Also if the expression returns success then we have to jump to the statements list. Therefore, we again need to store the location of the beginning of the statement list. Thus, we have one more M in front of the statment list.
									*/
									quad.emit(o_GOTO,$3);
									backpatch($8,$3); 			/*S.nextlist to M1.instr*/
									backpatch($5,nextinstr); 	/*N1.nextlist to nextinstr*/
									conv2Bool(&$4);
									backpatch($4.truelist,$7);
									$$ = $4.falselist;
								}|
								FOR_KEYWORD '(' declaration expression_opt ';' expression_opt ')' statement {};

jump_statement:				GOTO_KEYWORD IDENTIFIER ';' {}|
								CONTINUE_KEYWORD ';' {}|
								BREAK_KEYWORD ';' {}|
								RETURN_KEYWORD expression_opt ';' {
									if($2.loc == NULL)
										quad.emit(o_RET);
									else
									{
										expStruct * dummy = new expStruct();
										dummy->loc = currST->table[0];
										dummy->type = dummy->loc->type;
										typecheck(dummy,&$2,true);
										delete dummy;
										quad.emit(o_RET,$2.loc->name);
									}
								};

/*External Definitions*/
translation_unit:				external_declaration|
								translation_unit external_declaration;

external_declaration:			function_definition|
								declaration;

function_definition:	declaration_specifiers declarator declaration_list_opt compound_statement {
									symtab_element * func = globalST->lookup($2.loc->name);
									/*The first entry of the CurrST is the function name. Already mentioned in the code above. It has to be changes to return_val. Define the function and reinitialize the current symbol table so that it is ready to take new inputs of functions*/
									func->nestedTable->table[0]->type = CopyType(func->type);
									func->nestedTable->table[0]->name = "retVal";
									func->nestedTable->table[0]->offset = 0;
									/*Adjust offset and append current Symbol table to funciton symbol table*/
									/*If return type is pointer then change the offset*/
									if(func->nestedTable->table[0]->type->baseType == t_PTR)
									{
										int diff = size_of_ptr - func->nestedTable->table[0]->size;
										func->nestedTable->table[0]->size = size_of_ptr;
										for(int i=1;i<func->nestedTable->table.size();i++)
										{
											func->nestedTable->table[i]->offset += diff;
										}
									}
									int offset_size = 0;
									for(int i=0;i<func->nestedTable->table.size();i++)
									{
										offset_size += func->nestedTable->table[i]->size;
									}
									/*Function Definition Ended so Create a new Current Symbol Table*/
									currST = new SymbolTable();
								};

declaration_list_opt:			declaration_list|
								/*Epslion*/;

declaration_list:				declaration|
								declaration_list declaration;

%%

void yyerror(const char* s) {printf("%s", s);}
