/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yacc1.y" /* yacc.c:339  */

	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include "newSymbolTable.h"
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
	char name[100];
	// All extern variables


	//TO-DO - Store a stack of scope values along with their enclosing line numbers.
	extern int enc_lno[100];
	extern int no_of_entries;
	extern char tokval[100];
	extern char idname[100];
	extern int lno;
	extern int scope;
	int array = 0;
	// Declaration type of variables
	extern char dectype[100];

#line 90 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    CHAR = 259,
    FLOAT = 260,
    string = 261,
    id = 262,
    TYPE_CONST = 263,
    DEFINE = 264,
    OPEN_SCOPE = 265,
    CLOSE_SCOPE = 266,
    IF = 267,
    FOR = 268,
    DO = 269,
    WHILE = 270,
    BREAK = 271,
    SWITCH = 272,
    CONTINUE = 273,
    RETURN = 274,
    CASE = 275,
    DEFAULT = 276,
    GOTO = 277,
    SIZEOF = 278,
    OR_CONST = 279,
    AND_CONST = 280,
    E_CONST = 281,
    NE_CONST = 282,
    LE_CONST = 283,
    GE_CONST = 284,
    G_CONST = 285,
    L_CONST = 286,
    LSHIFT_CONST = 287,
    MUL_EQ = 288,
    DIV_EQ = 289,
    ADD_EQ = 290,
    PER_EQ = 291,
    RS_EQ = 292,
    SUB_EQ = 293,
    LS_EQ = 294,
    AND_EQ = 295,
    XOR_EQ = 296,
    OR_EQ = 297,
    RSHIFT_CONST = 298,
    REL_CONST = 299,
    INC_CONST = 300,
    DEC_CONST = 301,
    ELSE = 302,
    HEADER = 303
  };
#endif
/* Tokens.  */
#define INT 258
#define CHAR 259
#define FLOAT 260
#define string 261
#define id 262
#define TYPE_CONST 263
#define DEFINE 264
#define OPEN_SCOPE 265
#define CLOSE_SCOPE 266
#define IF 267
#define FOR 268
#define DO 269
#define WHILE 270
#define BREAK 271
#define SWITCH 272
#define CONTINUE 273
#define RETURN 274
#define CASE 275
#define DEFAULT 276
#define GOTO 277
#define SIZEOF 278
#define OR_CONST 279
#define AND_CONST 280
#define E_CONST 281
#define NE_CONST 282
#define LE_CONST 283
#define GE_CONST 284
#define G_CONST 285
#define L_CONST 286
#define LSHIFT_CONST 287
#define MUL_EQ 288
#define DIV_EQ 289
#define ADD_EQ 290
#define PER_EQ 291
#define RS_EQ 292
#define SUB_EQ 293
#define LS_EQ 294
#define AND_EQ 295
#define XOR_EQ 296
#define OR_EQ 297
#define RSHIFT_CONST 298
#define REL_CONST 299
#define INC_CONST 300
#define DEC_CONST 301
#define ELSE 302
#define HEADER 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 38 "yacc1.y" /* yacc.c:355  */

	int val;
	float fval;
	char cval;

