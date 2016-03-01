%{
#include "y.tab.h"
#include "ass5_13CS30021_translator.h"
#include <cstdlib>
#include <cstring>
#include <string>
extern void yyerror(const char *);
static void comment(void);
%}

AUTO			"auto"
BREAK			"break"
EXTERN		"extern"
ENUM                         "enum"
CONST			"const"
GOTO			"goto"
SIZEOF			"sizeof"
CONTINUE		"continue"
RETURN		"return"
VOID			"void"
CASE			"case"
DOUBLE		"double"
FLOAT			"float"
LONG			"long"
INT			"int"
SHORT			"short"
CHAR			"char"
SIGNED			"signed"
VOLATILE		"volatile"
STATIC			"static"
DEFAULT		"default"
INLINE			"inline"
STRUCT		"struct"
SWITCH		"switch"
TYPEDEF		"typedef"
REGISTER		"register"
RESTRICT		"restrict"
UNSIGNED		"unsigned"
UNION			"union"
DO			"do"
WHILE			"while"
IF			"if"
ELSE			"else"
FOR			"for"
_BOOL			"_Bool"
_COMPLEX		"_Complex"
_IMAGINARY		"_Imaginary"

IDENTIFIER-NONDIGIT        [a-zA-Z_]

DIGIT                               [0-9]
NONZERO-DIGIT                [1-9]
SIGN                                [+-]
DIGIT-SEQUENCE              {DIGIT}+
INTEGER_CONST               ({NONZERO-DIGIT}({DIGIT}|{NONZERO-DIGIT})*)|"0"
EXPONENT-PART               ("e"|"E"){SIGN}?{DIGIT-SEQUENCE}
RATIONAL-CONSTANT       ({DIGIT-SEQUENCE}?"."{DIGIT-SEQUENCE}|{DIGIT-SEQUENCE}".")
FLOAT_CONST                  ({RATIONAL-CONSTANT}{EXPONENT-PART}?)|({DIGIT-SEQUENCE}?{EXPONENT-PART})

ID                                   {IDENTIFIER-NONDIGIT}({DIGIT}|{IDENTIFIER-NONDIGIT})*

