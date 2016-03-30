/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 2 "parser.y"

#include <iostream>
#include "definiciones.h"
#include "ast.h"
#include <map>
using namespace std;

#define YYDEBUG 1

extern int yylex(void);
extern int yycolumn;
extern int yylineno;
extern char * yytext;
ArbolSintactico * root_ast;
tabla_simbolos * head_table = NULL;
tabla_simbolos * tmp_table = NULL;
map<string,Robot *> robots;
bool error_sintactico = 0; 
void yyerror (char const *s) 
{	error_sintactico = 1;
	cout << "Parse error:" << s << "\nFila: " << yylineno << "\n" << "Columna: " << yycolumn-1-strlen(yytext) << "\n" ; 
}


/* Line 371 of yacc.c  */
#line 93 "parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DISYUNCION = 258,
     CONJUNCION = 259,
     MENORIGUAL = 260,
     MAYORIGUAL = 261,
     MAYOR = 262,
     MENOR = 263,
     IGUAL = 264,
     RESTA = 265,
     SUMA = 266,
     MOD = 267,
     DIV = 268,
     MULT = 269,
     NEGACION = 270,
     END = 271,
     ELSE = 272,
     DOSPUNTOS = 273,
     ENTER = 274,
     PARABRE = 275,
     PARCIERRA = 276,
     COMA = 277,
     PUNTO = 278,
     BOT = 279,
     CREATE = 280,
     EXECUTE = 281,
     ACTIVATE = 282,
     DEACTIVATE = 283,
     STORE = 284,
     COLLECT = 285,
     DROP = 286,
     ADVANCE = 287,
     ON = 288,
     ACTIVATION = 289,
     DEACTIVATION = 290,
     DEFAULT = 291,
     UP = 292,
     DOWN = 293,
     LEFT = 294,
     RIGHT = 295,
     READ = 296,
     SEND = 297,
     RECEIVE = 298,
     IF = 299,
     WHILE = 300,
     INT = 301,
     BOOL = 302,
     CHAR = 303,
     AS = 304,
     ME = 305,
     number = 306,
     IDENTIFIER = 307,
     CHARACTER = 308,
     arbol = 309,
     TRUE = 310,
     FALSE = 311
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 37 "parser.y"
	
			int num; 
			bool boolean;
			char * str;
			char ch;
			ArbolSintactico * arb;
		

