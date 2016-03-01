/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ass6_13CS30021.y" /* yacc.c:339  */

/* C/C++ Headers and  include files */
#include <stdio.h>
extern int yylex(void);
void yyerror(const char* s);
#include <iostream>
#include "ass6_13CS30021_translator.h"
#include <cstdlib>
#include <cstring>
#include <string>
using namespace std;

#line 79 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 15 "ass6_13CS30021.y" /* yacc.c:355  */

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

#line 276 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 291 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   956

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  361

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,     2,     2,     2,    74,    86,     2,
      76,    77,    72,    70,    82,    71,    80,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    92,    94,
      87,    93,    88,    91,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    78,     2,    79,    90,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,    89,    83,    84,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    77,    77,    83,    88,   121,   130,   139,   148,   149,
     154,   156,   159,   175,   198,   199,   200,   218,   238,   239,
     241,   247,   253,   257,   261,   264,   282,   300,   344,   345,
     347,   350,   353,   356,   359,   362,   366,   384,   387,   390,
     396,   402,   409,   412,   418,   426,   429,   434,   441,   444,
     452,   460,   468,   477,   480,   488,   498,   501,   507,   510,
     521,   524,   530,   533,   539,   542,   554,   557,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   587,
     590,   610,   612,   613,   616,   622,   626,   636,   636,   639,
     640,   641,   642,   644,   648,   650,   657,   663,   664,   665,
     666,   668,   671,   672,   675,   676,   677,   678,   681,   682,
     683,   686,   687,   688,   690,   691,   693,   696,   698,   702,
     704,   705,   707,   708,   709,   711,   712,   714,   715,   716,
     718,   720,   723,   728,   762,   779,   802,   805,   841,   842,
     843,   844,   874,   875,   877,   878,   880,   880,   883,   884,
     886,   888,   891,   892,   894,   895,   897,   900,   902,   905,
     909,   912,   914,   915,   917,   920,   924,   924,   927,   929,
     930,   932,   933,   936,   937,   938,   939,   940,   941,   943,
     944,   945,   947,   949,   950,   952,   953,   956,   957,   959,
     961,   962,   966,   981,   990,   992,  1000,  1010,  1020,  1022,
    1023,  1024,  1025,  1040,  1041,  1043,  1044,  1046,  1072,  1072,
    1075,  1076
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO_KEYWORD", "RESTRICT_KEYWORD",
  "ENUM_KEYWORD", "BREAK_KEYWORD", "CASE_KEYWORD", "SWITCH_KEYWORD",
  "CONST_KEYWORD", "CONTINUE_KEYWORD", "DEFAULT_KEYWORD", "GOTO_KEYWORD",
  "IF_KEYWORD", "ELSE_KEYWORD", "EXTERN_KEYWORD", "REGISTER_KEYWORD",
  "VOLATILE_KEYWORD", "FOR_KEYWORD", "WHILE_KEYWORD", "DO_KEYWORD",
  "INLINE_KEYWORD", "DOUBLE_KEYWORD", "FLOAT_KEYWORD", "SIGNED_KEYWORD",
  "UNSIGNED_KEYWORD", "LONG_KEYWORD", "INT_KEYWORD", "SHORT_KEYWORD",
  "CHAR_KEYWORD", "VOID_KEYWORD", "BOOL_KEYWORD", "COMPLEX_KEYWORD",
  "IMAGINARY_KEYWORD", "RETURN_KEYWORD", "SIZEOF_KEYWORD",
  "STATIC_KEYWORD", "STRUCT_KEYWORD", "TYPEDEF_KEYWORD", "UNION_KEYWORD",
  "IDENTIFIER", "INTEGER_CONSTANT", "FLOATING_CONSTANT", "ENUM_CONSTANT",
  "CHAR_CONSTANT", "STRING_LITERAL", "VAL_AT", "PLUS_PLUS", "MINUS_MINUS",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_EQUAL", "GREATER_EQUAL", "EQUAL",
  "NOT_EQUAL", "AND", "OR", "ELLIPSIS", "STAR_EQUAL", "BY_EQUAL",
  "PERCENT_EQUAL", "PLUS_EQUAL", "MINUS_EQUAL", "LEFT_SHIFT_EQUAL",
  "RIGHT_SHIFT_EQUAL", "AND_EQUAL", "BITWISENOT_EQUAL", "OR_EQUAL",
  "SINGLECOMMENT", "MULTICOMMENT", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNARY", "'('", "')'", "'['", "']'", "'.'", "'{'", "','", "'}'", "'~'",
  "'!'", "'&'", "'<'", "'>'", "'|'", "'^'", "'?'", "':'", "'='", "';'",
  "$accept", "N", "M", "primary_expression", "ENUMERATION_CONST",
  "postfix_expression", "argument_expression_list",
  "argument_expression_list_opt", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "logical_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "logical_or_expression",
  "conditional_expression", "assignment_operator", "assignment_expression",
  "constant_expression", "expression", "init_declarator_list_opt",
  "declaration", "declaration_specifiers_opt", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "specifier_qualifier_list_opt",
  "specifier_qualifier_list", "identifier_opt", "enumerator_list",
  "enum_specifier", "enumerator", "type_qualifier", "function_specifier",
  "pointer_opt", "declarator", "direct_declarator",
  "type_qualifier_list_opt", "type_qualifier_list", "identifier_list_opt",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "assignment_expression_opt", "pointer", "designation_opt", "designation",
  "designator_list", "designator", "statement", "labeled_statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "expression_opt",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list_opt", "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      43,    45,    42,    47,    37,   325,    40,    41,    91,    93,
      46,   123,    44,   125,   126,    33,    38,    60,    62,   124,
      94,    63,    58,    61,    59
};
# endif

#define YYPACT_NINF -216

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-216)))