#line 232 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 249 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   872

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  265

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,     2,     2,     2,    66,    65,     2,
      57,    58,    52,    50,    56,    51,     2,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    61,    55,
       2,    49,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    60,    64,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    63,     2,    67,     2,     2,     2,
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
      45,    46,    47,    48,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    48,    49,    51,    52,    54,    55,    56,
      58,    59,    61,    63,    65,    66,    68,    83,   100,   101,
     103,   104,   105,   113,   117,   124,   125,   133,   135,   136,
     138,   139,   140,   142,   143,   144,   145,   147,   148,   149,
     151,   152,   154,   155,   157,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   169,   170,   171,   172,   173,   174,
     176,   177,   179,   180,   182,   183,   185,   186,   187,   188,
     190,   190,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   205,   206,   207,   208,   210,   211,
     213,   214,   233,   234,   244,   246,   247,   252,   253,   258,
     259,   264,   265,   270,   271,   276,   277,   281,   285,   289,
     294,   295,   299,   304,   305,   309,   314,   315,   319,   324,
     325,   329,   333,   338,   339,   341,   342,   343,   345,   345,
     345,   345,   345,   345,   347,   348,   349,   350,   351,   353,
     369,   370,   372,   373,   375,   379,   383
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "CHAR", "FLOAT", "string", "id",
  "TYPE_CONST", "DEFINE", "OPEN_SCOPE", "CLOSE_SCOPE", "IF", "FOR", "DO",
  "WHILE", "BREAK", "SWITCH", "CONTINUE", "RETURN", "CASE", "DEFAULT",
  "GOTO", "SIZEOF", "OR_CONST", "AND_CONST", "E_CONST", "NE_CONST",
  "LE_CONST", "GE_CONST", "G_CONST", "L_CONST", "LSHIFT_CONST", "MUL_EQ",
  "DIV_EQ", "ADD_EQ", "PER_EQ", "RS_EQ", "SUB_EQ", "LS_EQ", "AND_EQ",
  "XOR_EQ", "OR_EQ", "RSHIFT_CONST", "REL_CONST", "INC_CONST", "DEC_CONST",
  "ELSE", "HEADER", "'='", "'+'", "'-'", "'*'", "'/'", "\"then\"", "';'",
  "','", "'('", "')'", "'['", "']'", "':'", "'?'", "'|'", "'^'", "'&'",
  "'%'", "'~'", "'!'", "$accept", "program_unit", "translation_unit",
  "external_decl", "function_definition", "decl", "type_spec",
  "init_declarator_list", "init_declarator", "spec_qualifier_list",
  "declarator", "param_type_list", "param_list", "param_decl",
  "func_call_params", "initializer", "initializer_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "stat",
  "labeled_stat", "exp_stat", "compound_stat", "lists", "selection_stat",
  "$@1", "iteration_stat", "jump_stat", "expression",
  "assignment_expression", "conditional_expression", "const_expression",
  "logical_or_expression", "logical_and_expression",
  "inclusive_or_expression", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "mult_expression", "cast_expression",
  "unary_expression", "unary_operator", "postfix_expression",
  "primary_expression", "argument_exp_list", "consts", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,    61,
      43,    45,    42,    47,   304,    59,    44,    40,    41,    91,
      93,    58,    63,   124,    94,    38,    37,   126,    33
};
# endif

