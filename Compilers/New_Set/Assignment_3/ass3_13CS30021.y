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
%%


statement : ;


%%

void yyerror(const char* s) {
	printf("%s", s);
}