/* Line 387 of yacc.c  */
#line 201 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;
extern YYLTYPE yylloc;
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 242 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   437

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNRULES -- Number of states.  */
#define YYNSTATES  141

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,    11,    12,    14,    17,    21,    24,
      29,    35,    42,    44,    47,    50,    55,    59,    63,    67,
      71,    75,    79,    82,    85,    88,    91,    94,    99,   102,
     105,   107,   111,   113,   115,   117,   119,   121,   123,   125,
     129,   131,   134,   138,   142,   146,   152,   160,   166,   168,
     172,   176,   180,   184,   188,   192,   195,   199,   203,   207,
     211,   215,   219,   223,   226,   228,   230,   232,   234,   236
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    59,    69,    -1,    59,    25,    60,    69,
      -1,    -1,    61,    -1,    60,    61,    -1,    62,    63,    16,
      -1,    62,    16,    -1,    59,    67,    24,    66,    -1,    33,
      68,    18,    64,    16,    -1,    63,    33,    68,    18,    64,
      16,    -1,    65,    -1,    64,    65,    -1,    30,    23,    -1,
      30,    49,    66,    23,    -1,    29,    72,    23,    -1,    31,
      72,    23,    -1,    37,    72,    23,    -1,    38,    72,    23,
      -1,    39,    72,    23,    -1,    40,    72,    23,    -1,    37,
      23,    -1,    38,    23,    -1,    39,    23,    -1,    40,    23,
      -1,    41,    23,    -1,    41,    49,    66,    23,    -1,    42,
      23,    -1,    43,    23,    -1,    52,    -1,    66,    22,    52,
      -1,    46,    -1,    47,    -1,    48,    -1,    34,    -1,    35,
      -1,    36,    -1,    72,    -1,    26,    70,    16,    -1,    71,
      -1,    70,    71,    -1,    27,    66,    23,    -1,    28,    66,
      23,    -1,    32,    66,    23,    -1,    44,    72,    18,    70,
      16,    -1,    44,    72,    18,    70,    17,    70,    16,    -1,
      45,    72,    18,    70,    16,    -1,    58,    -1,    72,    11,
      72,    -1,    72,    10,    72,    -1,    72,    14,    72,    -1,
      72,    13,    72,    -1,    72,    12,    72,    -1,    20,    72,
      21,    -1,    10,    72,    -1,    72,     8,    72,    -1,    72,
       7,    72,    -1,    72,     5,    72,    -1,    72,     6,    72,
      -1,    72,     9,    72,    -1,    72,     3,    72,    -1,    72,
       4,    72,    -1,    15,    72,    -1,    55,    -1,    56,    -1,
      52,    -1,    53,    -1,    51,    -1,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    69,    69,    70,    75,    78,    79,    82,    83,    86,
      89,    90,    93,    94,    97,    98,   100,   101,   104,   105,
     106,   107,   109,   110,   111,   112,   115,   117,   118,   119,
     122,   123,   126,   127,   128,   130,   131,   132,   133,   136,
     139,   140,   143,   144,   145,   147,   148,   149,   150,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DISYUNCION", "CONJUNCION", "MENORIGUAL",
  "MAYORIGUAL", "MAYOR", "MENOR", "IGUAL", "RESTA", "SUMA", "MOD", "DIV",
  "MULT", "NEGACION", "END", "ELSE", "DOSPUNTOS", "ENTER", "PARABRE",
  "PARCIERRA", "COMA", "PUNTO", "BOT", "CREATE", "EXECUTE", "ACTIVATE",
  "DEACTIVATE", "STORE", "COLLECT", "DROP", "ADVANCE", "ON", "ACTIVATION",
  "DEACTIVATION", "DEFAULT", "UP", "DOWN", "LEFT", "RIGHT", "READ", "SEND",
  "RECEIVE", "IF", "WHILE", "INT", "BOOL", "CHAR", "AS", "ME", "number",
  "IDENTIFIER", "CHARACTER", "arbol", "TRUE", "FALSE", "$accept", "S",
  "lambda", "lDecs", "declaracion", "declaracionf", "lComp", "instrsRobot",
  "instrRobot", "decl", "tipo", "condicion", "exec", "instrs", "instr",
  "expr", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    58,    59,    60,    60,    61,    61,    62,
      63,    63,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      66,    66,    67,    67,    67,    68,    68,    68,    68,    69,
      70,    70,    71,    71,    71,    71,    71,    71,    71,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     4,     0,     1,     2,     3,     2,     4,
       5,     6,     1,     2,     2,     4,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     4,     2,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     3,     3,     5,     7,     5,     1,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     2,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     4,     4,     2,     0,     4,     5,
       0,     0,     0,     0,     0,     0,    48,     4,    40,    32,
      33,    34,     0,     6,     3,     8,     0,     0,    30,     0,
       0,     0,     0,     0,     0,    69,    68,    66,    67,    64,
      65,     0,     0,    39,    41,     0,    35,    36,    37,     0,
      38,     7,     0,     0,    42,    43,    44,    55,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     4,     9,     0,     0,    31,    54,    61,
      62,    58,    59,    57,    56,    60,    50,    49,    53,    52,
      51,     4,     4,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,    45,     4,    47,     0,
      14,     0,     0,    22,     0,    23,     0,    24,     0,    25,
       0,    26,     0,    28,    29,    10,    13,     0,     4,    16,
       0,    17,    18,    19,    20,    21,     0,    11,    46,    15,
      27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    16,     2,     8,     9,    10,    27,   103,   104,    29,
      22,    49,     6,    17,    18,    50
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -94
static const yytype_int16 yypact[] =
{
     -94,    22,   -13,   -94,   -94,    51,   -94,    78,    12,   -94,
      -1,    -4,    -4,    -4,   107,   107,   -94,    49,   -94,   -94,
     -94,   -94,    19,   -94,   -94,   -94,    -6,     0,   -94,    18,
      41,    76,   107,   107,   107,   -94,   -94,   -94,   -94,   -94,
     -94,   370,   386,   -94,   -94,    -4,   -94,   -94,   -94,    52,
     413,   -94,    -6,    21,   -94,   -94,   -94,   116,   -94,   351,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,    51,    51,    58,   372,    64,   -94,   -94,   423,
     423,     7,     7,     7,     7,     7,   116,   116,   -94,   -94,
     -94,   148,   145,   107,   -22,   107,    16,    82,    93,   100,
     -12,    62,    68,   168,   -94,   372,   -94,    51,   -94,   225,
     -94,    -4,   246,   -94,   267,   -94,   288,   -94,   309,   -94,
     330,   -94,    -4,   -94,   -94,   -94,   -94,   184,   151,   -94,
      84,   -94,   -94,   -94,   -94,   -94,   117,   -94,   -94,   -94,
     -94
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -94,   109,    96,   -94,   106,   -94,   -94,    13,   -93,   -10,
     -94,    67,   113,   -65,   -17,    -9
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      44,   110,    30,    31,    32,    41,    42,    91,    92,    33,
     126,   121,     4,     5,    34,    25,    51,    67,    68,    69,
      70,    71,     3,    57,    58,    59,    32,   111,    46,    47,
      48,    33,    26,    52,   126,    74,    34,   122,     5,   113,
      53,    54,   128,    45,    35,    36,    37,    38,    28,    39,
      40,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    53,    55,    43,    35,    36,    37,    38,
      75,    39,    40,    77,    44,    44,    11,    12,    11,    12,
      53,    13,   105,    13,   109,   123,   112,   114,   116,   118,
     120,   124,    32,    14,    15,    14,    15,    33,    53,    56,
       7,   130,    34,    32,     7,   115,    53,   139,    33,     1,
      32,    44,   136,    34,    23,    33,   117,    32,   127,    76,
      34,    24,    33,   119,    19,    20,    21,    34,    69,    70,
      71,     0,    35,    36,    37,    38,     0,    39,    40,    53,
     140,     0,     0,    35,    36,    37,    38,     0,    39,    40,
      35,    36,    37,    38,     0,    39,    40,    35,    36,    37,
      38,   108,    39,    40,   106,   107,     0,   138,     0,     0,
       0,     0,    11,    12,     0,    11,    12,    13,    11,    12,
      13,     0,     0,    13,   125,     0,     0,     0,     0,    14,
      15,     0,    14,    15,     0,    14,    15,    93,    94,    95,
     137,     0,     0,     0,     0,    96,    97,    98,    99,   100,
     101,   102,     0,    93,    94,    95,     0,     0,     0,     0,
       0,    96,    97,    98,    99,   100,   101,   102,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     0,     0,     0,     0,     0,     0,     0,   129,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,   131,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     0,
     132,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,     0,
       0,   133,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,   134,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,   135,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,    78,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,     0,    72,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    93,    94,    95,    73,     0,     0,     0,     0,    96,
      97,    98,    99,   100,   101,   102,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-94)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      17,    23,    12,    13,    10,    14,    15,    72,    73,    15,
     103,    23,    25,    26,    20,    16,    16,    10,    11,    12,
      13,    14,     0,    32,    33,    34,    10,    49,    34,    35,
      36,    15,    33,    33,   127,    45,    20,    49,    26,    23,
      22,    23,   107,    24,    50,    51,    52,    53,    52,    55,
      56,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    22,    23,    16,    50,    51,    52,    53,
      18,    55,    56,    52,    91,    92,    27,    28,    27,    28,
      22,    32,    18,    32,    93,    23,    95,    96,    97,    98,
      99,    23,    10,    44,    45,    44,    45,    15,    22,    23,
       4,   111,    20,    10,     8,    23,    22,    23,    15,     0,
      10,   128,   122,    20,     8,    15,    23,    10,   105,    52,
      20,     8,    15,    23,    46,    47,    48,    20,    12,    13,
      14,    -1,    50,    51,    52,    53,    -1,    55,    56,    22,
      23,    -1,    -1,    50,    51,    52,    53,    -1,    55,    56,
      50,    51,    52,    53,    -1,    55,    56,    50,    51,    52,
      53,    16,    55,    56,    16,    17,    -1,    16,    -1,    -1,
      -1,    -1,    27,    28,    -1,    27,    28,    32,    27,    28,
      32,    -1,    -1,    32,    16,    -1,    -1,    -1,    -1,    44,
      45,    -1,    44,    45,    -1,    44,    45,    29,    30,    31,
      16,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    21,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    18,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    29,    30,    31,    18,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,    59,     0,    25,    26,    69,    59,    60,    61,
      62,    27,    28,    32,    44,    45,    58,    70,    71,    46,
      47,    48,    67,    61,    69,    16,    33,    63,    52,    66,
      66,    66,    10,    15,    20,    50,    51,    52,    53,    55,
      56,    72,    72,    16,    71,    24,    34,    35,    36,    68,
      72,    16,    33,    22,    23,    23,    23,    72,    72,    72,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    18,    18,    66,    18,    68,    52,    21,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    70,    70,    29,    30,    31,    37,    38,    39,    40,
      41,    42,    43,    64,    65,    18,    16,    17,    16,    72,
      23,    49,    72,    23,    72,    23,    72,    23,    72,    23,
      72,    23,    49,    23,    23,    16,    65,    64,    70,    23,
      66,    23,    23,    23,    23,    23,    66,    16,    16,    23,
      23
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
#else
static unsigned
yy_location_print_ (yyo, yylocp)
    FILE *yyo;
    YYLTYPE const * const yylocp;