#define YYPACT_NINF -169

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-169)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     118,  -169,  -169,    50,   232,   118,     5,    40,   107,  -169,
    -169,  -169,     5,   114,  -169,  -169,  -169,  -169,  -169,   785,
     118,  -169,  -169,   -42,    28,  -169,    49,   362,   785,    -5,
     804,  -169,  -169,  -169,  -169,   401,  -169,  -169,  -169,   251,
       5,   251,  -169,  -169,  -169,    62,  -169,  -169,  -169,   -12,
    -169,  -169,     4,    88,    75,    80,   112,   119,   124,    16,
     139,    87,  -169,   100,   785,   -21,  -169,  -169,   136,  -169,
    -169,   113,  -169,   108,   104,   428,  -169,    22,  -169,   326,
    -169,   126,  -169,  -169,   142,  -169,   141,  -169,   307,  -169,
     200,    78,   183,  -169,    84,  -169,  -169,  -169,   785,   785,
     785,   785,   785,   785,   785,   785,   785,   785,   785,   785,
     785,   785,   785,   785,   785,   785,   785,   785,   785,  -169,
    -169,   392,   785,  -169,  -169,     5,   460,  -169,  -169,  -169,
    -169,    18,   189,   171,  -169,   105,  -169,   197,  -169,   479,
     511,   156,   785,  -169,   307,  -169,  -169,    93,   535,  -169,
     127,   785,  -169,    88,   -29,    75,    80,   112,   119,   124,
     124,   124,   124,    16,    16,   139,   139,    87,    87,  -169,
    -169,  -169,  -169,  -169,  -169,   145,   -23,  -169,   460,  -169,
    -169,   101,   147,  -169,  -169,   200,   227,  -169,  -169,   566,
     210,   594,   218,   603,   149,  -169,  -169,   205,   222,  -169,
     228,    10,   622,  -169,   785,   785,  -169,  -169,  -169,    -4,
    -169,  -169,  -169,   307,   159,   673,   307,   162,   692,   729,
     220,   271,  -169,  -169,  -169,  -169,   234,  -169,   233,  -169,
    -169,  -169,   335,  -169,   307,   307,   163,  -169,   307,   307,
     167,   307,   172,   748,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,   307,  -169,  -169,   307,  -169,   307,   307,   188,  -169,
    -169,  -169,  -169,   307,  -169
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    20,    13,     0,     0,     0,     0,     0,     4,     5,
       7,     8,     0,     0,     9,   144,   145,   146,   139,     0,
       0,   140,    65,     0,     0,    70,     0,     0,     0,     0,
       0,   130,   131,   129,    63,     0,   128,   132,   133,    68,
       0,    69,    54,    55,    56,     0,    57,    58,    59,     0,
      88,    90,    92,    95,    97,    99,   101,   103,   105,   110,
     113,   116,   119,   123,     0,   125,   134,     2,     0,     1,
       6,     0,    14,    16,     0,     0,    11,     0,     3,     0,
      85,     0,    84,    87,     0,    94,     0,   123,     0,   126,
      19,    43,     0,    66,    16,    67,    64,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   127,
     138,     0,     0,    21,    12,     0,     0,    10,    36,    33,
      26,    32,     0,    27,    28,     0,    23,     0,   141,     0,
       0,     0,     0,    86,     0,    61,    18,     0,     0,    42,
      44,     0,    89,    96,     0,    98,   100,   102,   104,   106,
     109,   107,   108,   112,   111,   114,   115,   117,   118,   120,
     121,   122,    91,   137,   142,     0,     0,    15,     0,    17,
      37,     0,    30,    31,    24,     0,     0,    25,    22,     0,
       0,     0,     0,     0,     0,    60,    53,     0,     0,    49,
       0,     0,     0,   124,     0,     0,   136,   135,    40,     0,
      29,    35,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,    45,    47,    52,     0,    48,     0,    93,
     143,    38,     0,    83,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,    71,    50,    46,    39,    41,    82,
      81,     0,    74,    73,     0,    79,     0,     0,     0,    80,
      72,    78,    77,     0,    76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,    15,  -169,   286,  -169,     0,    26,  -169,   170,   208,
      11,   -69,  -169,   120,  -169,  -168,  -169,  -169,   -62,  -169,
     -25,  -169,  -169,     1,   221,  -169,  -169,  -169,  -169,   -19,
     -76,   -26,   -72,  -169,   214,   203,   207,   204,   211,    74,
     169,   174,   177,   -45,   -17,  -169,  -169,   318,  -169,  -169
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,   131,    71,    72,    91,
      13,   197,   133,   134,   135,   179,   209,    92,   198,   150,
      41,    42,    43,    44,    45,    46,    81,    47,    48,    49,
      50,    51,    86,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,   175,    21
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      77,    14,    85,   137,    39,   132,    14,   231,    84,    14,
     208,    87,     1,    89,    76,    79,    77,    68,     2,   119,
      67,    14,   152,    73,   120,     1,    12,    98,    99,   149,
      40,    12,   204,    98,    12,    78,   121,   207,   122,    39,
      69,    39,   172,    97,    98,   174,    12,    87,   111,    85,
     180,    94,   232,    15,    16,    17,    88,    18,    87,   112,
     141,    90,     6,   145,   248,    40,   100,    40,   225,   183,
     169,   170,   171,    96,   127,   181,   200,   148,    98,   140,
     138,   154,    87,    80,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,     2,   180,   176,    82,    40,   203,    19,     1,     2,
     128,   129,     2,   101,     1,     2,    90,     4,     4,   195,
     190,   192,    85,   194,     4,     1,     2,     3,     4,   230,
     228,    87,   226,   126,    87,   147,    94,   148,   102,   115,
     116,    74,   182,    75,   103,   105,   106,   107,   108,   118,
     147,   196,   148,   117,   109,   110,   180,   126,   181,   196,
     148,   186,   130,   187,     6,    74,     5,    75,   124,   125,
     214,    74,   217,    75,   220,     6,    85,   104,   229,   159,
     160,   161,   162,   142,   201,    87,   202,    87,   233,   113,
     114,   237,    68,    74,   123,    75,   236,   143,    98,   240,
     242,   205,   144,   206,    74,    98,    75,   221,     2,   249,
     250,   193,    98,   252,   253,    98,   255,   234,    98,    98,
     238,   251,   244,    98,   258,   254,   259,   185,    98,   260,
     256,   261,   262,   211,   212,    15,    16,    17,   264,    18,
       2,   151,     4,    22,    98,    23,   263,   184,    24,    25,
      26,    27,    28,    29,    15,    16,    17,   188,    18,     2,
      93,     4,    95,   222,    23,   215,    98,    24,    25,    26,
      27,    28,    29,   218,    98,   243,    98,    30,   163,   164,
     223,     4,    31,    32,    33,   165,   166,    34,   224,    35,
     167,   168,   245,   246,    70,   177,    30,    36,   146,    37,
      38,    31,    32,    33,   155,   210,    34,   157,    35,   156,
      15,    16,    17,   153,    18,   158,    36,     4,    37,    38,
      23,    20,     0,    24,    25,    26,    27,    28,    29,    15,
      16,    17,     0,    18,     2,     0,     0,     0,    15,    16,
      17,     0,    18,     0,     0,   178,   247,     0,     0,     0,
       0,     0,    30,     0,     0,     0,     0,    31,    32,    33,
       0,     0,    34,     0,    35,    15,    16,    17,     0,    18,
       0,    30,    36,     0,    37,    38,    31,    32,    33,     0,
      30,   139,     0,    35,     0,    31,    32,    33,     0,     0,
       0,    36,    35,    37,    38,    15,    16,    17,     0,    18,
      36,     0,    37,    38,    15,    16,    17,    30,    18,     2,
       0,     0,    31,    32,    33,     0,     0,    83,     0,    35,
       0,     0,     0,     0,     0,     0,     0,    36,     0,    37,
      38,    15,    16,    17,     0,    18,     0,    30,     0,     0,
       0,     0,    31,    32,    33,     0,    30,     0,     0,    35,
     173,    31,    32,    33,     0,     0,     0,    36,    35,    37,
      38,     0,     0,    15,    16,    17,    36,    18,    37,    38,
     178,     0,     0,    30,     0,     0,     0,     0,    31,    32,
      33,     0,    15,    16,    17,    35,    18,     0,   136,     0,
       0,     0,     0,    36,     0,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,    30,     0,     0,     0,     0,
      31,    32,    33,     0,    15,    16,    17,    35,    18,     0,
       0,     0,     0,     0,    30,    36,     0,    37,    38,    31,
      32,    33,     0,     0,   189,     0,    35,     0,    15,    16,
      17,     0,    18,     0,    36,     0,    37,    38,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,     0,     0,
       0,    31,    32,    33,     0,     0,   191,     0,    35,    15,
      16,    17,     0,    18,     0,     0,    36,     0,    37,    38,
      30,     0,     0,     0,     0,    31,    32,    33,     0,     0,
       0,     0,    35,     0,     0,   199,     0,    15,    16,    17,
      36,    18,    37,    38,     0,     0,    15,    16,    17,     0,
      18,    30,     0,     0,     0,     0,    31,    32,    33,     0,
       0,     0,     0,    35,   213,    15,    16,    17,     0,    18,
       0,    36,     0,    37,    38,     0,     0,     0,     0,    30,
       0,     0,     0,     0,    31,    32,    33,     0,    30,     0,
       0,    35,   216,    31,    32,    33,     0,     0,   219,    36,
      35,    37,    38,     0,     0,     0,     0,    30,    36,     0,
      37,    38,    31,    32,    33,     0,    15,    16,    17,    35,
      18,     0,   227,     0,     0,     0,     0,    36,     0,    37,
      38,     0,     0,     0,     0,    15,    16,    17,     0,    18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     0,     0,    31,    32,    33,     0,     0,     0,     0,
      35,   235,    15,    16,    17,     0,    18,    30,    36,     0,
      37,    38,    31,    32,    33,     0,     0,     0,     0,    35,
     239,    15,    16,    17,     0,    18,     0,    36,     0,    37,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,     0,     0,     0,    31,
      32,    33,     0,     0,     0,     0,    35,   241,    15,    16,
      17,     0,    18,    30,    36,     0,    37,    38,    31,    32,
      33,     0,     0,     0,     0,    35,   257,    15,    16,    17,
       0,    18,     0,    36,     0,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,     0,     0,     0,    31,    32,    33,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,    30,
      36,     0,    37,    38,    31,    32,    33,     0,     0,     0,
       0,    19,     0,     0,     0,     0,     0,     0,     0,    36,
       0,    37,    38
};