#define YYTABLE_NINF -210

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     920,  -216,  -216,    38,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,   -52,   920,   920,  -216,   920,   920,   886,
    -216,  -216,    -6,    27,    60,   -50,   -10,  -216,   -22,   344,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,    74,  -216,
      45,    60,  -216,    45,  -216,    45,   -43,   643,  -216,   -52,
      40,   920,  -216,    50,    69,  -216,  -216,  -216,  -216,    85,
      48,   852,    30,   709,  -216,  -216,  -216,  -216,  -216,   720,
     720,  -216,  -216,  -216,   523,     1,  -216,  -216,  -216,  -216,
     109,   264,   767,  -216,    14,    88,   113,   -35,   117,    42,
     137,   105,   118,   -20,  -216,  -216,  -216,   270,  -216,  -216,
     767,   -28,  -216,  -216,  -216,    55,   132,   128,   134,   133,
    -216,    60,   778,   114,   523,  -216,   523,  -216,  -216,  -216,
     -56,   487,  -216,   487,   141,   767,   174,    99,   643,  -216,
     -13,  -216,   180,  -216,  -216,   767,   767,   182,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,   767,
    -216,  -216,   767,   767,   767,   767,   767,   767,   767,   767,
     767,   767,   767,   767,   767,   767,  -216,   767,   767,  -216,
     135,   129,   767,   148,   131,   136,   190,   157,   158,   159,
    -216,   767,   147,   160,  -216,  -216,  -216,  -216,   161,   162,
    -216,  -216,   146,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,   201,  -216,   644,   767,   164,  -216,   167,   767,
     170,   171,  -216,   767,  -216,  -216,  -216,   662,   172,  -216,
      56,  -216,  -216,  -216,  -216,  -216,   168,   175,  -216,   -57,
    -216,  -216,  -216,  -216,  -216,    14,    14,    88,    88,   113,
     113,   113,   113,   -35,   -35,   117,   767,   118,    42,   767,
    -216,  -216,   165,   767,  -216,   570,   166,   767,   453,  -216,
     570,   169,   570,  -216,   379,  -216,  -216,  -216,  -216,   177,
    -216,  -216,   179,   178,   178,  -216,     1,  -216,  -216,  -216,
     643,   767,  -216,  -216,   105,   137,   767,   570,   -32,  -216,
    -216,   160,   767,   173,   767,   234,  -216,  -216,  -216,  -216,
    -216,   108,  -216,  -216,   160,  -216,   570,   184,   176,  -216,
     160,   186,    89,  -216,   192,  -216,  -216,   767,   767,   187,
    -216,  -216,  -216,   570,   189,  -216,  -216,   767,   767,   254,
     570,   213,   570,   160,  -216,   255,  -216,  -216,  -216,   231,
    -216,   767,   215,   570,  -216,  -216,  -216,   236,  -216,   570,
    -216
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    97,   127,   119,   129,    99,   100,   128,   130,   110,
     109,   105,   106,   108,   107,   104,   103,   101,   102,   111,
     112,    98,   206,   132,    88,    88,   113,    88,    88,     0,
     203,   205,   124,     0,   143,     0,    84,    93,     0,    95,
     131,    91,    87,    89,    90,    92,     1,   204,     0,   144,
     164,   142,    86,   132,   134,   132,   133,     0,   210,   132,
       0,   208,    10,   125,     0,   120,   165,   145,    94,    95,
       0,   147,   143,     0,     4,     6,     7,     5,     8,     0,
       0,    32,    33,    35,     0,   167,    30,    31,    34,    11,
      24,    36,     0,    38,    42,    45,    48,    53,    56,    62,
      64,    58,    60,    66,    79,   151,    96,   184,   207,   211,
       0,     0,   122,   136,   148,   132,     0,   146,     0,   156,
     158,   143,   163,   142,     0,    28,     0,    26,    25,    82,
       0,   115,   150,   115,     0,     0,     0,     0,     0,   166,
       0,   169,     0,    17,    16,    23,     0,     0,    69,    70,
      71,    72,    73,    77,    78,    74,    75,    76,    68,     0,
      36,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,   191,     4,   190,   187,   188,   173,   174,     0,     3,
     185,   175,     0,   176,   177,   178,    81,   126,   123,   121,
     160,   141,     0,   137,     0,     0,    35,   162,     0,     0,
       0,     0,     9,     0,   116,   114,   117,     0,     0,   172,
     167,   152,   154,   168,   170,    15,    22,     0,    20,     0,
      14,    80,    41,    39,    40,    43,    44,    46,    47,    49,
      50,    51,    52,    54,    55,    57,     0,    61,    63,     0,
       3,   201,     0,     0,   200,   191,     0,     0,   191,     3,
     191,     0,   191,   182,   191,   189,   149,   157,   159,     0,
     140,   135,     0,    29,     0,    83,   167,    37,   171,   153,
       0,     0,    13,    12,    59,    65,     0,   191,     0,   181,
     199,     2,   191,     0,     0,     0,   202,   179,   186,   138,
     139,     0,   155,    21,     2,   180,   191,     0,     0,     3,
       2,     0,   167,    19,     0,   194,     3,   191,   191,     0,
       3,    18,     3,   191,     0,     2,     3,     0,     0,   193,
     191,     0,   191,     2,    67,     0,   198,     3,   197,     0,
       3,   191,     0,   191,     2,   195,   192,     0,     3,   191,
     196
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -190,  -131,  -216,  -216,  -216,  -216,  -216,   -73,  -216,
     -79,    32,    35,     4,    33,   144,   138,    61,    65,   155,
    -216,  -106,  -216,   -19,  -125,   -83,  -216,   -37,   119,     3,
    -216,   280,  -216,   -75,   202,     2,  -216,  -216,  -216,   223,
     -11,  -216,  -216,    -9,  -216,   -61,   265,  -216,  -216,    53,
    -130,    52,  -216,  -216,   122,  -216,   289,  -215,  -216,  -216,
     203,  -104,  -216,   284,  -216,  -216,    71,  -216,  -186,  -216,
    -216,  -216,  -216,   321,  -216,  -216,  -216
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   180,   256,    89,    63,    90,   236,   237,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   159,   129,   207,   193,    35,    22,    41,    59,
      36,    37,    24,    25,   224,   132,    33,    64,    26,    65,
      27,    28,    38,    69,    56,    50,    51,   116,   117,   134,
     106,   137,   118,   119,   120,   218,    40,   138,   139,   140,
     141,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,    29,    30,    31,    60,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     125,   130,    58,    23,   206,   271,   127,   128,   232,   131,
     228,   122,    62,   161,    39,   290,   169,   170,    54,   160,
      34,   222,   293,    49,   109,   223,   223,    42,    42,   206,
      42,    42,    23,    71,     2,    72,   179,   160,   105,     4,
      67,   130,   -85,   130,    52,   316,    70,     7,   259,   131,
     223,   131,   171,   172,    55,   208,   131,   262,   131,   270,
     215,    49,   160,   239,     2,   135,   121,   136,   274,     4,
     194,    -2,    53,   133,   115,  -118,   206,     7,    32,   135,
     233,   136,   303,   242,   243,   244,   162,   163,   164,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   217,   160,   160,   210,   290,    48,   160,
      49,   317,    67,   133,    62,   133,   318,    34,     2,   105,
     133,   107,   133,     4,   324,   113,   238,    34,   175,   296,
     329,     7,  -161,   225,   135,   225,   136,  -161,   304,   289,
     241,   334,   335,   110,    43,   341,    44,    45,   287,   345,
     219,   111,   112,   349,   160,   142,   143,   144,   165,   166,
     312,   299,   167,   168,   357,   354,   305,   135,   307,   136,
     173,   174,   331,   249,   250,   251,   252,   220,    57,   221,
     298,   230,   231,   160,   301,   145,   160,   146,   328,   147,
     322,   323,   176,   315,   177,   333,   279,   245,   246,   337,
     282,   338,   247,   248,   285,   342,   253,   254,   178,   211,
     212,   213,   325,   314,   229,   214,   351,   115,   227,   353,
     235,   320,   240,   261,   263,   264,   260,   359,   265,   339,
     266,   302,   344,   267,   268,   269,   346,   194,   348,   272,
     275,   276,   223,   280,   273,  -183,   281,   283,   284,   356,
     291,   288,   292,   321,   343,   360,   309,   297,   310,   286,
     300,   326,   330,   306,   336,   160,   340,   319,    -2,   350,
     327,   105,   313,     1,     2,     3,   181,   182,   183,     4,
     184,   185,   186,   187,   332,     5,     6,     7,   188,   189,
     190,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   191,    73,    21,   347,   352,   355,
     192,    75,    76,   358,    77,    78,   258,    79,    80,   255,
     295,   294,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   257,    68,   209,   226,   278,   123,   311,    66,
      81,    82,    83,   234,   108,   308,    84,     1,     2,     3,
      47,   107,     0,     4,    86,    87,    88,   158,     0,     5,
       6,     7,     0,     0,  -191,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
      21,     0,     1,     2,     3,   181,   182,   183,     4,   184,
     185,   186,   187,     0,     5,     6,     7,   188,   189,   190,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   191,    73,    21,     0,     0,     0,   192,
      75,    76,     0,    77,    78,  -209,    79,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
      82,    83,     0,     0,     0,    84,     1,     2,     3,     0,
     107,     0,     4,    86,    87,    88,     0,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,    73,    21,
       0,     2,     3,    74,    75,    76,     4,    77,    78,     0,
      79,    80,     0,     0,     7,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,    81,    82,    83,     0,     2,     3,    84,
       0,     0,     4,     0,     0,     0,     0,    86,    87,    88,
       7,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,    73,     0,
       0,     0,     0,    74,    75,    76,     0,    77,    78,     0,
      79,    80,     0,     0,     0,     0,   181,   182,   183,     0,
     184,   185,   186,   187,     0,     0,     0,     0,   188,   189,
     190,     0,     0,    81,    82,    83,     0,     0,     0,    84,
       0,     0,     0,     0,   191,    73,     0,    86,    87,    88,
     192,    75,    76,     0,    77,    78,     0,    79,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,    82,    83,     0,     0,     0,    84,     1,     2,     3,
       0,   107,     0,     4,    86,    87,    88,     0,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    73,     0,
      21,     0,     0,    74,    75,    76,     0,    77,    78,     0,
      79,    80,     0,     0,     0,     0,     0,    73,     0,     0,
       0,   277,    74,    75,    76,     0,    77,    78,     0,    79,
      80,     0,     0,    81,    82,    83,     0,     0,     0,    84,
       0,     0,     0,     0,    85,     0,     0,    86,    87,    88,
       0,     0,    81,    82,    83,     0,     0,     0,    84,     0,
       0,     0,     0,   286,    73,     0,    86,    87,    88,    74,
      75,    76,     0,    77,    78,    73,    79,    80,     0,     0,
      74,    75,    76,     0,    77,    78,     0,    79,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
      82,    83,     0,     0,     0,   124,     0,     0,     0,     0,
      81,    82,    83,    86,    87,    88,   126,     0,     0,     0,
       0,     0,    73,     0,    86,    87,    88,    74,    75,    76,
       0,    77,    78,    73,    79,    80,     0,     0,    74,    75,
      76,     0,    77,    78,     0,    79,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    82,    83,
       0,     0,     0,    84,     0,     0,     0,     0,    81,    82,
     216,    86,    87,    88,    84,     1,     2,     3,     0,     0,
       0,     4,    86,    87,    88,     0,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    46,     0,    21,     1,
       2,     3,   114,     0,     0,     4,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,    21,     1,     2,     3,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,    21
};