#endif
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += fprintf (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += fprintf (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += fprintf (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += fprintf (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += fprintf (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;


/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = YYLEX;
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
  *++yylsp = yylloc;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 69 "parser.y"
    {(yyval.arb) = new raiz((yyvsp[(2) - (2)].arb)); root_ast = new ArbolSintactico((yyval.arb));}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 70 "parser.y"
    {(yyval.arb) = new raiz((yyvsp[(3) - (4)].arb), (yyvsp[(4) - (4)].arb)); root_ast = new ArbolSintactico((yyval.arb)); 
																	static_cast<raiz *>((yyval.arb))->table = *head_table; 
																	if (head_table->padre != NULL) {head_table = head_table->padre;} 
																}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 75 "parser.y"
    {tmp_table = new tabla_simbolos(); tmp_table->padre = head_table; head_table = tmp_table;}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 78 "parser.y"
    {(yyval.arb) = new instruccion((yyvsp[(1) - (1)].arb));}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 79 "parser.y"
    {(yyval.arb) = new instruccion((yyvsp[(1) - (2)].arb),(yyvsp[(2) - (2)].arb));}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 82 "parser.y"
    {(yyval.arb) = (yyvsp[(1) - (3)].arb); static_cast<declaracion *>((yyval.arb))->add_comportamiento((yyvsp[(2) - (3)].arb));head_table = head_table->padre;}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 83 "parser.y"
    {(yyval.arb) = (yyvsp[(1) - (2)].arb); head_table = head_table->padre;}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 86 "parser.y"
    {(yyval.arb) = new declaracion((yyvsp[(2) - (4)].arb),(yyvsp[(4) - (4)].arb));}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 89 "parser.y"
    {(yyval.arb) = new inside_bot((yyvsp[(2) - (5)].arb),(yyvsp[(4) - (5)].arb));}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 90 "parser.y"
    {(yyval.arb) = new instruccion((yyvsp[(1) - (6)].arb),new inside_bot((yyvsp[(3) - (6)].arb),(yyvsp[(5) - (6)].arb)));}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 93 "parser.y"
    {(yyval.arb) = new instruccion((yyvsp[(1) - (1)].arb));}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 94 "parser.y"
    {(yyval.arb) = new instruccion((yyvsp[(1) - (2)].arb),(yyvsp[(2) - (2)].arb));}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 97 "parser.y"
    {(yyval.arb) = new intr_robot(3);}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 98 "parser.y"
    {(yyval.arb) = new intr_robot((yyvsp[(3) - (4)].arb), 3); (yyvsp[(3) - (4)].arb)->add_variable(head_table->mapa.at("me"),0);}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 100 "parser.y"
    {(yyval.arb) = new intr_extra((yyvsp[(2) - (3)].arb), 0);}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 101 "parser.y"
    {(yyval.arb) = new intr_extra((yyvsp[(2) - (3)].arb), 1);}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 104 "parser.y"
    {(yyval.arb) = new intr_movimiento((yyvsp[(2) - (3)].arb),0);}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 105 "parser.y"
    {(yyval.arb) = new intr_movimiento((yyvsp[(2) - (3)].arb),1);}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 106 "parser.y"
    {(yyval.arb) = new intr_movimiento((yyvsp[(2) - (3)].arb),2);}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 107 "parser.y"
    {(yyval.arb) = new intr_movimiento((yyvsp[(2) - (3)].arb),3);}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 109 "parser.y"
    {(yyval.arb) = new intr_movimiento(0);}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 110 "parser.y"
    {(yyval.arb) = new intr_movimiento(1);}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 111 "parser.y"
    {(yyval.arb) = new intr_movimiento(2);}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 112 "parser.y"
    {(yyval.arb) = new intr_movimiento(3);}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 115 "parser.y"
    {(yyval.arb) = new intr_robot(4);}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 117 "parser.y"
    {(yyval.arb) = new intr_robot((yyvsp[(3) - (4)].arb), 4); (yyvsp[(3) - (4)].arb)->add_variable(head_table->mapa.at("me"),0);}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 118 "parser.y"
    {(yyval.arb) = new intr_robot(5);}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 119 "parser.y"
    {(yyval.arb) = new intr_robot(6);}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 122 "parser.y"
    {(yyval.arb) = new identificador((yyvsp[(1) - (1)].str));}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 123 "parser.y"
    {(yyval.arb) = new instruccion((yyvsp[(1) - (3)].arb),new identificador((yyvsp[(3) - (3)].str)));}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 126 "parser.y"
    {(yyval.arb) = new numero();}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 127 "parser.y"
    {(yyval.arb) = new booleano();}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 128 "parser.y"
    {(yyval.arb) = new character();}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 130 "parser.y"
    {(yyval.arb) = new on_condicion(0);}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 131 "parser.y"
    {(yyval.arb) = new on_condicion(1);}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 132 "parser.y"
    {(yyval.arb) = new on_condicion(2);}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 133 "parser.y"
    {(yyval.arb) = new on_condicion(3,(yyvsp[(1) - (1)].arb));}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 136 "parser.y"
    {(yyval.arb) = (yyvsp[(2) - (3)].arb);}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 139 "parser.y"
    {(yyval.arb) = new instruccion((yyvsp[(1) - (1)].arb));}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 140 "parser.y"
    {(yyval.arb) = new instruccion((yyvsp[(1) - (2)].arb),(yyvsp[(2) - (2)].arb));}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 143 "parser.y"
    {(yyval.arb) = new intr_robot((yyvsp[(2) - (3)].arb), 0); (yyvsp[(2) - (3)].arb)->check();}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 144 "parser.y"
    {(yyval.arb) = new intr_robot((yyvsp[(2) - (3)].arb), 1); (yyvsp[(2) - (3)].arb)->check();}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 145 "parser.y"
    {(yyval.arb) = new intr_robot((yyvsp[(2) - (3)].arb), 2); (yyvsp[(2) - (3)].arb)->check();}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 147 "parser.y"
    {(yyval.arb) = new intr_guardia((yyvsp[(2) - (5)].arb),(yyvsp[(4) - (5)].arb),0);}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 148 "parser.y"
    {(yyval.arb) = new intr_guardia((yyvsp[(2) - (7)].arb),(yyvsp[(4) - (7)].arb),(yyvsp[(6) - (7)].arb),1);}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 149 "parser.y"
    {(yyval.arb) = new intr_guardia((yyvsp[(2) - (5)].arb),(yyvsp[(4) - (5)].arb),2);}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 150 "parser.y"
    {(yyval.arb) = (yyvsp[(1) - (1)].arb);}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 154 "parser.y"
    {(yyval.arb) = new expr_aritmetica((yyvsp[(1) - (3)].arb),(yyvsp[(3) - (3)].arb),0);}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 155 "parser.y"
    {(yyval.arb) = new expr_aritmetica((yyvsp[(1) - (3)].arb),(yyvsp[(3) - (3)].arb),1);}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 156 "parser.y"
    {(yyval.arb) = new expr_aritmetica((yyvsp[(1) - (3)].arb),(yyvsp[(3) - (3)].arb),2);}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 157 "parser.y"
    {(yyval.arb) = new expr_aritmetica((yyvsp[(1) - (3)].arb),(yyvsp[(3) - (3)].arb),3);}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 158 "parser.y"
    {(yyval.arb) = new expr_aritmetica((yyvsp[(1) - (3)].arb),(yyvsp[(3) - (3)].arb),4);}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 159 "parser.y"
    {(yyval.arb) = new expr_aritmetica((yyvsp[(2) - (3)].arb),5);}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 160 "parser.y"
    {(yyval.arb) = new expr_aritmetica((yyvsp[(2) - (2)].arb),6);}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 161 "parser.y"
    {(yyval.arb) = new expr_booleana((yyvsp[(1) - (3)].arb),(yyvsp[(3) - (3)].arb),1);}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 162 "parser.y"
    {(yyval.arb) = new expr_booleana((yyvsp[(1) - (3)].arb),(yyvsp[(3) - (3)].arb),2);}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 163 "parser.y"
    {(yyval.arb) = new expr_booleana((yyvsp[(1) - (3)].arb),(yyvsp[(3) - (3)].arb),3);}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 164 "parser.y"
    {(yyval.arb) = new expr_booleana((yyvsp[(1) - (3)].arb),(yyvsp[(3) - (3)].arb),4);}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 165 "parser.y"
    {(yyval.arb) = new expr_booleana((yyvsp[(1) - (3)].arb),(yyvsp[(3) - (3)].arb),0);}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 166 "parser.y"
    {(yyval.arb) = new expr_booleana((yyvsp[(1) - (3)].arb),(yyvsp[(3) - (3)].arb),6);}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 167 "parser.y"
    {(yyval.arb) = new expr_booleana((yyvsp[(1) - (3)].arb),(yyvsp[(3) - (3)].arb),7);}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 168 "parser.y"
    {(yyval.arb) = new expr_booleana((yyvsp[(2) - (2)].arb),8);}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 169 "parser.y"
    {(yyval.arb) = new expr_booleana(new booleano(1),9);}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 170 "parser.y"
    {(yyval.arb) = new expr_booleana(new booleano(0),9);}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 171 "parser.y"
    {(yyval.arb) = new identificador((yyvsp[(1) - (1)].str)); (yyval.arb)->check();}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 172 "parser.y"
    {(yyval.arb) = new character((yyvsp[(1) - (1)].ch));}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 173 "parser.y"
    {(yyval.arb) = new expr_aritmetica(new numero((yyvsp[(1) - (1)].num)), 7);}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 174 "parser.y"
    {(yyval.arb) = new me;}
    break;


/* Line 1792 of yacc.c  */
#line 2142 "parser.tab.c"
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
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  yyerror_range[1] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