static const yytype_int16 yycheck[] =
{
      19,     0,    28,    75,     4,    74,     5,    11,    27,     8,
     178,    28,     7,    30,    13,    57,    35,     6,     8,    64,
       5,    20,    98,    12,    45,     7,     0,    56,    24,    91,
       4,     5,    61,    56,     8,    20,    57,    60,    59,    39,
       0,    41,   118,    55,    56,   121,    20,    64,    32,    75,
     126,    40,    56,     3,     4,     5,    61,     7,    75,    43,
      79,    35,    57,    88,   232,    39,    62,    41,    58,   131,
     115,   116,   117,    11,    73,    57,   148,    59,    56,    79,
      58,   100,    99,    55,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,     8,   178,   122,    55,    79,   151,    57,     7,     8,
       6,     7,     8,    25,     7,     8,    90,    10,    10,   144,
     139,   140,   148,   142,    10,     7,     8,     9,    10,   205,
     202,   148,   201,    49,   151,    57,   125,    59,    63,    52,
      53,    57,   131,    59,    64,    26,    27,    28,    29,    49,
      57,    58,    59,    66,    30,    31,   232,    49,    57,    58,
      59,    56,    58,    58,    57,    57,    48,    59,    55,    56,
     189,    57,   191,    59,   193,    57,   202,    65,   204,   105,
     106,   107,   108,    57,    57,   202,    59,   204,   213,    50,
      51,   216,   181,    57,    58,    59,   215,    55,    56,   218,
     219,    56,    61,    58,    57,    56,    59,    58,     8,   234,
     235,    55,    56,   238,   239,    56,   241,    58,    56,    56,
      58,    58,   221,    56,   243,    58,   251,    56,    56,   254,
      58,   256,   257,     6,     7,     3,     4,     5,   263,     7,
       8,    58,    10,    11,    56,    13,    58,    58,    16,    17,
      18,    19,    20,    21,     3,     4,     5,    60,     7,     8,
      39,    10,    41,    58,    13,    55,    56,    16,    17,    18,
      19,    20,    21,    55,    56,    55,    56,    45,   109,   110,
      58,    10,    50,    51,    52,   111,   112,    55,    60,    57,
     113,   114,    58,    60,     8,   125,    45,    65,    90,    67,
      68,    50,    51,    52,   101,   185,    55,   103,    57,   102,
       3,     4,     5,    99,     7,   104,    65,    10,    67,    68,
      13,     3,    -1,    16,    17,    18,    19,    20,    21,     3,
       4,     5,    -1,     7,     8,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    51,    52,
      -1,    -1,    55,    -1,    57,     3,     4,     5,    -1,     7,
      -1,    45,    65,    -1,    67,    68,    50,    51,    52,    -1,
      45,    55,    -1,    57,    -1,    50,    51,    52,    -1,    -1,
      -1,    65,    57,    67,    68,     3,     4,     5,    -1,     7,
      65,    -1,    67,    68,     3,     4,     5,    45,     7,     8,
      -1,    -1,    50,    51,    52,    -1,    -1,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,
      68,     3,     4,     5,    -1,     7,    -1,    45,    -1,    -1,
      -1,    -1,    50,    51,    52,    -1,    45,    -1,    -1,    57,
      58,    50,    51,    52,    -1,    -1,    -1,    65,    57,    67,
      68,    -1,    -1,     3,     4,     5,    65,     7,    67,    68,
      10,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    51,
      52,    -1,     3,     4,     5,    57,     7,    -1,    60,    -1,
      -1,    -1,    -1,    65,    -1,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      50,    51,    52,    -1,     3,     4,     5,    57,     7,    -1,
      -1,    -1,    -1,    -1,    45,    65,    -1,    67,    68,    50,
      51,    52,    -1,    -1,    55,    -1,    57,    -1,     3,     4,
       5,    -1,     7,    -1,    65,    -1,    67,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    50,    51,    52,    -1,    -1,    55,    -1,    57,     3,
       4,     5,    -1,     7,    -1,    -1,    65,    -1,    67,    68,
      45,    -1,    -1,    -1,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    -1,     3,     4,     5,
      65,     7,    67,    68,    -1,    -1,     3,     4,     5,    -1,
       7,    45,    -1,    -1,    -1,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    57,    58,     3,     4,     5,    -1,     7,
      -1,    65,    -1,    67,    68,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    50,    51,    52,    -1,    45,    -1,
      -1,    57,    58,    50,    51,    52,    -1,    -1,    55,    65,
      57,    67,    68,    -1,    -1,    -1,    -1,    45,    65,    -1,
      67,    68,    50,    51,    52,    -1,     3,     4,     5,    57,
       7,    -1,    60,    -1,    -1,    -1,    -1,    65,    -1,    67,
      68,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      57,    58,     3,     4,     5,    -1,     7,    45,    65,    -1,
      67,    68,    50,    51,    52,    -1,    -1,    -1,    -1,    57,
      58,     3,     4,     5,    -1,     7,    -1,    65,    -1,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,
      51,    52,    -1,    -1,    -1,    -1,    57,    58,     3,     4,
       5,    -1,     7,    45,    65,    -1,    67,    68,    50,    51,
      52,    -1,    -1,    -1,    -1,    57,    58,     3,     4,     5,
      -1,     7,    -1,    65,    -1,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      65,    -1,    67,    68,    50,    51,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    67,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,     9,    10,    48,    57,    70,    71,    72,
      73,    74,    75,    79,    92,     3,     4,     5,     7,    57,
     116,   118,    11,    13,    16,    17,    18,    19,    20,    21,
      45,    50,    51,    52,    55,    57,    65,    67,    68,    74,
      75,    89,    90,    91,    92,    93,    94,    96,    97,    98,
      99,   100,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    70,    79,     0,
      72,    76,    77,    79,    57,    59,    92,    98,    70,    57,
      55,    95,    55,    55,    98,   100,   101,   113,    61,   113,
      75,    78,    86,    93,    79,    93,    11,    55,    56,    24,
      62,    25,    63,    64,    65,    26,    27,    28,    29,    30,
      31,    32,    43,    50,    51,    52,    53,    66,    49,   112,
      45,    57,    59,    58,    55,    56,    49,    92,     6,     7,
      58,    75,    80,    81,    82,    83,    60,   101,    58,    55,
      74,    98,    57,    55,    61,    89,    78,    57,    59,    87,
      88,    58,    99,   103,    98,   104,   105,   106,   107,   108,
     108,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   112,    99,    58,    99,   117,    98,    77,    10,    84,
      99,    57,    79,    87,    58,    56,    56,    58,    60,    55,
      98,    55,    98,    55,    98,    89,    58,    80,    87,    60,
     101,    57,    59,   112,    61,    56,    58,    60,    84,    85,
      82,     6,     7,    58,    98,    55,    58,    98,    55,    55,
      98,    58,    58,    58,    60,    58,    80,    60,   101,   100,
      99,    11,    56,    89,    58,    58,    98,    89,    58,    58,
      98,    58,    98,    55,    92,    58,    60,    11,    84,    89,
      89,    58,    89,    89,    58,    89,    58,    58,    98,    89,
      89,    89,    89,    58,    89
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    70,    71,    71,    72,    72,    72,
      73,    73,    74,    75,    76,    76,    77,    77,    78,    78,
      79,    79,    79,    79,    79,    79,    79,    80,    81,    81,
      82,    82,    82,    83,    83,    83,    83,    84,    84,    84,
      85,    85,    86,    86,    87,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    89,    89,    89,    89,    89,    89,
      90,    90,    91,    91,    92,    92,    93,    93,    93,    93,
      95,    94,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    97,    97,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   107,   107,   107,
     108,   108,   108,   109,   109,   109,   110,   110,   110,   111,
     111,   111,   111,   112,   112,   113,   113,   113,   114,   114,
     114,   114,   114,   114,   115,   115,   115,   115,   115,   116,
     116,   116,   117,   117,   118,   118,   118
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     2,     1,     1,     1,
       3,     2,     3,     1,     1,     3,     1,     3,     2,     1,
       1,     3,     4,     3,     4,     4,     3,     1,     1,     3,
       2,     2,     1,     1,     3,     3,     1,     1,     3,     4,
       1,     3,     2,     1,     1,     3,     4,     3,     3,     2,
       4,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       4,     3,     2,     1,     3,     2,     2,     2,     1,     1,
       0,     6,     8,     7,     7,     6,     9,     8,     8,     7,
       8,     7,     7,     6,     2,     2,     3,     2,     1,     3,
       1,     3,     1,     5,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     4,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     3,     2,     1,
       1,     3,     1,     3,     1,     1,     1
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
        case 10:
#line 58 "yacc1.y" /* yacc.c:1646  */
    {scope--;}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 59 "yacc1.y" /* yacc.c:1646  */
    {scope--;}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 69 "yacc1.y" /* yacc.c:1646  */
    {								
								strcpy(tokval, "&*&*^&^");
								if(strcmp(dectype, "int")==0 && scope==0){
									strcpy(tokval, "0");
								}
								int k = search((char*)name, dectype, scope, enc_lno[scope], 1); 
								if(k==-1)
									s[no_of_entries++] = init_node((char*)name,scope,lno,dectype, enc_lno[scope], tokval);
								else if(k==-2){
									printf("Error at line number : %d - REDECLARATION\n", lno);
									printf("Aborting...\n");
									exit(0);
								}
							}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 84 "yacc1.y" /* yacc.c:1646  */
    {
								char val[100];
								sprintf(val, "%d", (yyvsp[0].val));
								printf("\nInitialization %s =%s\n\n", name, val);
								int k = search((char*)name, dectype, scope, enc_lno[scope], 1); 
								if(k==-1)
									s[no_of_entries++] = init_node((char*)name,scope,lno,dectype, enc_lno[scope], val);
								else if(k==-2){
									printf("Error at line number : %d - REINITIALIZATION\n", lno);
									printf("Aborting...\n");
									exit(0);
								}
								else
									update(k, tokval);
							}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 103 "yacc1.y" /* yacc.c:1646  */
    {strcpy(name, idname);}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 106 "yacc1.y" /* yacc.c:1646  */
    {
								//char num[100];
								//sprintf(num, "%d", $3);
								strcat(dectype, (char*)"[");
								//strcat(dectype, num);
								strcat(dectype, (char*)"]");
							}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 114 "yacc1.y" /* yacc.c:1646  */
    {
								strcat(dectype, (char*)"[]");
							}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 118 "yacc1.y" /* yacc.c:1646  */
    {
								strcpy(tokval, "-");
								scope++;
								enc_lno[scope] = lno;
								s[no_of_entries++] = init_node((char*)name,scope,lno,"FUNC", enc_lno[scope], tokval);	
							}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 126 "yacc1.y" /* yacc.c:1646  */
    {
								strcpy(tokval, "-");
								scope++;
								enc_lno[scope] = lno;
								s[no_of_entries++] = init_node((char*)name,scope,lno,"FUNC", enc_lno[scope], tokval);
							}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 147 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 190 "yacc1.y" /* yacc.c:1646  */
    {scope++;enc_lno[scope] = lno;}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 190 "yacc1.y" /* yacc.c:1646  */
    {scope--;}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 192 "yacc1.y" /* yacc.c:1646  */
    {scope--;}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 193 "yacc1.y" /* yacc.c:1646  */
    {scope--;}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 194 "yacc1.y" /* yacc.c:1646  */
    {scope--;}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 195 "yacc1.y" /* yacc.c:1646  */
    {scope--;}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 196 "yacc1.y" /* yacc.c:1646  */
    {scope--;}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 197 "yacc1.y" /* yacc.c:1646  */
    {scope--;}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 198 "yacc1.y" /* yacc.c:1646  */
    {scope--;}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 199 "yacc1.y" /* yacc.c:1646  */
    {scope--;}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 200 "yacc1.y" /* yacc.c:1646  */
    {scope--;}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 201 "yacc1.y" /* yacc.c:1646  */
    {scope--;}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 202 "yacc1.y" /* yacc.c:1646  */
    {scope--;}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 203 "yacc1.y" /* yacc.c:1646  */
    {scope--;}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 210 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 213 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 215 "yacc1.y" /* yacc.c:1646  */
    {
								printf("\nInitialization %s =%d\n\n", name, (yyvsp[0].val));
								int k = search((char*)name, dectype, scope, enc_lno[scope], 0); 
								char val[100];
								sprintf(val, "%d", (yyvsp[0].val));
								if(k==-1)
									s[no_of_entries++] = init_node((char*)name,scope,lno,dectype, enc_lno[scope],val);
								else if(k==-2){
									printf("Error at line number : %d\n", lno);
									printf("Aborting...\n");
									exit(0);
								}
								else
									update(k, val);
								printf("hereeee");

							}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 233 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 235 "yacc1.y" /* yacc.c:1646  */
    {
								if((yyvsp[-4].val)){
									(yyval.val) = (yyvsp[-2].val);
								}
								else{
									(yyval.val) = (yyvsp[0].val);
								}
							}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 244 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 246 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 248 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = (yyvsp[-2].val) || (yyvsp[0].val);
							}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 252 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 254 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = (yyvsp[-2].val) && (yyvsp[0].val);
							}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 258 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 260 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = (yyvsp[-2].val) | (yyvsp[0].val);
							}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 264 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 266 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = (yyvsp[-2].val) ^ (yyvsp[0].val);
							}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 270 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 272 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = (yyvsp[-2].val) & (yyvsp[0].val);
							}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 276 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 278 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = ((yyvsp[-2].val)==(yyvsp[0].val));
							}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 282 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = ((yyvsp[-2].val)<=(yyvsp[0].val));
							}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 286 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = ((yyvsp[-2].val)>=(yyvsp[0].val));
							}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 290 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = ((yyvsp[-2].val)!=(yyvsp[0].val));
							}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 294 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 296 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = ((yyvsp[-2].val) < (yyvsp[0].val));
							}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 300 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = ((yyvsp[-2].val) > (yyvsp[0].val));
							}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 304 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 306 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = ((yyvsp[-2].val) << (yyvsp[0].val));
							}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 310 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = ((yyvsp[-2].val) >> (yyvsp[0].val));
							}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 314 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 316 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = (yyvsp[-2].val) + (yyvsp[0].val);
							}
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 320 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = (yyvsp[-2].val) - (yyvsp[0].val);
							}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 324 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 326 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = (yyvsp[-2].val) * (yyvsp[0].val);
							}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 330 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = (yyvsp[-2].val) / (yyvsp[0].val);
							}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 334 "yacc1.y" /* yacc.c:1646  */
    {
								(yyval.val) = (yyvsp[-2].val) % (yyvsp[0].val);
							}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 338 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 341 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 347 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 351 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[-1].val)+1;}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 354 "yacc1.y" /* yacc.c:1646  */
    {
								strcpy(name, idname);
								strcpy(dectype, "int");
								int k = search((char*)name, dectype, scope, enc_lno[scope], 0); 
								if(k==-1 && strcmp(name, "printf")!=0){
									printf("*******ERROR*******\n");
									printf("There's no variable by the id : %s of the type %s\n", name, dectype);
									printf("Aborting...\n");
									exit(0);
								}
								else if(strcmp(name, "printf")!=0){
									printf("Got value of id : %s as %d", s[k].variable_name, atoi(s[k].value_of_variables));
									(yyval.val) = atoi(s[k].value_of_variables);
								}								
							}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 369 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[0].val);}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 370 "yacc1.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[-1].val);}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 376 "yacc1.y" /* yacc.c:1646  */
    {
								printf("%d - %d \n", (yyval.val), (yyvsp[0].val));
							}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 380 "yacc1.y" /* yacc.c:1646  */
    {
								printf(".cval = %c\n\n", (yyval.cval));
							}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 384 "yacc1.y" /* yacc.c:1646  */
    {
								printf(".fval = %f", (yyval.fval));
							}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2179 "y.tab.c" /* yacc.c:1646  */
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
#line 388 "yacc1.y" /* yacc.c:1906  */

#include "lex.yy.c"
#include<ctype.h>
char st[100][10];
int top=0;
char i_[2]="0";
char temp[2]="t";

int main()
{
	extern FILE *yyout;
	yyout = fopen("output","w");
	fprintf(yyout, "%d ", 1);
	FILE *fp = fopen("output", "w");
	fclose(fp);

    yyparse();
    if(success){
    	printf("Parsing Successful\n");
    	printTable();
    }
    printf("\n");
    fclose(yyout);
    return 0;
}

int yyerror(const char *msg)
{
	extern int lno;
	printf("Parsing Failed\nLine Number: %d %s\n",lno,msg);
	success = 0;
	return 0;
}