static const yytype_int16 yycheck[] =
{
      73,    84,    39,     0,   110,   191,    79,    80,   138,    84,
     135,    72,    40,    92,    23,   230,    51,    52,    40,    92,
      72,    77,    79,    34,    61,    82,    82,    24,    25,   135,
      27,    28,    29,    76,     4,    78,    56,   110,    57,     9,
      51,   124,    94,   126,    94,    77,    55,    17,   179,   124,
      82,   126,    87,    88,    76,    83,   131,   182,   133,   190,
     121,    72,   135,   146,     4,    78,    36,    80,   199,     9,
     107,    91,    82,    84,    71,    81,   182,    17,    40,    78,
      93,    80,   268,   162,   163,   164,    72,    73,    74,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   122,   177,   178,   115,   322,    81,   182,
     121,   301,   123,   124,    40,   126,   302,    72,     4,   138,
     131,    81,   133,     9,   314,    77,   145,    72,    86,   260,
     320,    17,    77,   131,    78,   133,    80,    82,   269,    83,
     159,   327,   328,    93,    25,   335,    27,    28,   227,   339,
      36,    82,    83,   343,   227,    46,    47,    48,    70,    71,
     290,   265,    49,    50,   354,   351,   270,    78,   272,    80,
      53,    54,    83,   169,   170,   171,   172,   124,    93,   126,
     263,    82,    83,   256,   267,    76,   259,    78,   319,    80,
      82,    83,    55,   297,    89,   326,   215,   165,   166,   330,
     219,   332,   167,   168,   223,   336,   173,   174,    90,    77,
      82,    77,   316,   296,    40,    82,   347,   214,    77,   350,
      40,   304,    40,    94,    76,    94,    91,   358,    92,   333,
      40,   268,   338,    76,    76,    76,   340,   274,   342,    92,
      94,    40,    82,    79,    83,    83,    79,    77,    77,   353,
      82,    79,    77,    19,   337,   359,    79,    92,    79,    81,
      94,    77,    76,    94,    77,   338,    77,    94,    14,    14,
      94,   290,   291,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    92,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    94,    77,    94,
      40,    41,    42,    77,    44,    45,   178,    47,    48,   175,
     259,   256,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,   177,    53,   111,   133,   214,    72,   286,    50,
      70,    71,    72,   140,    60,   274,    76,     3,     4,     5,
      29,    81,    -1,     9,    84,    85,    86,    93,    -1,    15,
      16,    17,    -1,    -1,    94,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    -1,
      36,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    40,
      41,    42,    -1,    44,    45,    81,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,     3,     4,     5,    -1,
      81,    -1,     9,    84,    85,    86,    -1,    -1,    15,    16,
      17,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      -1,     4,     5,    40,    41,    42,     9,    44,    45,    -1,
      47,    48,    -1,    -1,    17,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    70,    71,    72,    -1,     4,     5,    76,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    84,    85,    86,
      17,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    -1,
      -1,    -1,    -1,    40,    41,    42,    -1,    44,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,     6,     7,     8,    -1,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      20,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    34,    35,    -1,    84,    85,    86,
      40,    41,    42,    -1,    44,    45,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    -1,    76,     3,     4,     5,
      -1,    81,    -1,     9,    84,    85,    86,    -1,    -1,    15,
      16,    17,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    35,    -1,
      36,    -1,    -1,    40,    41,    42,    -1,    44,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    57,    40,    41,    42,    -1,    44,    45,    -1,    47,
      48,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    85,    86,
      -1,    -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    35,    -1,    84,    85,    86,    40,
      41,    42,    -1,    44,    45,    35,    47,    48,    -1,    -1,
      40,    41,    42,    -1,    44,    45,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      70,    71,    72,    84,    85,    86,    76,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    84,    85,    86,    40,    41,    42,
      -1,    44,    45,    35,    47,    48,    -1,    -1,    40,    41,
      42,    -1,    44,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    70,    71,
      72,    84,    85,    86,    76,     3,     4,     5,    -1,    -1,
      -1,     9,    84,    85,    86,    -1,    -1,    15,    16,    17,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,     0,    -1,    36,     3,
       4,     5,    40,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    36,     3,     4,     5,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     9,    15,    16,    17,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    36,   122,   124,   127,   128,   133,   135,   136,   167,
     168,   169,    40,   131,    72,   121,   125,   126,   137,   138,
     151,   123,   124,   123,   123,   123,     0,   168,    81,   135,
     140,   141,    94,    82,    40,    76,   139,    93,   122,   124,
     170,   171,    40,    99,   132,   134,   151,   135,   126,   138,
     138,    76,    78,    35,    40,    41,    42,    44,    45,    47,
      48,    70,    71,    72,    76,    81,    84,    85,    86,    98,
     100,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   118,   145,    81,   158,   122,
      93,    82,    83,    77,    40,   124,   142,   143,   147,   148,
     149,    36,   140,   141,    76,   103,    76,   103,   103,   118,
     120,   128,   130,   135,   144,    78,    80,   146,   152,   153,
     154,   155,    46,    47,    48,    76,    78,    80,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    93,   117,
     103,   105,    72,    73,    74,    70,    71,    49,    50,    51,
      52,    87,    88,    53,    54,    86,    55,    89,    90,    56,
      96,     6,     7,     8,    10,    11,    12,    13,    18,    19,
      20,    34,    40,   120,   122,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   116,   119,    83,   134,
     138,    77,    82,    77,    82,   140,    72,   118,   150,    36,
     144,   144,    77,    82,   129,   130,   129,    77,   119,    40,
      82,    83,   145,    93,   155,    40,   101,   102,   118,   120,
      40,   118,   105,   105,   105,   106,   106,   107,   107,   108,
     108,   108,   108,   109,   109,   110,    97,   114,   111,    97,
      91,    94,   119,    76,    94,    92,    40,    76,    76,    76,
      97,   163,    92,    83,    97,    94,    40,    57,   149,   118,
      79,    79,   118,    77,    77,   118,    81,   105,    79,    83,
     152,    82,    77,    79,   113,   112,    97,    92,   120,   156,
      94,   120,   122,   163,    97,   156,    94,   156,   161,    79,
      79,   146,   145,   118,   120,   156,    77,    96,   163,    94,
     120,    19,    82,    83,    96,   156,    77,    94,    97,    96,
      76,    83,    92,    97,   163,   163,    77,    97,    97,   156,
      77,    96,    97,   120,   116,    96,   156,    94,   156,    96,
      14,    97,    77,    97,   163,    94,   156,    96,    77,    97,
     156
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    98,    98,    98,    98,    98,    98,
      99,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     101,   101,   102,   102,   103,   103,   103,   103,   103,   103,
     104,   104,   104,   104,   104,   104,   105,   105,   106,   106,
     106,   106,   107,   107,   107,   108,   108,   108,   109,   109,
     109,   109,   109,   110,   110,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   118,
     118,   119,   120,   120,   121,   121,   122,   123,   123,   124,
     124,   124,   124,   125,   125,   126,   126,   127,   127,   127,
     127,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   133,   134,   134,   135,   135,   135,
     136,   137,   137,   138,   139,   139,   139,   139,   139,   139,
     139,   139,   140,   140,   141,   141,   142,   142,   143,   143,
     144,   145,   145,   145,   146,   146,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   153,   154,
     154,   155,   155,   156,   156,   156,   156,   156,   156,   157,
     157,   157,   158,   159,   159,   160,   160,   161,   161,   162,
     163,   163,   164,   164,   164,   165,   165,   165,   165,   166,
     166,   166,   166,   167,   167,   168,   168,   169,   170,   170,
     171,   171
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     1,     1,     3,
       1,     1,     4,     4,     3,     3,     2,     2,     7,     6,
       1,     3,     1,     0,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     4,
       1,     3,     1,     3,     1,     4,     1,     9,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     3,     1,     0,     3,     1,     0,     2,
       2,     2,     2,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     2,     1,     0,
       1,     3,     5,     6,     2,     1,     3,     1,     1,     1,
       1,     1,     0,     2,     1,     5,     3,     4,     6,     6,
       5,     4,     1,     0,     1,     2,     1,     0,     1,     3,
       1,     1,     3,     4,     2,     4,     1,     3,     1,     3,
       2,     1,     1,     0,     2,     3,     1,     0,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     3,     1,     0,     1,     3,     1,     1,     2,
       1,     0,    11,     7,     5,    10,    14,     8,     8,     3,
       2,     2,     3,     1,     2,     1,     1,     4,     1,     0,
       1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 77 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
	(yyval.nextlist) = makelist(nextinstr);
	quad.emit(o_GOTO, -1);
}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 83 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
	(yyval.instr) = nextinstr;
}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 88 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*Check if function name*/
									symtab_element * check_func = globalST->search(*(yyvsp[0].idAttr).name);
									if(check_func != NULL)
									{	//If yes, it is a function
										(yyval.expAttr).loc = check_func;
										(yyval.expAttr).type = check_func->type;
										(yyval.expAttr).array = NULL;
										(yyval.expAttr).isPointer = false;	
									}
									else
									{
										//It isn't a function
										(yyval.expAttr).loc 	=  currST->lookup(*(yyvsp[0].idAttr).name);
										if(!((yyval.expAttr).loc->type != NULL && (yyval.expAttr).loc->type->baseType == t_ARRAY))
										{
											// it is a local variable if it isn't an array
											(yyval.expAttr).type = (yyval.expAttr).loc->type;
											(yyval.expAttr).array = NULL;
											(yyval.expAttr).isPointer = false;
										}
										else
										{
											//If array then store the exppression_Structure.array and send a temp val with zero init val
											(yyval.expAttr).array = (yyval.expAttr).loc;
											(yyval.expAttr).loc = currST->gentemp(new typeNode(t_INT));
											(yyval.expAttr).loc->initialValue.ival = 0;
											(yyval.expAttr).loc->isInitialized = true;
											quad.emit(o_COPY,0,(yyval.expAttr).loc->name);
											(yyval.expAttr).type = (yyval.expAttr).array->type;
										}
									}
								}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 121 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									//Initialize the value of the temporary variable with char val
									(yyval.expAttr).loc 	= currST->gentemp(new typeNode(t_CHAR));
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									(yyval.expAttr).loc->initialValue.cval = (yyvsp[0].charval);
									(yyval.expAttr).loc->isInitialized = true;
									(yyval.expAttr).array = NULL;
								quad.emit(o_COPY, (yyvsp[0].charval), (yyval.expAttr).loc->name);
								}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 130 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									//Initialize the value of the temporary variable with int val
									(yyval.expAttr).loc 	= currST->gentemp(new typeNode(t_INT));
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									(yyval.expAttr).loc->initialValue.ival = (yyvsp[0].intval);
									(yyval.expAttr).loc->isInitialized = true;
									(yyval.expAttr).array = NULL;
									quad.emit(o_COPY, (yyvsp[0].intval), (yyval.expAttr).loc->name);
								}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 139 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									//Initialize the value of the temporary variable with float val
									(yyval.expAttr).loc 	= currST->gentemp(new typeNode(t_DOUBLE));
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									(yyval.expAttr).loc->initialValue.dval = (yyvsp[0].floatval);
									(yyval.expAttr).loc->isInitialized = true;
									(yyval.expAttr).array = NULL;
									quad.emit(o_COPY, (yyvsp[0].floatval), (yyval.expAttr).loc->name);
								}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 148 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 149 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									// Copy the Value
									(yyval.expAttr) = (yyvsp[-1].expAttr);
								}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 154 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 156 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 159 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*Logic for the Array expression
									$$.array->type has the full type of the array which will be used for size calculations for memory
									$$.array will store the base pointer
									$$.type will store the base type of the array
									*/
									char temp[10];
									(yyval.expAttr).loc = currST -> gentemp(new typeNode(t_INT));
									symtab_element *temporary = currST->gentemp(new typeNode(t_INT));
									sprintf(temp,"%ld",(yyvsp[-3].expAttr).type->next->getSize());
									quad.emit(o_MULT,(yyvsp[-1].expAttr).loc->name,temp,temporary->name);
									quad.emit(o_PLUS,(yyvsp[-3].expAttr).loc->name,temporary->name,(yyval.expAttr).loc->name);
									// calculate the size and pass the temporary variable storing the size on a $$.loc
									(yyval.expAttr).array = (yyvsp[-3].expAttr).array;
									(yyval.expAttr).type = (yyvsp[-3].expAttr).type->next;
								}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 175 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*Function Call Logic
									Function call value will be stored in a temporary variable
									*/
									(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[-3].expAttr).type));
									char str[10];
									if((yyvsp[-1].argsAttr).arguments == NULL)
									{	//No function Parameters directly call the function
										sprintf(str,"0");
										quad.emit(o_CALL,(yyvsp[-3].expAttr).loc->name,str,(yyval.expAttr).loc->name);
									}
									else
									{
										for(int i=0;i<(yyvsp[-1].argsAttr).arguments->size();i++)
										{	//Print all parameters one by one, without performing any parameter typechecking to reduce the complexity, also assumed input as valid
											quad.emit(o_PARAM,(*(yyvsp[-1].argsAttr).arguments)[i]->loc->name);
										}
										sprintf(str,"%ld",(yyvsp[-1].argsAttr).arguments->size());
										quad.emit(o_CALL,(yyvsp[-3].expAttr).loc->name,str,(yyval.expAttr).loc->name);
									}
									(yyval.expAttr).array = NULL;
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
								}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 198 "ass6_13CS30021.y" /* yacc.c:1646  */
    {/*struct logic, not compulsory to implement, skipping*/}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 199 "ass6_13CS30021.y" /* yacc.c:1646  */
    {/*same for this, skilpping*/}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 200 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[-1].expAttr).type));
									if((yyvsp[-1].expAttr).array == NULL)
									{	// Post decrement_simple logic
										quad.emit(o_COPY,(yyvsp[-1].expAttr).loc->name,(yyval.expAttr).loc->name);
										quad.emit(o_MINUS,(yyvsp[-1].expAttr).loc->name,"1",(yyvsp[-1].expAttr).loc->name);
									}
									else
									{	// Post decrement_array elem logic
										symtab_element * temp_elem = currST->gentemp(CopyType((yyvsp[-1].expAttr).type));
										quad.emit(o_RINDEX,(yyvsp[-1].expAttr).array->name,(yyvsp[-1].expAttr).loc->name,(yyval.expAttr).loc->name);
										quad.emit(o_RINDEX,(yyvsp[-1].expAttr).array->name,(yyvsp[-1].expAttr).loc->name,temp_elem->name);
										quad.emit(o_MINUS,temp_elem->name,"1",temp_elem->name);
										quad.emit(o_LINDEX,(yyvsp[-1].expAttr).loc->name,temp_elem->name,(yyvsp[-1].expAttr).array->name);
										(yyval.expAttr).array = NULL;
									}
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
								}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 218 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[-1].expAttr).type));
									if((yyvsp[-1].expAttr).array == NULL)
									{	// Post increment_simple logic
										quad.emit(o_COPY,(yyvsp[-1].expAttr).loc->name,(yyval.expAttr).loc->name);
										quad.emit(o_PLUS,(yyvsp[-1].expAttr).loc->name,"1",(yyvsp[-1].expAttr).loc->name);
									}
									else
									{
										// Post increment_array elem logic
										symtab_element *temp_elem = currST->gentemp(CopyType((yyvsp[-1].expAttr).type));
										quad.emit(o_RINDEX,(yyvsp[-1].expAttr).array->name,(yyvsp[-1].expAttr).loc->name,(yyval.expAttr).loc->name);
										quad.emit(o_RINDEX,(yyvsp[-1].expAttr).array->name,(yyvsp[-1].expAttr).loc->name,temp_elem->name);
										quad.emit(o_PLUS,temp_elem->name,"1",temp_elem->name);
										quad.emit(o_LINDEX,(yyvsp[-1].expAttr).loc->name,temp_elem->name,(yyvsp[-1].expAttr).array->name);
										(yyval.expAttr).array = NULL;

									}
									(yyval.expAttr).type = (yyval.expAttr).loc->type;									
								}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 238 "ass6_13CS30021.y" /* yacc.c:1646  */
    {/*Skipping both types of type conversion(casting)*/}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 239 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 242 "ass6_13CS30021.y" /* yacc.c:1646  */
    {	/*Argument handling for function calls, either a single arg or list*/
									(yyval.argsAttr).arguments = new vector<expStruct*>;
									expStruct * tex = new expStruct((yyvsp[0].expAttr));
									(yyval.argsAttr).arguments->push_back(tex);
								}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 247 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*List to be handled in function calls*/
									expStruct * tex = new expStruct((yyvsp[0].expAttr));
									(yyval.argsAttr).arguments->push_back(tex);
								}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 253 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*Handling to be done later*/
									(yyval.argsAttr) = (yyvsp[0].argsAttr);
								}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 257 "ass6_13CS30021.y" /* yacc.c:1646  */
    {	/*Epsilon Case: Set default here*/
									(yyval.argsAttr).arguments = NULL;
								}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 261 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 264 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
									if((yyvsp[0].expAttr).array == NULL)
									{	// Pre decrement_simple logic
										quad.emit(o_MINUS,(yyvsp[0].expAttr).loc->name,"1",(yyvsp[0].expAttr).loc->name);
										quad.emit(o_COPY,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
									}
									else
									{	// Pre_decrement_array elem logic
										symtab_element * temp_elem = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
										quad.emit(o_RINDEX,(yyvsp[0].expAttr).array->name,(yyvsp[0].expAttr).loc->name,temp_elem->name);
										quad.emit(o_MINUS,temp_elem->name,"1",temp_elem->name);
										quad.emit(o_LINDEX,(yyvsp[0].expAttr).loc->name,temp_elem->name,(yyvsp[0].expAttr).array->name);
										quad.emit(o_RINDEX,(yyvsp[0].expAttr).array->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
										(yyval.expAttr).array = NULL;
									}
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
								}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 282 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
									if((yyvsp[0].expAttr).array == NULL)
									{	// Pre-Increment_simple logic
										quad.emit(o_PLUS,(yyvsp[0].expAttr).loc->name,"1",(yyvsp[0].expAttr).loc->name);
										quad.emit(o_COPY,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
									}
									else
									{	// Pre-increment_array elem logic
										symtab_element * temp_elem = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
										quad.emit(o_RINDEX,(yyvsp[0].expAttr).array->name,(yyvsp[0].expAttr).loc->name,temp_elem->name);
										quad.emit(o_PLUS,temp_elem->name,"1",temp_elem->name);
										quad.emit(o_LINDEX,(yyvsp[0].expAttr).loc->name,temp_elem->name,(yyvsp[0].expAttr).array->name);
										quad.emit(o_RINDEX,(yyvsp[0].expAttr).array->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
										(yyval.expAttr).array = NULL;
									}
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
								}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 301 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									typeNode *temp_type;
									switch((yyvsp[-1].charval))
									{
										case '~':
											/*Bitwise Not*/
											(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
											(yyval.expAttr).type = (yyval.expAttr).loc->type;
											quad.emit(o_BNOT,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
											break;
										case '!':
											(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
											(yyval.expAttr).type = (yyval.expAttr).loc->type;
											(yyval.expAttr).truelist = (yyvsp[0].expAttr).falselist;
											(yyval.expAttr).falselist = (yyvsp[0].expAttr).truelist;
											break;
										case '-':
											(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
											(yyval.expAttr).type = (yyval.expAttr).loc->type;
											quad.emit(o_UMINUS,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
											break;
										case '+':
											(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
											(yyval.expAttr).type = (yyval.expAttr).loc->type;
											quad.emit(o_COPY,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
											break;
										case '&':/*Use a temp to copy the address into it and append type as pointer*/
											temp_type = new typeNode(t_PTR,1,(yyvsp[0].expAttr).type);
											(yyval.expAttr).loc = currST->gentemp(CopyType(temp_type));
											(yyval.expAttr).type = (yyval.expAttr).loc->type;
											quad.emit(o_ADDR,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
											(yyval.expAttr).array = NULL;
											break;
										case '*':/*isPointer = true*/
											(yyval.expAttr).isPointer = true;
											(yyval.expAttr).type = (yyvsp[0].expAttr).loc->type->next;
											(yyval.expAttr).loc = (yyvsp[0].expAttr).loc;
											(yyval.expAttr).array = NULL;
											break;
										default:/*Error*/
											break;
									}
								}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 344 "ass6_13CS30021.y" /* yacc.c:1646  */
    {/*Later*/}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 345 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 347 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.charval) = '~';
								}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 350 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.charval) = '!';
								}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 353 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.charval) = '+';
								}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 356 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.charval) = '-';
								}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 359 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.charval) = '&';
								}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 362 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.charval) = '*';
								}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 366 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									if((yyvsp[0].expAttr).isPointer)
									{
										/*It is R-type dereferecing if it is a pointer after reaching cast-expression*/
										(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
										(yyval.expAttr).isPointer = false;
										quad.emit(o_RDEREF,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
									}
									else if(!((yyvsp[0].expAttr).array || (yyvsp[0].expAttr).array->type))
									{	/*RINDEX operation: The unary expression moves to cast expression and still is an array then it is an R-type indexing for the array element*/
										(yyval.expAttr).loc = currST->gentemp(new typeNode((yyvsp[0].expAttr).type->baseType));
										quad.emit(o_RINDEX,(yyvsp[0].expAttr).array->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
										(yyval.expAttr).array = NULL;
										(yyval.expAttr).type = (yyval.expAttr).loc->type;
									}
									else
										(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 384 "ass6_13CS30021.y" /* yacc.c:1646  */
    {/*Handling of cast expression later*/}
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 387 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 390 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_DIV,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 396 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_MOD,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 402 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_MULT,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 409 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 412 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_PLUS,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 418 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_MINUS,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 426 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 429 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_SHL,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 434 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_SHR,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 441 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 444 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).type = new typeNode(t_BOOL);
									(yyval.expAttr).truelist = makelist(nextinstr);
									(yyval.expAttr).falselist = makelist(nextinstr+1);
									quad.emit(o_JLE,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								}
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 452 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).type = new typeNode(t_BOOL);
									(yyval.expAttr).truelist = makelist(nextinstr);
									(yyval.expAttr).falselist = makelist(nextinstr+1);
									quad.emit(o_JGE,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								}
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 460 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).type = new typeNode(t_BOOL);
									(yyval.expAttr).truelist = makelist(nextinstr);
									(yyval.expAttr).falselist = makelist(nextinstr+1);
									quad.emit(o_JLT,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								}
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 468 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).type = new typeNode(t_BOOL);
									(yyval.expAttr).truelist = makelist(nextinstr);
									(yyval.expAttr).falselist = makelist(nextinstr+1);
									quad.emit(o_JGT,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								}
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 477 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 480 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).type = new typeNode(t_BOOL);
									(yyval.expAttr).truelist = makelist(nextinstr);
									(yyval.expAttr).falselist = makelist(nextinstr+1);
									quad.emit(o_JE,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								}
