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
#line 1 "ass4_13CS30021.y" /* yacc.c:339  */

#include <stdio.h>
extern int yylex();
void yyerror(const char* s);


#line 73 "y.tab.c" /* yacc.c:339  */

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
#line 11 "ass4_13CS30021.y" /* yacc.c:355  */

  int intval;
  float floatval;
  char *charval;

#line 257 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 272 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1411

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  344

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,     2,     2,     2,    85,    78,     2,
      70,    71,    79,    80,    77,    81,    74,    84,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    91,    92,
      86,    93,    87,    90,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,    88,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,    89,    76,    82,     2,     2,     2,
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
      65,    66,    67,    68,    69
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    91,    91,    92,    93,    94,    95,    96,    97,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   114,
     115,   119,   120,   121,   122,   123,   124,   128,   129,   130,
     131,   132,   133,   137,   138,   142,   143,   144,   145,   149,
     150,   151,   155,   156,   157,   161,   162,   163,   164,   165,
     169,   170,   171,   175,   176,   180,   181,   185,   186,   190,
     191,   195,   196,   200,   201,   205,   206,   210,   211,   215,
     219,   220,   224,   225,   226,   227,   228,   229,   230,   231,
     235,   236,   240,   241,   244,   245,   246,   247,   248,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   268,   269,   270,   271,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   289,   290,   291,
     295,   296,   300,   301,   305,   306,   307,   311,   315,   316,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   337,   338,   339,   340,   344,   345,
     350,   351,   355,   356,   360,   361,   365,   366,   370,   374,
     375,   376,   380,   381,   382,   383,   387,   391,   392,   396,
     397,   401,   402,   406,   407,   411,   412,   416,   417,   422,
     423,   424,   425,   426,   427,   431,   432,   433,   437,   438,
     442,   443,   447,   448,   452,   453,   457,   458,   459,   463,
     464,   465,   466,   470,   471,   472,   473,   474
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SINGLE_COMMENT", "MULTI_COMMENT",
  "AUTO_KEYWORD", "ENUM_KEYWORD", "RESTRICT_KEYWORD", "CASE_KEYWORD",
  "DOUBLE_KEYWORD", "FLOAT_KEYWORD", "LONG_KEYWORD", "INT_KEYWORD",
  "SHORT_KEYWORD", "CHAR_KEYWORD", "VOID_KEYWORD", "SIGNED_KEYWORD",
  "VOLATILE_KEYWORD", "CONST_KEYWORD", "GOTO_KEYWORD", "SIZEOF_KEYWORD",
  "BOOL_KEYWORD", "CONTINUE_KEYWORD", "UNSIGNED_KEYWORD", "BREAK_KEYWORD",
  "EXTERN_KEYWORD", "RETURN_KEYWORD", "STATIC_KEYWORD", "COMPLEX_KEYWORD",
  "DEFAULT_KEYWORD", "INLINE_KEYWORD", "STRUCT_KEYWORD",
  "IMAGINARY_KEYWORD", "SWITCH_KEYWORD", "TYPEDEF_KEYWORD",
  "REGISTER_KEYWORD", "UNION_KEYWORD", "DO_KEYWORD", "WHILE_KEYWORD",
  "IF_KEYWORD", "ELSE_KEYWORD", "FOR_KEYWORD", "VAL_AT", "PLUS_PLUS",
  "MINUS_MINUS", "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_EQUAL",
  "GREATER_EQUAL", "EQUAL_EQUAL", "NOT_EQUAL", "LOGICAL_AND", "LOGICAL_OR",
  "PERCENT_EQUAL", "PLUS_EQUAL", "MINUS_EQUAL", "LEFT_SHIFT_EQUAL",
  "ELLIPSES", "STAR_EQUAL", "BY_EQUAL", "RIGHT_SHIFT_EQUAL", "AND_EQUAL",
  "BITWISENOT_EQUAL", "OR_EQUAL", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOAT_CONSTANT", "ENUMERATION", "CHAR_CONSTANT", "STRING_LITERAL",
  "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "':'", "';'", "'='", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "expression", "constant_expression",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "specifier_qualifier_list", "assignment_operator", "enum_specifier",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "translation_unit",
  "external_declaration", "function_definition", "declaration_list",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement", YY_NULLPTR
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
      40,    41,    91,    93,    46,   123,   125,    44,    38,    42,
      43,    45,   126,    33,    47,    37,    60,    62,    94,   124,
      63,    58,    59,    61
};
# endif