ESCAPE-SEQUENCE           [\\'\\"\\?\\\\\\a\\b\\f\\n\\r\\t\\v]
WS                                  [ \t\n]

S-CHAR                          ([^\"\\\n]|{ESCAPE-SEQUENCE})
S-CHAR-SEQUENCE         {S-CHAR}+
STRING                          \"{S-CHAR-SEQUENCE}?\"

C-CHAR                          ([^\'\\\n]|{ESCAPE-SEQUENCE})
C-CHAR-SEQUENCE         {C-CHAR}+
CHAR_CONST                  "'"{C-CHAR-SEQUENCE}"'"
ENUMERATION_CONST                  {ID}
SINGLECOMMENT           "//".*
MULTICOMMENT             "/"\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+"/"

%%
{AUTO}                       {return AUTO_KEYWORD;}
{RESTRICT}                 {return RESTRICT_KEYWORD;}
{ENUM}                      {return ENUM_KEYWORD;}
{IF}                             {return IF_KEYWORD;}
{ELSE}                        {return ELSE_KEYWORD;}
{GOTO}                      {return GOTO_KEYWORD;}
{SWITCH}                    {return SWITCH_KEYWORD;}
{CASE}                       {return CASE_KEYWORD;}
{CONTINUE}                {return CONTINUE_KEYWORD;}
{BREAK}                     {return BREAK_KEYWORD;}
{DEFAULT}                  {return DEFAULT_KEYWORD;}
{RETURN}                   {return RETURN_KEYWORD;}
{DOUBLE}                   {return DOUBLE_KEYWORD;}
{FLOAT}                      {return FLOAT_KEYWORD;}
{UNSIGNED}                {return UNSIGNED_KEYWORD;}
{SIGNED}                    {return SIGNED_KEYWORD;}
{LONG}                       {return LONG_KEYWORD;}
{INT}                          {return INT_KEYWORD;}
{SHORT}                     {return SHORT_KEYWORD;}
{CHAR}                       {return CHAR_KEYWORD;}
{VOID}                       {return VOID_KEYWORD;}
{SIZEOF}                    {return SIZEOF_KEYWORD;}
{_BOOL}                     {return BOOL_KEYWORD;}
{_COMPLEX}               {return COMPLEX_KEYWORD;}
{_IMAGINARY}             {return IMAGINARY_KEYWORD;}
{FOR}                         {return FOR_KEYWORD;}
{DO}                          {return DO_KEYWORD;}
{WHILE}                      {return WHILE_KEYWORD;}
{CONST}                     {return CONST_KEYWORD;}
{STATIC}                    {return STATIC_KEYWORD;}
{REGISTER}                {return REGISTER_KEYWORD;}
{EXTERN}                   {return EXTERN_KEYWORD;}
{VOLATILE}                 {return VOLATILE_KEYWORD;}
{INLINE}                      {return INLINE_KEYWORD;}
{STRUCT}                   {return STRUCT_KEYWORD;}
{TYPEDEF}                  {return TYPEDEF_KEYWORD;}
{UNION}                     {return UNION_KEYWORD;}

{ID}                           {yylval.idAttr.name = new string(yytext); return IDENTIFIER;}                             

{INTEGER_CONST}       {yylval.intval = atoi(yytext); return INTEGER_CONSTANT;}
{FLOAT_CONST}          {yylval.floatval = atof(yytext); return FLOAT_CONSTANT;}
{ENUMERATION_CONST}           {return ENUM_CONSTANT;}
{CHAR_CONST}           {yylval.charval = yytext[1]; return CHAR_CONSTANT;}
{STRING}                    {yylval.stringval = strdup(yytext); return STRING_LITERAL;}
"..."                            {return ELLIPSIS;}
"<<="                        {return LEFT_SHIFT_EQUAL;}
">>="			{return RIGHT_SHIFT_EQUAL;}
"->"			{return VAL_AT;}
"++"			{return PLUS_PLUS;}
"--"			{return MINUS_MINUS;}
"<<"			{return LEFT_SHIFT;}
">>"			{return RIGHT_SHIFT;}
"<="			{return LESS_EQUAL;}
">="			{return GREATER_EQUAL;}
"=="			{return EQUAL_EQUAL;}
"!="			{return NOT_EQUAL;}
"&&"			{return LOGICAL_AND;}
"||"			{return LOGICAL_OR;}
"*="			{return STAR_EQUAL;}
"/="			{return BY_EQUAL;}
"%="			{return PERCENT_EQUAL;}
"+="			{return PLUS_EQUAL;}
"-="			{return MINUS_EQUAL;}
"&="			{return AND_EQUAL;}
"^="			{return BITWISENOT_EQUAL;}
"|="			{return OR_EQUAL;}
"["			{return yytext[0];}
"]"			{return yytext[0];}
"("			{return yytext[0];}
")"			{return yytext[0];}
"{"			{return yytext[0];}
"}"			{return yytext[0];}
"."			{return yytext[0];}
"&"			{return yytext[0];}
"*"			{return yytext[0];}
"+"			{return yytext[0];}
"-"			{return yytext[0];}
"~"			{return yytext[0];}
"!"			{return yytext[0];}
"/"			{return yytext[0];}
"%"			{return yytext[0];}
"<"			{return yytext[0];}
">"			{return yytext[0];}
"^"			{return yytext[0];}
"|"			{return yytext[0];}
"?"			{return yytext[0];}
":"			{return yytext[0];}
";"			{return yytext[0];}
"="			{return yytext[0];}
","			{return yytext[0];}
"#"			{return yytext[0];}
{SINGLECOMMENT} ;
{MULTICOMMENT} ;
{WS}                           {}        
%%