#line 2438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 488 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).type = new typeNode(t_BOOL);
									(yyval.expAttr).truelist = makelist(nextinstr);
									(yyval.expAttr).falselist = makelist(nextinstr+1);
									quad.emit(o_JNE,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 498 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 501 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_BAND,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 507 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 510 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									if((yyvsp[-3].expAttr).type->baseType != t_BOOL)
										conv2Bool(&(yyvsp[-3].expAttr));
									if((yyvsp[0].expAttr).type->baseType != t_BOOL)
										conv2Bool(&(yyvsp[0].expAttr));
									backpatch((yyvsp[-3].expAttr).truelist,(yyvsp[-1].instr));
									(yyval.expAttr).type = new typeNode(t_BOOL);
									(yyval.expAttr).falselist = merge((yyvsp[-3].expAttr).falselist,(yyvsp[0].expAttr).falselist);
									(yyval.expAttr).truelist = (yyvsp[0].expAttr).truelist;
								}
#line 2492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 521 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 524 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_BOR,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 530 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 533 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_BXOR,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 539 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 542 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									if((yyvsp[-3].expAttr).type->baseType != t_BOOL)
										conv2Bool(&(yyvsp[-3].expAttr));
									if((yyvsp[0].expAttr).type->baseType != t_BOOL)
										conv2Bool(&(yyvsp[0].expAttr));	
									backpatch((yyvsp[-3].expAttr).falselist,(yyvsp[-1].instr));
									(yyval.expAttr).type = new typeNode(t_BOOL);
									(yyval.expAttr).truelist = merge((yyvsp[-3].expAttr).truelist,(yyvsp[0].expAttr).truelist);
									(yyval.expAttr).falselist = (yyvsp[0].expAttr).falselist;
								}
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 554 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 557 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-4].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_COPY,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
									list* I = makelist(nextinstr);
									quad.emit(o_GOTO,"-1");
									backpatch((yyvsp[-3].nextlist),nextinstr);
									quad.emit(o_COPY,(yyvsp[-4].expAttr).loc->name,(yyval.expAttr).loc->name);
									I = merge(I,makelist(nextinstr));
									quad.emit(o_GOTO,"-1");
									backpatch((yyvsp[-7].nextlist),nextinstr);
									conv2Bool(&(yyvsp[-8].expAttr));
									backpatch((yyvsp[-8].expAttr).truelist,(yyvsp[-5].instr));
									backpatch((yyvsp[-8].expAttr).falselist,(yyvsp[-1].instr));
									backpatch(I,nextinstr);
								}
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 587 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 590 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*If unary_expression upto here is array or ptr then it is a left dereference or left index respectively.*/
									if((yyvsp[-2].expAttr).isPointer)
									{
										quad.emit(o_LDEREF,(yyvsp[0].expAttr).loc->name,(yyvsp[-2].expAttr).loc->name);
									}
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr),true);
									if((yyvsp[-2].expAttr).array != NULL)
									{
										/*Assign later in an array*/
										quad.emit(o_LINDEX,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyvsp[-2].expAttr).array->name);
									}
									else if(!(yyvsp[-2].expAttr).isPointer)
										quad.emit(o_COPY,(yyvsp[0].expAttr).loc->name,(yyvsp[-2].expAttr).loc->name);
									(yyval.expAttr).loc = currST->gentemp((yyvsp[0].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_COPY,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 610 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.expAttr) = (yyvsp[0].expAttr);}
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 612 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.expAttr) = (yyvsp[0].expAttr);}
#line 2623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 613 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.expAttr) = (yyvsp[0].expAttr);}
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 616 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									if((yyvsp[0].expAttr).type != NULL && (yyvsp[0].expAttr).type->baseType == t_FUNC)
									{
										(yyval.expAttr) = (yyvsp[0].expAttr);
									}
								}
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 622 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = NULL;
								}