#define YYPACT_NINF -287

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-287)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1349,  -287,     4,  -287,  -287,  -287,  -287,  -287,  -287,  -287,
    -287,  -287,  -287,  -287,  -287,  -287,  -287,  -287,  -287,  -287,
    -287,  -287,  -287,  -287,   -20,  1349,  1349,  -287,  1349,  1349,
    1318,  -287,  -287,   -65,   -40,  -287,    10,    29,  -287,   -36,
    -287,   274,    59,    14,  -287,  -287,  -287,  -287,  -287,  -287,
     -40,   -48,    83,  -287,   -44,  -287,  -287,    29,    10,  -287,
     307,  1047,  -287,   -20,   892,  -287,   923,   656,    59,   113,
    1144,  -287,   -40,  -287,  -287,  -287,  -287,   -38,  1144,    17,
    1175,   -16,    -4,   779,    74,    25,   544,    50,   103,   107,
    1208,  1208,    93,  -287,  -287,  -287,  -287,  -287,   628,  -287,
    -287,  -287,  -287,  -287,  -287,  -287,  -287,  -287,    -5,   145,
    1144,  -287,    28,    55,   146,   -25,   160,   108,   106,   128,
     151,   -26,  -287,  -287,   -35,  -287,  -287,  -287,  -287,   395,
    -287,  -287,  -287,  -287,  -287,  -287,  1014,  -287,  -287,  -287,
    -287,  -287,  -287,    10,   125,   144,  -287,    15,   751,  -287,
     152,   153,   723,  -287,  -287,  -287,  -287,  -287,   133,   136,
     628,  -287,  -287,  -287,  -287,   -34,   544,  1144,   189,  1144,
    1144,   479,   628,  -287,  -287,   544,    32,  1379,  -287,  1379,
     161,   171,  -287,  -287,  1080,  1144,   172,  -287,  -287,  -287,
    -287,  -287,  -287,  -287,  -287,  -287,  -287,  -287,  1144,  -287,
    1144,  1144,  1144,  1144,  1144,  1144,  1144,  1144,  1144,  1144,
    1144,  1144,  1144,  1144,  1144,  1144,  1144,  1144,  1144,  1144,
    -287,  -287,  -287,  1144,   175,  -287,   135,  1047,   -23,  -287,
    -287,  -287,  1287,  -287,   176,   168,   751,  -287,  -287,  1144,
    -287,   169,   170,   544,  -287,   173,  -287,  -287,    39,   177,
      40,    44,   808,   808,   174,  -287,  -287,  -287,  -287,  1111,
    -287,  -287,    47,  -287,    57,  -287,  -287,  -287,  -287,  -287,
      28,    28,    55,    55,   146,   146,   146,   146,   -25,   -25,
     160,   108,   106,   128,   151,   -14,  -287,   178,  -287,  -287,
     932,  -287,  -287,  -287,  -287,  -287,  -287,  -287,   182,   183,
    -287,  -287,  -287,   190,   544,  1144,   544,   544,  1144,  1144,
     190,  1014,  -287,  -287,  1144,  -287,  1144,  -287,  -287,  -287,
    1047,  -287,  -287,  -287,    48,  -287,   206,    51,    56,   137,
    -287,  -287,  -287,   156,   544,   544,   544,  -287,   973,  -287,
    -287,  -287,  -287,  -287
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    87,     0,   125,   101,   100,    99,    98,    97,    96,
      95,    89,   126,   124,    91,    90,    85,    86,    92,   127,
      93,    84,    88,   174,     0,    72,    74,    94,    76,    78,
       0,   171,   173,   119,     0,   130,     0,   144,    70,     0,
      80,    82,   128,     0,    73,    75,    77,    79,     1,   172,
       0,   122,     0,   120,     0,   148,   146,   145,     0,    71,
       0,     0,   177,     0,     0,   175,     0,     0,   129,     0,
       0,   117,     0,   131,   149,   147,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     3,     4,     6,     5,     7,     0,   188,
      27,    28,    29,    30,    31,    32,   194,     9,    21,    33,
       0,    35,    39,    42,    45,    50,    53,    55,    57,    59,
      61,    63,    65,    67,     0,   192,   193,   179,   180,     0,
     190,   181,   182,   183,   184,     2,     0,   159,    83,   178,
     176,   156,   134,   155,     0,   150,   152,     0,     0,   136,
      28,     0,     0,   118,    33,    69,   123,   121,     0,     0,
       0,    25,   204,   205,   206,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,     0,     0,   102,   158,   104,
       0,     0,    15,    16,     0,     0,     0,   109,   110,   111,
     112,   107,   108,   113,   114,   115,   116,   106,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     195,   189,   191,     0,     0,   162,     0,     0,     0,   167,
     154,   133,     0,   135,     0,     0,     0,   137,   139,     0,
     138,    28,     0,     0,   203,     0,   207,   187,     0,     0,
       0,     0,     0,     0,     0,   185,     8,   103,   105,     0,
      14,    11,     0,    19,     0,    13,    66,    36,    37,    38,
      40,    41,    43,    44,    48,    49,    46,    47,    51,    52,
      54,    56,    58,    60,    62,     0,    68,     0,   170,   160,
       0,   163,   166,   168,   151,   153,   157,   141,     0,     0,
     132,   140,   186,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    12,     0,    10,     0,   169,   161,   164,
       0,   142,   143,   198,     0,   199,   196,     0,     0,     0,
      20,    64,   165,     0,     0,     0,     0,    17,     0,   200,
     197,   202,   201,    18
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -287,  -287,  -287,  -287,   -62,  -287,   -96,    12,    13,   -28,
      11,    45,    43,    49,    52,    53,  -287,   -67,   -61,     2,
     -66,   -39,     5,  -287,   208,  -287,   -78,     6,  -287,  -287,
     217,   197,    16,  -287,   -17,   228,     3,   -50,  -287,  -287,
      41,  -287,  -106,   -60,   -37,  -286,  -287,    54,  -287,   242,
    -287,  -287,   -73,  -287,   -32,  -287,   147,  -156,  -287,  -287,
    -287
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   107,   108,   262,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     156,    23,    63,    39,    40,    25,    26,   178,   198,    27,
      52,    53,    28,    29,    77,    42,    43,    57,   144,   145,
     146,   147,   180,   225,   226,   227,   228,   229,    30,    31,
      32,    64,   126,   127,   128,   129,   130,   131,   132,   133,
     134
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     137,   138,    62,   155,   320,    24,   151,    41,   154,    65,
      50,   155,   158,   168,   199,   253,   154,   152,   161,    54,
     177,   125,   207,   208,    51,   139,   217,    73,   173,   174,
      44,    45,   140,    46,    47,    24,     3,   181,   182,   183,
      56,    58,   219,   219,    35,    70,    12,    13,   154,   223,
      36,   224,   320,    55,   245,    61,    59,   220,   246,    37,
      75,   209,   210,   219,   218,   184,   254,   185,    33,   186,
     292,   143,    38,    74,    35,   137,   162,   316,    35,    34,
      36,   159,   177,    55,    36,   165,   233,   235,   163,    37,
     125,   242,   234,   247,   177,   167,   308,   309,   236,   177,
     176,   177,   255,   256,   267,   268,   269,   200,    37,   219,
     304,   306,   201,   202,   179,   307,   219,   219,   313,   333,
     169,   219,   335,   263,   314,   219,   230,   336,   219,    66,
     315,    67,   252,   219,   219,   203,   204,   266,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   155,   287,   286,    71,
      72,   154,   176,   312,    55,   166,   137,   291,    74,   248,
     302,   250,   251,   170,   176,   298,   179,   171,   299,   274,
     275,   276,   277,   257,   175,   258,   213,   264,   179,   153,
      72,   205,   206,   179,   214,   179,   231,   154,   187,   188,
     189,   190,   216,   191,   192,   193,   194,   195,   196,   211,
     212,   289,   290,   337,   338,   270,   271,   215,   272,   273,
     285,   232,   278,   279,   243,   237,   238,   249,   244,   137,
     319,   323,   259,   325,   326,   260,   265,   143,   197,   288,
     296,   297,   300,   301,   303,   310,   334,   305,   339,   331,
     137,   317,    74,   330,   154,   321,   322,   281,   280,   137,
     332,   340,   341,   342,   282,   311,    76,    69,   283,   157,
     284,    68,    49,   295,   329,     0,   222,   137,   319,     1,
       2,     3,   293,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,    14,     0,    15,     0,    16,
       0,    17,    18,     0,    19,     0,    20,   324,    21,    22,
     327,   328,     1,     2,     3,    78,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    79,    80,    14,    81,
      15,    82,    16,    83,    17,    18,    84,    19,     0,    20,
      85,    21,    22,     0,    86,    87,    88,     0,    89,    60,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,     0,     0,
       0,    92,    93,    94,    95,    96,    97,    98,     0,     0,
       0,     0,    60,    99,     0,   100,   101,   102,   103,   104,
     105,     0,     0,     0,     0,     0,     0,     0,     0,   106,
       1,     2,     3,    78,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    79,    80,    14,    81,    15,    82,
      16,    83,    17,    18,    84,    19,     0,    20,    85,    21,
      22,     0,    86,    87,    88,     0,    89,     0,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,     0,
      60,   221,     0,   100,   101,   102,   103,   104,   105,     0,
       0,     0,     0,     0,     1,     2,     3,   106,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,    80,
      14,     0,    15,     0,    16,     0,    17,    18,     0,    19,
       0,    20,     0,    21,    22,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,    93,    94,    95,    96,    97,    98,
       0,     0,    78,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,    79,    80,     0,    81,     0,    82,     0,
      83,   106,     0,    84,     0,     0,     0,    85,     0,     0,
       0,    86,    87,    88,     0,    89,     0,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      94,    95,    96,    97,    98,     0,     0,     0,     0,    60,
       0,     0,   100,   101,   102,   103,   104,   105,     0,     0,
       0,     0,     0,     0,     2,     3,   106,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,    80,    14,
       0,    15,     0,     0,     0,     0,    18,     0,     0,     0,
      20,     0,     0,     3,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    12,    13,     0,    80,     0,     0,     0,
       0,     0,     0,   148,     0,     0,     0,     0,     0,     0,
       0,     0,   135,    93,    94,    95,    96,    97,    98,    90,
      91,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,     0,     0,     0,     0,     0,     0,     0,     0,
     135,    93,    94,    95,    96,    97,    98,     0,     0,   149,
       3,     0,     0,     0,   100,   150,   102,   103,   104,   105,
      12,    13,     0,    80,     0,     0,     0,     0,     0,     0,
     239,     0,     0,     0,     0,     0,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    12,    13,
       0,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   135,    93,    94,
      95,    96,    97,    98,    90,    91,   240,     0,     0,    80,
       0,   100,   241,   102,   103,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,   135,    93,    94,    95,    96,
      97,    98,    90,    91,     0,     0,     0,     0,    80,   100,
     101,   102,   103,   104,   105,     0,     0,     0,     0,     0,
       0,     0,     0,   135,    93,    94,    95,    96,    97,    98,
       0,    90,    91,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,     0,     0,     0,     0,     0,     0,     0,
       0,   164,   135,    93,    94,    95,    96,    97,    98,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,     0,     0,     0,     0,     0,     1,     2,     3,
     106,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,    14,     0,    15,     0,    16,     0,    17,
      18,     0,    19,     0,    20,     0,    21,    22,     1,     2,
       3,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,    14,     0,    15,     0,    16,     0,
      17,    18,    80,    19,     0,    20,     0,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,    90,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   141,     0,     0,
       0,     0,     0,    80,   142,     0,   135,    93,    94,    95,
      96,    97,    98,     0,   223,     0,   224,   136,   318,     0,
     100,   101,   102,   103,   104,   105,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,   135,    93,    94,
      95,    96,    97,    98,     0,   223,     0,   224,   136,   343,
       0,   100,   101,   102,   103,   104,   105,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,    93,
      94,    95,    96,    97,    98,     0,   223,     0,   224,   136,
      90,    91,   100,   101,   102,   103,   104,   105,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,    93,    94,    95,    96,    97,    98,     0,     0,
       0,     0,   136,    90,    91,   100,   101,   102,   103,   104,
     105,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   135,    93,    94,    95,    96,    97,
      98,   261,     0,     0,    90,    91,     0,     0,   100,   101,
     102,   103,   104,   105,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   135,    93,    94,    95,    96,
      97,    98,     0,     0,     0,     0,   311,    90,    91,   100,
     101,   102,   103,   104,   105,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,    93,
      94,    95,    96,    97,    98,     0,     0,     0,    90,    91,
       0,     0,   100,   101,   102,   103,   104,   105,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   135,
      93,    94,    95,    96,    97,   160,     0,     0,     0,     0,
       0,    90,    91,   100,   101,   102,   103,   104,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   135,    93,    94,    95,    96,    97,   172,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,     1,     2,     3,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,    14,     0,
      15,     0,    16,     0,    17,    18,     0,    19,    48,    20,
       0,    21,    22,     1,     2,     3,     0,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,    14,
       0,    15,     0,    16,   294,    17,    18,     0,    19,     0,
      20,     0,    21,    22,     1,     2,     3,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
      14,     0,    15,     0,    16,     0,    17,    18,     0,    19,
       0,    20,     0,    21,    22,     2,     3,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
      14,     0,    15,     0,     0,     0,     0,    18,     0,     0,
       0,    20
};

