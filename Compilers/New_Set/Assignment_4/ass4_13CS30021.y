%{
#include <stdio.h>
extern int yylex();
void yyerror(const char* s);

%}




%union {
  int intval;
  float floatval;
  char *charval;
}

%token SINGLE_COMMENT;
%token MULTI_COMMENT;
%token AUTO_KEYWORD;
%token ENUM_KEYWORD;
%token RESTRICT_KEYWORD;
%token CASE_KEYWORD;
%token DOUBLE_KEYWORD;
%token FLOAT_KEYWORD;
%token LONG_KEYWORD;
%token INT_KEYWORD;
%token SHORT_KEYWORD;
%token CHAR_KEYWORD;
%token VOID_KEYWORD;
%token SIGNED_KEYWORD;
%token VOLATILE_KEYWORD;
%token CONST_KEYWORD;
%token GOTO_KEYWORD;
%token SIZEOF_KEYWORD;
%token BOOL_KEYWORD;
%token CONTINUE_KEYWORD;
%token UNSIGNED_KEYWORD;
%token BREAK_KEYWORD;
%token EXTERN_KEYWORD;
%token RETURN_KEYWORD;
%token STATIC_KEYWORD;
%token COMPLEX_KEYWORD;
%token DEFAULT_KEYWORD;
%token INLINE_KEYWORD;
%token STRUCT_KEYWORD;
%token IMAGINARY_KEYWORD;
%token SWITCH_KEYWORD;
%token TYPEDEF_KEYWORD;
%token REGISTER_KEYWORD;
%token UNION_KEYWORD;
%token DO_KEYWORD;
%token WHILE_KEYWORD;
%token IF_KEYWORD;
%token ELSE_KEYWORD;
%token FOR_KEYWORD;
%token VAL_AT;
%token PLUS_PLUS;
%token MINUS_MINUS;
%token LEFT_SHIFT;
%token RIGHT_SHIFT;
%token LESS_EQUAL;
%token GREATER_EQUAL;
%token EQUAL_EQUAL;
%token NOT_EQUAL;
%token LOGICAL_AND;
%token LOGICAL_OR;
%token PERCENT_EQUAL;
%token PLUS_EQUAL;
%token MINUS_EQUAL;
%token LEFT_SHIFT_EQUAL;
%token ELLIPSES;
%token STAR_EQUAL;
%token BY_EQUAL;
%token RIGHT_SHIFT_EQUAL;
%token AND_EQUAL;
%token BITWISENOT_EQUAL;
%token OR_EQUAL;
%token <intval> IDENTIFIER;
%token <intval>  INTEGER_CONSTANT;
%token <floatval> FLOAT_CONSTANT;
%token <intval> ENUMERATION;
%token <charval> CHAR_CONSTANT;
%token <charval> STRING_LITERAL;

%expect 1

%start translation_unit;
%%

primary_expression
	: IDENTIFIER
	| INTEGER_CONSTANT
	| FLOAT_CONSTANT
	| CHAR_CONSTANT
	| ENUMERATION
	| STRING_LITERAL
	| '(' expression ')'
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression VAL_AT IDENTIFIER
	| postfix_expression PLUS_PLUS
	| postfix_expression MINUS_MINUS
	| '(' type_name ')' '{' initializer_list '}'
	| '(' type_name ')' '{' initializer_list ',' '}'
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| PLUS_PLUS unary_expression
	| MINUS_MINUS unary_expression
	| unary_operator cast_expression
	| SIZEOF_KEYWORD unary_expression
	| SIZEOF_KEYWORD '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_SHIFT additive_expression
	| shift_expression RIGHT_SHIFT additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LESS_EQUAL shift_expression
	| relational_expression GREATER_EQUAL shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQUAL_EQUAL relational_expression
	| equality_expression NOT_EQUAL relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression LOGICAL_AND inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression LOGICAL_OR logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	| function_specifier
	| function_specifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator
	| declarator '=' initializer
	;