#line 2648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 626 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*IThe semicolon assures that this has to be a function prototype if it is a function at all in the declaration*/
									/*Assign Types to all the entities of init_declarator_list*/
									if((yyvsp[-1].expAttr).loc != NULL && (yyvsp[-1].expAttr).type != NULL && (yyvsp[-1].expAttr).type->baseType == t_FUNC)
									{
										/*Delete current_ST*/
										currST = new SymbolTable();
									}
								}
#line 2662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 640 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 641 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 642 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 644 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*Only function declaration expected*/
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 650 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*Function Declaration! Nothing to be done here*/
									if((yyvsp[0].expAttr).type != NULL && (yyvsp[0].expAttr).type->baseType == t_FUNC)
									{
										(yyval.expAttr) = (yyvsp[0].expAttr);
									}
								}
#line 2701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 657 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*Declarator initialized with the proper value*/
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr),true);
									quad.emit(o_COPY,(yyvsp[0].expAttr).loc->name,(yyvsp[-2].expAttr).loc->name);
								}
#line 2711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 663 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 664 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 665 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 666 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 668 "ass6_13CS30021.y" /* yacc.c:1646  */
    {/*Void too needs a new type node*/
									t = new typeNode(t_VOID);
								}
#line 2743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 671 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 672 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									t = new typeNode(t_CHAR);
								}