static const yytype_int16 yycheck[] =
{
      61,    61,    41,    70,   290,     0,    67,    24,    70,    41,
      75,    78,    78,    86,   110,   171,    78,    67,    80,    36,
      98,    60,    47,    48,    64,    64,    52,    71,    90,    91,
      25,    26,    64,    28,    29,    30,     7,    42,    43,    44,
      37,    77,    77,    77,    64,    93,    17,    18,   110,    72,
      70,    74,   338,    37,   160,    93,    92,    92,    92,    79,
      57,    86,    87,    77,    90,    70,   172,    72,    64,    74,
      93,    66,    92,    57,    64,   136,    92,    91,    64,    75,
      70,    64,   160,    67,    70,    83,    71,   148,    92,    79,
     129,   152,    77,   166,   172,    70,   252,   253,   148,   177,
      98,   179,   175,    71,   200,   201,   202,    79,    79,    77,
      71,    71,    84,    85,    98,    71,    77,    77,    71,    71,
      70,    77,    71,   184,    77,    77,   143,    71,    77,    70,
      73,    72,   171,    77,    77,    80,    81,   198,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   223,   223,   219,    76,
      77,   223,   160,   259,   148,    91,   227,   227,   152,   167,
     243,   169,   170,    70,   172,   236,   160,    70,   239,   207,
     208,   209,   210,   177,    91,   179,    78,   185,   172,    76,
      77,    45,    46,   177,    88,   179,    71,   259,    53,    54,
      55,    56,    51,    58,    59,    60,    61,    62,    63,    49,
      50,    76,    77,    76,    77,   203,   204,    89,   205,   206,
     218,    77,   211,   212,    91,    73,    73,    38,    92,   290,
     290,   304,    71,   306,   307,    64,    64,   232,    93,    64,
      64,    73,    73,    73,    71,    71,    40,    70,    92,   316,
     311,    73,   236,   314,   316,    73,    73,   214,   213,   320,
     320,   334,   335,   336,   215,    75,    58,    50,   216,    72,
     217,    43,    30,   232,   311,    -1,   129,   338,   338,     5,
       6,     7,   228,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    28,    -1,    30,    -1,    32,   305,    34,    35,
     308,   309,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    34,    35,    -1,    37,    38,    39,    -1,    41,    75,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    76,    -1,    78,    79,    80,    81,    82,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    34,
      35,    -1,    37,    38,    39,    -1,    41,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,
      75,    76,    -1,    78,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    92,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    23,    -1,    25,    -1,    27,    28,    -1,    30,
      -1,    32,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      -1,    -1,     8,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    19,    20,    -1,    22,    -1,    24,    -1,
      26,    92,    -1,    29,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    37,    38,    39,    -1,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    78,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,     6,     7,    92,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      32,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    43,
      44,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    -1,    -1,    73,
       7,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    43,    44,    73,    -1,    -1,    20,
      -1,    78,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    43,    44,    -1,    -1,    -1,    -1,    20,    78,
      79,    80,    81,    82,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      -1,    43,    44,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    64,    65,    66,    67,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
      92,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    23,    -1,    25,    -1,    27,
      28,    -1,    30,    -1,    32,    -1,    34,    35,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    -1,    25,    -1,
      27,    28,    20,    30,    -1,    32,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    20,    71,    -1,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    -1,    74,    75,    76,    -1,
      78,    79,    80,    81,    82,    83,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    -1,    72,    -1,    74,    75,    76,
      -1,    78,    79,    80,    81,    82,    83,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      43,    44,    78,    79,    80,    81,    82,    83,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    43,    44,    78,    79,    80,    81,    82,
      83,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    43,    44,    -1,    -1,    78,    79,
      80,    81,    82,    83,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    -1,    -1,    -1,    -1,    75,    43,    44,    78,
      79,    80,    81,    82,    83,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    43,    44,
      -1,    -1,    78,    79,    80,    81,    82,    83,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    43,    44,    78,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    -1,    25,    -1,    27,    28,    -1,    30,     0,    32,
      -1,    34,    35,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    -1,    25,    57,    27,    28,    -1,    30,    -1,
      32,    -1,    34,    35,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    -1,    25,    -1,    27,    28,    -1,    30,
      -1,    32,    -1,    34,    35,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    21,    23,    25,    27,    28,    30,
      32,    34,    35,   115,   116,   119,   120,   123,   126,   127,
     142,   143,   144,    64,    75,    64,    70,    79,    92,   117,
     118,   128,   129,   130,   116,   116,   116,   116,     0,   143,
      75,    64,   124,   125,   128,   126,   130,   131,    77,    92,
      75,    93,   115,   116,   145,   148,    70,    72,   129,   124,
      93,    76,    77,    71,   126,   130,   118,   128,     8,    19,
      20,    22,    24,    26,    29,    33,    37,    38,    39,    41,
      43,    44,    64,    65,    66,    67,    68,    69,    70,    76,
      78,    79,    80,    81,    82,    83,    92,    95,    96,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   115,   146,   147,   148,   149,
     150,   151,   152,   153,   154,    64,    75,   112,   137,   115,
     148,    64,    71,   116,   132,   133,   134,   135,    27,    73,
      79,   112,   131,    76,    98,   111,   114,   125,   114,    64,
      70,    98,    92,    92,    92,   113,    91,    70,   146,    70,
      70,    70,    70,    98,    98,    91,   113,   120,   121,   126,
     136,    42,    43,    44,    70,    72,    74,    53,    54,    55,
      56,    58,    59,    60,    61,    62,    63,    93,   122,   100,
      79,    84,    85,    80,    81,    45,    46,    47,    48,    86,
      87,    49,    50,    78,    88,    89,    51,    52,    90,    77,
      92,    76,   150,    72,    74,   137,   138,   139,   140,   141,
     128,    71,    77,    71,    77,   112,   131,    73,    73,    27,
      73,    79,   112,    91,    92,   136,    92,   146,   113,    38,
     113,   113,   115,   151,   136,   146,    71,   121,   121,    71,
      64,    71,    97,   112,   113,    64,   112,   100,   100,   100,
     101,   101,   102,   102,   103,   103,   103,   103,   104,   104,
     105,   106,   107,   108,   109,   113,   112,   114,    64,    76,
      77,   137,    93,   141,    57,   134,    64,    73,   112,   112,
      73,    73,   146,    71,    71,    70,    71,    71,   151,   151,
      71,    75,   100,    71,    77,    73,    91,    73,    76,   137,
     139,    73,    73,   146,   113,   146,   146,   113,   113,   138,
     112,   111,   137,    71,    40,    71,    71,    76,    77,    92,
     146,   146,   146,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    95,    95,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    97,
      97,    98,    98,    98,    98,    98,    98,    99,    99,    99,
      99,    99,    99,   100,   100,   101,   101,   101,   101,   102,
     102,   102,   103,   103,   103,   104,   104,   104,   104,   104,
     105,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     115,   115,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   118,   118,   119,   119,   119,   119,   119,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   121,   121,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   123,   123,   123,
     124,   124,   125,   125,   126,   126,   126,   127,   128,   128,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   130,   130,   130,   131,   131,
     132,   132,   133,   133,   134,   134,   135,   135,   136,   137,
     137,   137,   138,   138,   138,   138,   139,   140,   140,   141,
     141,   142,   142,   143,   143,   144,   144,   145,   145,   146,
     146,   146,   146,   146,   146,   147,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   152,   153,
     153,   153,   153,   154,   154,   154,   154,   154
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     3,     1,
       2,     3,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     5,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     2,
       1,     3,     5,     4,     3,     4,     3,     4,     4,     4,
       5,     5,     6,     6,     1,     2,     2,     3,     1,     2,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     1,
       3,     4,     1,     2,     3,     4,     2,     1,     2,     3,
       2,     1,     2,     1,     1,     3,     4,     1,     2,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     3,
       1,     2,     1,     1,     1,     2,     5,     7,     5,     5,
       7,     7,     7,     3,     2,     2,     2,     3
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
      
#line 1844 "y.tab.c" /* yacc.c:1646  */
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
#line 477 "ass4_13CS30021.y" /* yacc.c:1906  */


void yyerror(const char* s) {
	printf("%s", s);
}