storage_class_specifier
	: TYPEDEF_KEYWORD
	| EXTERN_KEYWORD
	| STATIC_KEYWORD
	| AUTO_KEYWORD
	| REGISTER_KEYWORD
	;

type_specifier
	: SIGNED_KEYWORD
	| UNSIGNED_KEYWORD
	| BOOL_KEYWORD
	| COMPLEX_KEYWORD
	| IMAGINARY_KEYWORD
	| enum_specifier
	| VOID_KEYWORD
	| CHAR_KEYWORD
	| SHORT_KEYWORD
	| INT_KEYWORD
	| LONG_KEYWORD
	| FLOAT_KEYWORD
	| DOUBLE_KEYWORD
	;

specifier_qualifier_list
	: type_specifier
	| type_specifier specifier_qualifier_list
	| type_qualifier
	| type_qualifier specifier_qualifier_list
	;

assignment_operator
	: '='
	|STAR_EQUAL
	|BY_EQUAL
    	|PERCENT_EQUAL
    	|PLUS_EQUAL
    	|MINUS_EQUAL
    	|LEFT_SHIFT_EQUAL
    	|RIGHT_SHIFT_EQUAL
    	|AND_EQUAL
    	|BITWISENOT_EQUAL
    	|OR_EQUAL
	;

enum_specifier
	: ENUM_KEYWORD '{' enumerator_list '}'
	| ENUM_KEYWORD IDENTIFIER '{' enumerator_list '}'
	| ENUM_KEYWORD IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST_KEYWORD
	| RESTRICT_KEYWORD
	| VOLATILE_KEYWORD
	;

function_specifier
	: INLINE_KEYWORD
	;

declarator
	: direct_declarator
	| pointer direct_declarator
	;

direct_declarator
	: IDENTIFIER
	| '(' declarator ')'
	| direct_declarator '[' type_qualifier_list '*' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '[' ']'
	| direct_declarator '[' '*' ']'
	| direct_declarator '[' type_qualifier_list ']'
	| direct_declarator '[' assignment_expression ']'
	| direct_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_declarator '[' STATIC_KEYWORD assignment_expression ']'
	| direct_declarator '[' STATIC_KEYWORD type_qualifier_list assignment_expression ']'
	| direct_declarator '[' type_qualifier_list STATIC_KEYWORD assignment_expression ']'
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSES
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| designation initializer
	| initializer_list ',' initializer
	| initializer_list ',' designation initializer
	;

designation
	: designator_list '='
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'
	| '.' IDENTIFIER
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator compound_statement
	| declaration_specifiers declarator declaration_list compound_statement
	;

declaration_list
	: declaration
	| declaration_list declaration
	;


statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE_KEYWORD constant_expression ':' statement
	| DEFAULT_KEYWORD ':' statement
	;

compound_statement
	: '{' '}'
	| '{' block_item_list '}'
	;

block_item_list
	: block_item
	| block_item_list block_item
	;

block_item
	: declaration
	| statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF_KEYWORD '(' expression ')' statement
	| IF_KEYWORD '(' expression ')' statement ELSE_KEYWORD statement
	| SWITCH_KEYWORD '(' expression ')' statement
	;

iteration_statement
	: WHILE_KEYWORD '(' expression ')' statement
	| DO_KEYWORD statement WHILE_KEYWORD '(' expression ')' ';'
	| FOR_KEYWORD '(' expression_statement expression_statement expression ')' statement
	| FOR_KEYWORD '(' declaration expression_statement expression ')' statement
	;

jump_statement
	: GOTO_KEYWORD IDENTIFIER ';'
	| CONTINUE_KEYWORD ';'
	| BREAK_KEYWORD ';'
	| RETURN_KEYWORD ';'
	| RETURN_KEYWORD expression ';'
	;

%%

void yyerror(const char* s) {
	printf("%s", s);
}