#line 2757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 675 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 676 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 677 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 678 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									t = new typeNode(t_INT);
								}
#line 2783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 681 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 682 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 683 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									t = new typeNode(t_DOUBLE);
								}
#line 2803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 686 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 687 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 688 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 690 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 691 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 693 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*Nothing to be done here. The type is already initialized globally*/
								}
#line 2841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 696 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 698 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc  = currST->lookup(*(yyvsp[0].idAttr).name);
									(yyval.expAttr).type = new typeNode(t->baseType);
								}
#line 2856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 702 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 704 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 705 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 707 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 708 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 709 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 711 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 712 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 714 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 715 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 716 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 718 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 720 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.decAttr) = (yyvsp[0].decAttr);
								}
#line 2936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 723 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*NO POINTER!*/
									(yyval.decAttr).type = NULL;
								}
#line 2945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 728 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									if(!((yyvsp[-1].decAttr).type))
									{
										/*Append pointers to this direct_declarator*/
										if((yyvsp[0].expAttr).loc->type->baseType != t_PTR)
										{
											typeNode * test = (yyvsp[-1].decAttr).type;
											while(test->next != NULL)
												test = test->next;
											test->next = (yyvsp[0].expAttr).loc->type;
											(yyvsp[0].expAttr).loc->type = (yyvsp[-1].decAttr).type;
										}
									}
									else
									{
										/*No Pointer for this direct_declarator*/
									}

									if((yyvsp[0].expAttr).type != NULL && (yyvsp[0].expAttr).type->baseType == t_FUNC)
									{
										/*Function type... Just adjust offset*/
										(yyval.expAttr) = (yyvsp[0].expAttr);
									}
									else
									{
										/*Not a function, update size and offset*/
										(yyvsp[0].expAttr).loc->size = (yyvsp[0].expAttr).loc->type->getSize();
										(yyvsp[0].expAttr).loc->offset = currST->offset;
										currST->offset += (yyvsp[0].expAttr).loc->size;
										(yyval.expAttr) = (yyvsp[0].expAttr);
										(yyval.expAttr).type = (yyval.expAttr).loc->type;
									}
								}
