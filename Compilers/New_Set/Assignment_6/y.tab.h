/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO_KEYWORD = 258,
    RESTRICT_KEYWORD = 259,
    ENUM_KEYWORD = 260,
    BREAK_KEYWORD = 261,
    CASE_KEYWORD = 262,
    SWITCH_KEYWORD = 263,
    CONST_KEYWORD = 264,
    CONTINUE_KEYWORD = 265,
    DEFAULT_KEYWORD = 266,
    GOTO_KEYWORD = 267,
    IF_KEYWORD = 268,
    ELSE_KEYWORD = 269,
    EXTERN_KEYWORD = 270,
    REGISTER_KEYWORD = 271,
    VOLATILE_KEYWORD = 272,
    FOR_KEYWORD = 273,
    WHILE_KEYWORD = 274,
    DO_KEYWORD = 275,
    INLINE_KEYWORD = 276,
    DOUBLE_KEYWORD = 277,
    FLOAT_KEYWORD = 278,
    SIGNED_KEYWORD = 279,
    UNSIGNED_KEYWORD = 280,
    LONG_KEYWORD = 281,
    INT_KEYWORD = 282,
    SHORT_KEYWORD = 283,
    CHAR_KEYWORD = 284,
    VOID_KEYWORD = 285,
    BOOL_KEYWORD = 286,
    COMPLEX_KEYWORD = 287,
    IMAGINARY_KEYWORD = 288,
    RETURN_KEYWORD = 289,
    SIZEOF_KEYWORD = 290,
    STATIC_KEYWORD = 291,
    STRUCT_KEYWORD = 292,
    TYPEDEF_KEYWORD = 293,
    UNION_KEYWORD = 294,
    IDENTIFIER = 295,
    INTEGER_CONSTANT = 296,
    FLOATING_CONSTANT = 297,
    ENUM_CONSTANT = 298,
    CHAR_CONSTANT = 299,
    STRING_LITERAL = 300,
    VAL_AT = 301,
    PLUS_PLUS = 302,
    MINUS_MINUS = 303,
    LEFT_SHIFT = 304,
    RIGHT_SHIFT = 305,
    LESS_EQUAL = 306,
    GREATER_EQUAL = 307,
    EQUAL = 308,
    NOT_EQUAL = 309,
    AND = 310,
    OR = 311,
    ELLIPSIS = 312,
    STAR_EQUAL = 313,
    BY_EQUAL = 314,
    PERCENT_EQUAL = 315,
    PLUS_EQUAL = 316,
    MINUS_EQUAL = 317,
    LEFT_SHIFT_EQUAL = 318,
    RIGHT_SHIFT_EQUAL = 319,
    AND_EQUAL = 320,
    BITWISENOT_EQUAL = 321,
    OR_EQUAL = 322,
    SINGLECOMMENT = 323,
    MULTICOMMENT = 324,
    UNARY = 325
  };
#endif
/* Tokens.  */
#define AUTO_KEYWORD 258
#define RESTRICT_KEYWORD 259
#define ENUM_KEYWORD 260
#define BREAK_KEYWORD 261
#define CASE_KEYWORD 262
#define SWITCH_KEYWORD 263
#define CONST_KEYWORD 264
#define CONTINUE_KEYWORD 265
#define DEFAULT_KEYWORD 266
#define GOTO_KEYWORD 267
#define IF_KEYWORD 268
#define ELSE_KEYWORD 269
#define EXTERN_KEYWORD 270
#define REGISTER_KEYWORD 271
#define VOLATILE_KEYWORD 272
#define FOR_KEYWORD 273
#define WHILE_KEYWORD 274
#define DO_KEYWORD 275
#define INLINE_KEYWORD 276
#define DOUBLE_KEYWORD 277
#define FLOAT_KEYWORD 278
#define SIGNED_KEYWORD 279
#define UNSIGNED_KEYWORD 280
#define LONG_KEYWORD 281
#define INT_KEYWORD 282
#define SHORT_KEYWORD 283
#define CHAR_KEYWORD 284
#define VOID_KEYWORD 285
#define BOOL_KEYWORD 286
#define COMPLEX_KEYWORD 287
#define IMAGINARY_KEYWORD 288
#define RETURN_KEYWORD 289
#define SIZEOF_KEYWORD 290
#define STATIC_KEYWORD 291
#define STRUCT_KEYWORD 292
#define TYPEDEF_KEYWORD 293
#define UNION_KEYWORD 294
#define IDENTIFIER 295
#define INTEGER_CONSTANT 296
#define FLOATING_CONSTANT 297
#define ENUM_CONSTANT 298
#define CHAR_CONSTANT 299
#define STRING_LITERAL 300
#define VAL_AT 301
#define PLUS_PLUS 302
#define MINUS_MINUS 303
#define LEFT_SHIFT 304
#define RIGHT_SHIFT 305
#define LESS_EQUAL 306
#define GREATER_EQUAL 307
#define EQUAL 308
#define NOT_EQUAL 309
#define AND 310
#define OR 311
#define ELLIPSIS 312
#define STAR_EQUAL 313
#define BY_EQUAL 314
#define PERCENT_EQUAL 315
#define PLUS_EQUAL 316
#define MINUS_EQUAL 317
#define LEFT_SHIFT_EQUAL 318
#define RIGHT_SHIFT_EQUAL 319
#define AND_EQUAL 320
#define BITWISENOT_EQUAL 321
#define OR_EQUAL 322
#define SINGLECOMMENT 323
#define MULTICOMMENT 324
#define UNARY 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 15 "ass6_13CS30021.y" /* yacc.c:1909  */

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

#line 211 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
