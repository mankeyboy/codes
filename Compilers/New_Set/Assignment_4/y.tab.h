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
    SINGLE_COMMENT = 258,
    MULTI_COMMENT = 259,
    AUTO_KEYWORD = 260,
    ENUM_KEYWORD = 261,
    RESTRICT_KEYWORD = 262,
    CASE_KEYWORD = 263,
    DOUBLE_KEYWORD = 264,
    FLOAT_KEYWORD = 265,
    LONG_KEYWORD = 266,
    INT_KEYWORD = 267,
    SHORT_KEYWORD = 268,
    CHAR_KEYWORD = 269,
    VOID_KEYWORD = 270,
    SIGNED_KEYWORD = 271,
    VOLATILE_KEYWORD = 272,
    CONST_KEYWORD = 273,
    GOTO_KEYWORD = 274,
    SIZEOF_KEYWORD = 275,
    BOOL_KEYWORD = 276,
    CONTINUE_KEYWORD = 277,
    UNSIGNED_KEYWORD = 278,
    BREAK_KEYWORD = 279,
    EXTERN_KEYWORD = 280,
    RETURN_KEYWORD = 281,
    STATIC_KEYWORD = 282,
    COMPLEX_KEYWORD = 283,
    DEFAULT_KEYWORD = 284,
    INLINE_KEYWORD = 285,
    STRUCT_KEYWORD = 286,
    IMAGINARY_KEYWORD = 287,
    SWITCH_KEYWORD = 288,
    TYPEDEF_KEYWORD = 289,
    REGISTER_KEYWORD = 290,
    UNION_KEYWORD = 291,
    DO_KEYWORD = 292,
    WHILE_KEYWORD = 293,
    IF_KEYWORD = 294,
    ELSE_KEYWORD = 295,
    FOR_KEYWORD = 296,
    VAL_AT = 297,
    PLUS_PLUS = 298,
    MINUS_MINUS = 299,
    LEFT_SHIFT = 300,
    RIGHT_SHIFT = 301,
    LESS_EQUAL = 302,
    GREATER_EQUAL = 303,
    EQUAL_EQUAL = 304,
    NOT_EQUAL = 305,
    LOGICAL_AND = 306,
    LOGICAL_OR = 307,
    PERCENT_EQUAL = 308,
    PLUS_EQUAL = 309,
    MINUS_EQUAL = 310,
    LEFT_SHIFT_EQUAL = 311,
    ELLIPSES = 312,
    STAR_EQUAL = 313,
    BY_EQUAL = 314,
    RIGHT_SHIFT_EQUAL = 315,
    AND_EQUAL = 316,
    BITWISENOT_EQUAL = 317,
    OR_EQUAL = 318,
    IDENTIFIER = 319,
    INTEGER_CONSTANT = 320,
    FLOAT_CONSTANT = 321,
    ENUMERATION = 322,
    CHAR_CONSTANT = 323,
    STRING_LITERAL = 324
  };
#endif
/* Tokens.  */
#define SINGLE_COMMENT 258
#define MULTI_COMMENT 259
#define AUTO_KEYWORD 260
#define ENUM_KEYWORD 261
#define RESTRICT_KEYWORD 262
#define CASE_KEYWORD 263
#define DOUBLE_KEYWORD 264
#define FLOAT_KEYWORD 265
#define LONG_KEYWORD 266
#define INT_KEYWORD 267
#define SHORT_KEYWORD 268
#define CHAR_KEYWORD 269
#define VOID_KEYWORD 270
#define SIGNED_KEYWORD 271
#define VOLATILE_KEYWORD 272
#define CONST_KEYWORD 273
#define GOTO_KEYWORD 274
#define SIZEOF_KEYWORD 275
#define BOOL_KEYWORD 276
#define CONTINUE_KEYWORD 277
#define UNSIGNED_KEYWORD 278
#define BREAK_KEYWORD 279
#define EXTERN_KEYWORD 280
#define RETURN_KEYWORD 281
#define STATIC_KEYWORD 282
#define COMPLEX_KEYWORD 283
#define DEFAULT_KEYWORD 284
#define INLINE_KEYWORD 285
#define STRUCT_KEYWORD 286
#define IMAGINARY_KEYWORD 287
#define SWITCH_KEYWORD 288
#define TYPEDEF_KEYWORD 289
#define REGISTER_KEYWORD 290
#define UNION_KEYWORD 291
#define DO_KEYWORD 292
#define WHILE_KEYWORD 293
#define IF_KEYWORD 294
#define ELSE_KEYWORD 295
#define FOR_KEYWORD 296
#define VAL_AT 297
#define PLUS_PLUS 298
#define MINUS_MINUS 299
#define LEFT_SHIFT 300
#define RIGHT_SHIFT 301
#define LESS_EQUAL 302
#define GREATER_EQUAL 303
#define EQUAL_EQUAL 304
#define NOT_EQUAL 305
#define LOGICAL_AND 306
#define LOGICAL_OR 307
#define PERCENT_EQUAL 308
#define PLUS_EQUAL 309
#define MINUS_EQUAL 310
#define LEFT_SHIFT_EQUAL 311
#define ELLIPSES 312
#define STAR_EQUAL 313
#define BY_EQUAL 314
#define RIGHT_SHIFT_EQUAL 315
#define AND_EQUAL 316
#define BITWISENOT_EQUAL 317
#define OR_EQUAL 318
#define IDENTIFIER 319
#define INTEGER_CONSTANT 320
#define FLOAT_CONSTANT 321
#define ENUMERATION 322
#define CHAR_CONSTANT 323
#define STRING_LITERAL 324

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 11 "ass4_13CS30021.y" /* yacc.c:1909  */

  int intval;
  float floatval;
  char *charval;

#line 198 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