#line 2983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 762 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*Identifier will be added to current symbol table here*/
									/*Type of this variable is set here but the pointers are not appended*/	
									(yyval.expAttr).loc = currST->lookup(*(yyvsp[0].idAttr).name);
										if((yyval.expAttr).loc->var_type == "")
										{
											(yyval.expAttr).loc->var_type = "local";
											/*Initialize type here*/
											(yyval.expAttr).loc->type = new typeNode(t->baseType);
										}
										else if((yyval.expAttr).loc->var_type == "return")
										{
											/*Already declared function change the symbol table*/

										}
										(yyval.expAttr).type = (yyval.expAttr).loc->type;
								}
#line 3005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 779 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*Append in the type_array and adjust the size*/
									if((yyvsp[-4].expAttr).type->baseType == t_ARRAY)
									{ /*Case: type is already an array*/
										typeNode * typ1 = (yyvsp[-4].expAttr).type,*typ = (yyvsp[-4].expAttr).type;
										typ1 = typ1->next;
										while(typ1->next != NULL)
										{
											typ1 = typ1->next;
											typ = typ->next;
										}
										typ->next = new typeNode(t_ARRAY,(yyvsp[-1].expAttr).loc->initialValue.ival,typ1);
									}
									else
									{ /*Append array type*/
										if((yyvsp[-1].expAttr).loc == NULL)
											(yyvsp[-4].expAttr).type = new typeNode(t_ARRAY,-1,(yyvsp[-4].expAttr).type);
										else
											(yyvsp[-4].expAttr).type = new typeNode(t_ARRAY,(yyvsp[-1].expAttr).loc->initialValue.ival,(yyvsp[-4].expAttr).type);
									}
									(yyval.expAttr) = (yyvsp[-4].expAttr);
									(yyval.expAttr).loc->type = (yyval.expAttr).type;
								}
#line 3033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 802 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[-1].expAttr);
								}
#line 3041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 805 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*Function Declarator: First Element of this table is Our Function and the rest of the elements are Params*/
									/*add a new entry in global symbol table*/
									symtab_element * new_func = globalST->search(currST->table[0]->name);
									if(new_func == NULL)
									{
										new_func = globalST->lookup(currST->table[0]->name);
										(yyval.expAttr).loc = currST->table[0];
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
									(yyval.expAttr).loc = new_func;
									(yyval.expAttr).type = new typeNode(t_FUNC);
								}
#line 3082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 841 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 842 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 843 "ass6_13CS30021.y" /* yacc.c:1646  */
    {/*Not implementing this*/}
#line 3100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 844 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*No Parameters*/
									symtab_element * new_func = globalST->search(currST->table[0]->name);
									if(new_func == NULL)
									{
										new_func = globalST->lookup(currST->table[0]->name);
										(yyval.expAttr).loc = currST->table[0];
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
									(yyval.expAttr).loc = new_func;
									(yyval.expAttr).type = new typeNode(t_FUNC);
								}
#line 3134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 874 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 875 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 877 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 878 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 888 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 3166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 891 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 892 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 897 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*No need to store the List in explicit since all the parameters are stored in the currST by default*/
								}
#line 3186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 900 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 902 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*First Parameter Added here*/
								}
#line 3200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 905 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*More Parameters are already added here*/
								}
#line 3208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 909 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
								/*The parameter is already in the current Symbol Table*/
								}
#line 3216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 912 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 914 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.expAttr) = (yyvsp[0].expAttr);}
#line 3228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 915 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.expAttr).loc = NULL;}
#line 3234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 917 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.decAttr).type = new typeNode(t_PTR);
								}
#line 3242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 920 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									(yyval.decAttr).type = new typeNode(t_PTR,1,(yyvsp[0].decAttr).type);
								}
#line 3250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 933 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 936 "ass6_13CS30021.y" /* yacc.c:1646  */
    {/*Switch Case*/}
#line 3262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 937 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.nextlist) = (yyvsp[0].nextlist);}
#line 3268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 938 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.nextlist) = NULL;}
#line 3274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 939 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.nextlist) = (yyvsp[0].nextlist);}
#line 3280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 940 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.nextlist) = (yyvsp[0].nextlist);}
#line 3286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 941 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.nextlist) = (yyvsp[0].nextlist);}
#line 3292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 943 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 944 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 945 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 947 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.nextlist) = (yyvsp[-1].nextlist);}
#line 3316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 949 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.nextlist) = (yyvsp[0].nextlist);}
#line 3322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 950 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.nextlist) = NULL;}
#line 3328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 952 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.nextlist) = (yyvsp[0].nextlist);}
#line 3334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 953 "ass6_13CS30021.y" /* yacc.c:1646  */
    {backpatch((yyvsp[-2].nextlist),(yyvsp[-1].instr));
									(yyval.nextlist) = (yyvsp[0].nextlist);}
#line 3341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 956 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.nextlist) = NULL;}
#line 3347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 957 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.nextlist) = (yyvsp[0].nextlist);}
#line 3353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 959 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.expAttr) = (yyvsp[-1].expAttr);}
#line 3359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 961 "ass6_13CS30021.y" /* yacc.c:1646  */
    {(yyval.expAttr) = (yyvsp[0].expAttr);}
#line 3365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 962 "ass6_13CS30021.y" /* yacc.c:1646  */
    {/*Initialize Expression to NULL*/
									(yyval.expAttr).loc = NULL;
								}
#line 3373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 966 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/* All the logics mentioned here have been discussed in class for selection and iteration statements*/
									/* A dangling goto is present after expression just in case if the type of the expression is not boolean
									then a type conversion will be performed. The code of the type conversion will be placed at the end. Therefore, this dangling pointer needs to be pointing the newly created if which checks whether the expression is zero or not.
									Another dangling goto after the statement of IF condition. That is also just for safety. It will be used if the nested statement will also have some conditional statements
									There are Ms in between to store the location / quad index of first list of statements and second list of statements*/
									(yyvsp[-4].nextlist) = merge((yyvsp[-4].nextlist),(yyvsp[-3].nextlist));
									(yyvsp[0].nextlist) = merge((yyvsp[0].nextlist),makelist(nextinstr));
									quad.emit(o_GOTO,"-1");
									backpatch((yyvsp[-7].nextlist),nextinstr);
									conv2Bool(&(yyvsp[-8].expAttr));
									backpatch((yyvsp[-8].expAttr).truelist,(yyvsp[-5].instr));
									backpatch((yyvsp[-8].expAttr).falselist,(yyvsp[-1].instr));
									(yyval.nextlist) = merge((yyvsp[-4].nextlist),(yyvsp[0].nextlist));
								}
#line 3393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 981 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/* Very similar to IF and ELSE part. Here the else part is missing so we do not specifically need dangling goto for the statements list. We will however need dangling goto for expression (if it is not boolean, that is the only situation)*/
									(yyvsp[0].nextlist) = merge((yyvsp[0].nextlist),makelist(nextinstr));
									quad.emit(o_GOTO,"-1");
									backpatch((yyvsp[-3].nextlist),nextinstr);
									conv2Bool(&(yyvsp[-4].expAttr));
									backpatch((yyvsp[-4].expAttr).truelist,(yyvsp[-1].instr));
									(yyval.nextlist) = merge((yyvsp[0].nextlist),(yyvsp[-4].expAttr).falselist);
								}
#line 3407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 990 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 992 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*Here we don't have to by default jump to the start. The output of the condtion of the while will decide whether we have to jump to the beginning of the loop or to the next instruction. So, we have M in front of the statements to store its locations. We also have M in front of the expression because there can be conditional statements in statement block. So there must be a pointer which stores the location of the start of expression. Again we have a dangling goto after expression (if it is not boolean)*/
									backpatch((yyvsp[-2].nextlist),nextinstr);
									backpatch((yyvsp[-7].nextlist),(yyvsp[-4].instr));			/*S1.nextlist to M2.instr*/
									conv2Bool(&(yyvsp[-3].expAttr));
									backpatch((yyvsp[-3].expAttr).truelist,(yyvsp[-8].instr));	/*B.truelist to M1.instr*/
									(yyval.nextlist) = (yyvsp[-3].expAttr).falselist;
								}
#line 3426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1000 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*After the loop end there has to be a goto to 3rd expression. Thus, we have a M before the third expression. After the execution of the third expression we move to the middle condition. Dangling pointer is there if the expression is not boolean. If the condition is successful then we have to go to the statements list and therefore, we have a M before the statements list.*/
									backpatch((yyvsp[-3].nextlist),(yyvsp[-9].instr));			/*N2.nextlist to M1.instr*/
									backpatch((yyvsp[0].nextlist),(yyvsp[-5].instr));			/*S.nextlist to M2.instr*/
									quad.emit(o_GOTO,(yyvsp[-5].instr));
									backpatch((yyvsp[-7].nextlist),nextinstr);	/*N1.nextlist to nextinstr*/
									conv2Bool(&(yyvsp[-8].expAttr));
									backpatch((yyvsp[-8].expAttr).truelist,(yyvsp[-1].instr));
									(yyval.nextlist) = (yyvsp[-8].expAttr).falselist;
								}
#line 3441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1010 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									/*There has to be goto which takes it again to the beginning of the loop where we check the conditions. For storing that location we have a M in front of the expression. Also if the expression returns success then we have to jump to the statements list. Therefore, we again need to store the location of the beginning of the statement list. Thus, we have one more M in front of the statment list.
									*/
									quad.emit(o_GOTO,(yyvsp[-5].instr));
									backpatch((yyvsp[0].nextlist),(yyvsp[-5].instr)); 			/*S.nextlist to M1.instr*/
									backpatch((yyvsp[-3].nextlist),nextinstr); 	/*N1.nextlist to nextinstr*/
									conv2Bool(&(yyvsp[-4].expAttr));
									backpatch((yyvsp[-4].expAttr).truelist,(yyvsp[-1].instr));
									(yyval.nextlist) = (yyvsp[-4].expAttr).falselist;
								}
#line 3456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1020 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1022 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1023 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1024 "ass6_13CS30021.y" /* yacc.c:1646  */
    {}
#line 3480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1025 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									if((yyvsp[-1].expAttr).loc == NULL)
										quad.emit(o_RET);
									else
									{
										expStruct * dummy = new expStruct();
										dummy->loc = currST->table[0];
										dummy->type = dummy->loc->type;
										typecheck(dummy,&(yyvsp[-1].expAttr),true);
										delete dummy;
										quad.emit(o_RET,(yyvsp[-1].expAttr).loc->name);
									}
								}
#line 3498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1046 "ass6_13CS30021.y" /* yacc.c:1646  */
    {
									symtab_element * func = globalST->lookup((yyvsp[-2].expAttr).loc->name);
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
								}
#line 3528 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3532 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1078 "ass6_13CS30021.y" /* yacc.c:1906  */


void yyerror(const char* s) {printf("%s", s);}
