/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "1907096.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<math.h>
	int data[60];
	void yyerror(char *s);
	int yylex(void);
	int num_declared_variables = 0;
	char* declared_variables[1000];

int check_duplicate_declaration(const char* variable) {
    for (int i = 0; i < num_declared_variables; ++i) {
        if (strcmp(variable, declared_variables[i]) == 0) {
            return 1; // Duplicate declaration
        }
    }
    return 0; // Not a duplicate
}

	

#line 93 "1907096.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_1907096_TAB_H_INCLUDED
# define YY_YY_1907096_TAB_H_INCLUDED
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
    MAIN = 258,
    START = 259,
    END = 260,
    NUM = 261,
    VAR = 262,
    IF = 263,
    SWITCH = 264,
    HEADER = 265,
    CASE = 266,
    DEFAULT = 267,
    BREAK = 268,
    FOR = 269,
    WHILE = 270,
    VALUE = 271,
    FACTORIAL = 272,
    READ = 273,
    PRINT = 274,
    ODD_EVEN = 275,
    BIGMOD = 276,
    ASSIGN = 277,
    DEFINE = 278,
    EOL = 279,
    ARRAY = 280,
    CLASS = 281,
    INT = 282,
    FLOAT = 283,
    CHAR = 284,
    IFX = 285,
    ELSE = 286,
    SIN = 287,
    COS = 288,
    TAN = 289,
    COSEC = 290,
    COT = 291,
    SEC = 292,
    LOG = 293,
    LOG10 = 294,
    LT = 295,
    GT = 296,
    LTE = 297,
    GTE = 298,
    EQ = 299,
    PLUS = 300,
    MINUS = 301,
    BitXOR = 302,
    BitOR = 303,
    BitAND = 304,
    MUL = 305,
    DIV = 306,
    MOD = 307,
    POW = 308,
    DEC = 309,
    INC = 310,
    BitNOT = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_1907096_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   706

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

#define YYUNDEFTOK  2
#define YYMAXUTOK   311


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      58,    60,     2,     2,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    57,     2,
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    53,    54,    57,    59,    62,    63,    65,
      67,    73,    81,    86,    97,   107,   112,   118,   124,   130,
     136,   144,   152,   154,   158,   163,   164,   166,   167,   169,
     171,   175,   176,   177,   182,   183,   195,   197,   199,   201,
     203,   205,   207,   209,   211,   213,   222,   226,   230,   239,
     240,   249,   258,   267,   276,   287,   288,   290,   292,   294,
     296,   298,   300,   301,   302
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "START", "END", "NUM", "VAR",
  "IF", "SWITCH", "HEADER", "CASE", "DEFAULT", "BREAK", "FOR", "WHILE",
  "VALUE", "FACTORIAL", "READ", "PRINT", "ODD_EVEN", "BIGMOD", "ASSIGN",
  "DEFINE", "EOL", "ARRAY", "CLASS", "INT", "FLOAT", "CHAR", "IFX", "ELSE",
  "SIN", "COS", "TAN", "COSEC", "COT", "SEC", "LOG", "LOG10", "LT", "GT",
  "LTE", "GTE", "EQ", "PLUS", "MINUS", "BitXOR", "BitOR", "BitAND", "MUL",
  "DIV", "MOD", "POW", "DEC", "INC", "BitNOT", "':'", "'('", "','", "')'",
  "$accept", "program", "headers", "cstatement", "statement", "B", "C",
  "D", "declaration", "TYPE", "ID1", "expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,    58,    40,    44,
      41
};
# endif

#define YYPACT_NINF (-80)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,   -80,    26,    10,   -80,     9,   -80,    55,   -80,   113,
     -80,   -80,    45,    11,    19,    22,    23,    24,    25,    27,
      28,    29,    31,    61,   -80,   -11,    77,   -80,   -80,   -80,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
     -80,    74,    92,   -13,    58,    58,    96,    97,    99,    58,
     100,   101,   102,   104,    58,    49,   105,     6,   -80,   651,
     651,   651,   651,   651,   651,   651,   651,   -80,   527,   -80,
     -80,    52,   -80,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,   -80,   -80,   447,
     548,    53,    56,    64,   569,    57,    65,    75,   108,   611,
     -11,    66,   -80,   155,   -80,   163,   427,   427,   427,   427,
     427,   106,   106,    21,    21,    21,    21,    21,     7,   -33,
     -80,   176,   184,   183,   192,   175,   177,   178,   179,   180,
      58,   140,   199,   158,   202,   -80,   -80,   196,   154,   165,
     -80,   -80,   -80,   -80,   -80,   631,   211,   173,   -80,   -80,
     203,   228,   238,    13,   239,   240,    58,   -80,   222,   248,
     216,   191,   -80,   193,   196,   -80,   189,   -80,   590,   293,
     -80,   -80,   247,    58,    58,   -80,   254,   338,   -80,   -80,
     -80,   479,   511,   -80,   -80,   383,   257,   265,   428,   -80,
     236,   255,   -80,   -80,   -80
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     4,     0,     0,     1,     0,     3,     0,     5,     0,
       2,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    56,
      57,    58,    59,    61,    60,    63,    62,    41,     0,     8,
      35,    30,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     0,    55,     0,    50,    51,    52,    53,
      54,    42,    43,    38,    39,    40,    44,    45,    48,    49,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     5,     0,     0,     0,
      22,    13,    23,    24,    14,     0,     0,     0,    16,     5,
       0,     0,     0,    25,     0,     0,     0,     5,     0,     0,
      20,     0,    15,     0,     0,    26,     0,     5,     0,     0,
      19,    17,     0,     0,     0,    27,     0,     0,    64,    18,
       5,     0,     0,     5,    12,     0,     0,     0,     0,    21,
       0,     0,    11,    28,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -80,   -80,   -80,   -79,   -80,   -80,    88,   -80,   188,   264,
     -80,   -30
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     9,    40,   152,   153,   165,    41,    42,
      71,    43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     102,    72,     1,     5,    89,    90,    27,    28,    29,    94,
       6,    87,    88,   133,    99,   163,     4,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   150,   164,     8,
      86,    87,    88,   103,    11,    58,     7,    44,    55,    45,
     159,    83,    84,    85,    86,    87,    88,    46,   169,    22,
      47,    48,    49,    50,    57,    51,    52,    53,   177,    54,
      30,    31,    32,    33,    34,    35,    36,    37,    69,    70,
     145,   185,    91,    92,   188,    93,    95,   100,    96,    97,
      98,   105,   101,   122,    38,   123,    39,   126,    10,    11,
      12,    13,    14,   124,   132,   127,   168,    15,    16,    17,
      18,    19,    20,    21,    22,   128,    23,    24,    25,    26,
      27,    28,    29,   181,   182,    30,    31,    32,    33,    34,
      35,    36,    37,    80,    81,    82,    83,    84,    85,    86,
      87,    88,   134,   148,    11,    12,    13,    14,   129,    38,
     135,    39,    15,    16,    17,    18,    19,    20,    21,    22,
     136,    23,    24,    25,    26,    27,    28,    29,   137,   138,
      30,    31,    32,    33,    34,    35,    36,    37,   139,   140,
     146,   141,   142,   143,   144,   147,   149,   151,   160,    11,
      12,    13,    14,   154,    38,   157,    39,    15,    16,    17,
      18,    19,    20,    21,    22,   155,    23,    24,    25,    26,
      27,    28,    29,   158,   161,    30,    31,    32,    33,    34,
      35,    36,    37,   162,   167,   166,   170,   172,   173,   176,
     174,   180,   175,   171,    11,    12,    13,    14,   183,    38,
     193,    39,    15,    16,    17,    18,    19,    20,    21,    22,
     190,    23,    24,    25,    26,    27,    28,    29,   191,   194,
      30,    31,    32,    33,    34,    35,    36,    37,   131,    56,
       0,     0,     0,     0,     0,     0,     0,     0,   179,    11,
      12,    13,    14,     0,    38,     0,    39,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    23,    24,    25,    26,
      27,    28,    29,     0,     0,    30,    31,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   184,    11,    12,    13,    14,     0,    38,
       0,    39,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    23,    24,    25,    26,    27,    28,    29,     0,     0,
      30,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,    11,
      12,    13,    14,     0,    38,     0,    39,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    23,    24,    25,    26,
      27,    28,    29,     0,     0,    30,    31,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,    11,    12,    13,    14,     0,    38,
       0,    39,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    23,    24,    25,    26,    27,    28,    29,     0,     0,
      30,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,   120,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     0,    38,     0,    39,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,   186,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,   187,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     0,     0,     0,     0,   104,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,     0,     0,     0,     0,   121,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,     0,     0,     0,     0,   125,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,     0,     0,     0,
     178,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
     130,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
     156,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88
};

static const yytype_int16 yycheck[] =
{
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
       4,    24,    10,     3,    44,    45,    27,    28,    29,    49,
      10,    54,    55,   102,    54,    12,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,   136,    45,     4,
      53,    54,    55,    57,     6,     7,    57,    22,     7,    58,
     149,    50,    51,    52,    53,    54,    55,    58,   157,    21,
      58,    58,    58,    58,     7,    58,    58,    58,   167,    58,
      32,    33,    34,    35,    36,    37,    38,    39,    24,     7,
     130,   180,     6,     6,   183,     6,     6,    58,     7,     7,
       6,    59,     7,    60,    56,    59,    58,    60,     5,     6,
       7,     8,     9,    59,    58,    60,   156,    14,    15,    16,
      17,    18,    19,    20,    21,    60,    23,    24,    25,    26,
      27,    28,    29,   173,   174,    32,    33,    34,    35,    36,
      37,    38,    39,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     7,     5,     6,     7,     8,     9,    60,    56,
       7,    58,    14,    15,    16,    17,    18,    19,    20,    21,
       4,    23,    24,    25,    26,    27,    28,    29,     4,     6,
      32,    33,    34,    35,    36,    37,    38,    39,     6,    24,
      60,    24,    24,    24,    24,     6,     4,    11,     5,     6,
       7,     8,     9,    59,    56,     4,    58,    14,    15,    16,
      17,    18,    19,    20,    21,    60,    23,    24,    25,    26,
      27,    28,    29,    60,     6,    32,    33,    34,    35,    36,
      37,    38,    39,     5,     4,     6,    24,    31,    57,    60,
      57,     4,   164,     5,     6,     7,     8,     9,     4,    56,
      24,    58,    14,    15,    16,    17,    18,    19,    20,    21,
      13,    23,    24,    25,    26,    27,    28,    29,    13,    24,
      32,    33,    34,    35,    36,    37,    38,    39,   100,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,     8,     9,    -1,    56,    -1,    58,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,     8,     9,    -1,    56,
      -1,    58,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,     8,     9,    -1,    56,    -1,    58,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,     8,     9,    -1,    56,
      -1,    58,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    24,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    56,    -1,    58,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    60,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    60,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    60,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      60,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      59,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      59,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    62,    63,     0,     3,    10,    57,     4,    64,
       5,     6,     7,     8,     9,    14,    15,    16,    17,    18,
      19,    20,    21,    23,    24,    25,    26,    27,    28,    29,
      32,    33,    34,    35,    36,    37,    38,    39,    56,    58,
      65,    69,    70,    72,    22,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,     7,    70,     7,     7,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    24,
       7,    71,    24,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    72,
      72,     6,     6,     6,    72,     6,     7,     7,     6,    72,
      58,     7,     4,    57,    60,    59,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      24,    60,    60,    59,    59,    60,    60,    60,    60,    60,
      59,    69,    58,    64,     7,     7,     4,     4,     6,     6,
      24,    24,    24,    24,    24,    72,    60,     6,     5,     4,
      64,    11,    66,    67,    59,    60,    59,     4,    60,    64,
       5,     6,     5,    12,    45,    68,     6,     4,    72,    64,
      24,     5,    31,    57,    57,    67,    60,    64,    60,     5,
       4,    72,    72,     4,     5,    64,    24,    24,    64,     5,
      13,    13,     5,    24,    24
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    66,    66,    67,    67,    68,
      69,    70,    70,    70,    71,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     2,     1,     0,     2,     1,     2,     2,
       4,    11,     9,     5,     5,     7,     5,     7,     8,     7,
       7,    11,     5,     5,     5,     1,     2,     3,     7,     6,
       2,     1,     1,     1,     3,     1,     1,     1,     3,     3,
       3,     2,     3,     3,     3,     3,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     8
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 51 "1907096.y"
                                               {printf("\nEnd of Main function\n");}
#line 1595 "1907096.tab.c"
    break;

  case 3:
#line 53 "1907096.y"
                        {  printf("Header Library Declared Here\n");  }
#line 1601 "1907096.tab.c"
    break;

  case 4:
#line 54 "1907096.y"
                 {  printf("Header Library Declared Here\n");  }
#line 1607 "1907096.tab.c"
    break;

  case 10:
#line 67 "1907096.y"
                                        { 
								data[yyvsp[-3]] = yyvsp[-1]; 
								printf("\nValue of the variable: %d\n",yyvsp[-1]);
								yyval=yyvsp[-1];
								}
#line 1617 "1907096.tab.c"
    break;

  case 11:
#line 73 "1907096.y"
                                                               {
	                                int i;
	                                printf("\nFOR loop execution\n");
	                                for(i=yyvsp[-8] ; i<yyvsp[-6] ; i=i+yyvsp[-4] )
					{printf("Value of the  i: %d expression value : %d\n", i,yyvsp[-1]);}
					}
#line 1628 "1907096.tab.c"
    break;

  case 12:
#line 81 "1907096.y"
                                                          {
	                                int i;
	                                printf("\nWHILE loop execution\n");
	                                for(i=yyvsp[-6] ; i<yyvsp[-4] ; i++) {printf("Value of the loop: %d expression value: %d\n", i,yyvsp[-1]);}
									}
#line 1638 "1907096.tab.c"
    break;

  case 13:
#line 86 "1907096.y"
                                    {
		printf("\nFACTORIAL declaration\n");
		int i;
		int f=1;
		for(i=1;i<=yyvsp[-2];i++)
		{
			f=f*i;
		}
		printf("FACTORIAL of %d  : %d\n",yyvsp[-2],f);
		}
#line 1653 "1907096.tab.c"
    break;

  case 14:
#line 97 "1907096.y"
                                   {
		printf("\nDetermining odd or even number\n");

		if(yyvsp[-2] %2 ==0){
			printf("Number : %d  -> Even\n",yyvsp[-2]);
		}
		else{
			printf("Number : %d  -> Odd\n",yyvsp[-2]);
		}
		}
#line 1668 "1907096.tab.c"
    break;

  case 15:
#line 107 "1907096.y"
                                          {
			printf("\nSWITCH CASE declaration\n");
			printf("Finally choose case number :-> %d\n",yyvsp[-4]);
	}
#line 1677 "1907096.tab.c"
    break;

  case 16:
#line 112 "1907096.y"
                                         {

		printf("\nClass declaration\n");
		//printf("Expression : %d\n",$4);
		}
#line 1687 "1907096.tab.c"
    break;

  case 17:
#line 118 "1907096.y"
                                                 {

		printf("\nInheritance occur \n");
		//printf("Expression value : %d",$6);
		}
#line 1697 "1907096.tab.c"
    break;

  case 18:
#line 124 "1907096.y"
                                                              {
		printf("\nFunction declaration\n");
		//printf("Function Parameter : %d\n",$4);
		//printf("Function internal block statement : %d\n",$7);
		}
#line 1707 "1907096.tab.c"
    break;

  case 19:
#line 130 "1907096.y"
                                         {
		printf("\nArray declaration\n");

		printf("Size of the array is : %d\n",yyvsp[-2]);
		}
#line 1717 "1907096.tab.c"
    break;

  case 20:
#line 136 "1907096.y"
                                                               {
    	if(yyvsp[-4]){
        	printf("\nValue of expression in IF: %d\n", yyvsp[-1]);
    	}
    	else{
        	printf("\nCondition value zero in IF block\n");
    	}
	}
#line 1730 "1907096.tab.c"
    break;

  case 21:
#line 144 "1907096.y"
                                                                               {
    	if(yyvsp[-8]){
        	printf("\nValue of expression in IF: %d\n", yyvsp[-5]);
    	}
    	else{
        	printf("\nValue of expression in ELSE: %d\n", yyvsp[0]);
    	}
	}
#line 1743 "1907096.tab.c"
    break;

  case 22:
#line 152 "1907096.y"
                                       {printf("\nPrint expression %d\n",yyvsp[-2]);}
#line 1749 "1907096.tab.c"
    break;

  case 23:
#line 154 "1907096.y"
                               {
    	printf("Enter value for %c: ", yyvsp[-2] + 'a');
    	scanf("%d", &data[yyvsp[-2]]);
	}
#line 1758 "1907096.tab.c"
    break;

  case 24:
#line 158 "1907096.y"
                                {
        printf("Displayed value of %c: %d\n", yyvsp[-2] + 'a', data[yyvsp[-2]]);
    }
#line 1766 "1907096.tab.c"
    break;

  case 28:
#line 167 "1907096.y"
                                                {}
#line 1772 "1907096.tab.c"
    break;

  case 29:
#line 169 "1907096.y"
                                           {}
#line 1778 "1907096.tab.c"
    break;

  case 31:
#line 175 "1907096.y"
                  {printf("\nInterger declaration\n");}
#line 1784 "1907096.tab.c"
    break;

  case 32:
#line 176 "1907096.y"
              {printf("\nFloat declaration\n");}
#line 1790 "1907096.tab.c"
    break;

  case 33:
#line 177 "1907096.y"
              {printf("\nCharacter declaration\n");}
#line 1796 "1907096.tab.c"
    break;

  case 35:
#line 183 "1907096.y"
          {if (num_declared_variables + 1 < 1000) {
            if (check_duplicate_declaration(yyvsp[0])) {
                printf("Error: Duplicate variable declaration");
            } else {
                // Add the variable to the symbol table
                //declared_variables[++num_declared_variables] = strdup($1);
            }
        } else {
            printf("Error: Too many declared variables, array bounds exceeded");
        }}
#line 1811 "1907096.tab.c"
    break;

  case 36:
#line 195 "1907096.y"
                                                        { printf("\nNumber :  %d\n",yyvsp[0] ); yyval = yyvsp[0];  }
#line 1817 "1907096.tab.c"
    break;

  case 37:
#line 197 "1907096.y"
                                                                {  }
#line 1823 "1907096.tab.c"
    break;

  case 38:
#line 199 "1907096.y"
                                        {printf("\nBitwise XOR of %d and %d is %d\n ",yyvsp[-2],yyvsp[0],yyvsp[-2]^yyvsp[0]); yyval = yyvsp[-2] ^ yyvsp[0]; }
#line 1829 "1907096.tab.c"
    break;

  case 39:
#line 201 "1907096.y"
                                                {printf("\nBitwise OR of %d and %d is %d\n ",yyvsp[-2],yyvsp[0],yyvsp[-2]|yyvsp[0]); yyval = yyvsp[-2] | yyvsp[0]; }
#line 1835 "1907096.tab.c"
    break;

  case 40:
#line 203 "1907096.y"
                                        {printf("\nBitwise AND of %d and %d is %d\n ",yyvsp[-2],yyvsp[0],yyvsp[-2]&yyvsp[0]); yyval = yyvsp[-2] & yyvsp[0]; }
#line 1841 "1907096.tab.c"
    break;

  case 41:
#line 205 "1907096.y"
                                                        {printf("\nBitwise NOT of %d is %d\n ",yyvsp[0],~yyvsp[0]); yyval = ~yyvsp[0]; }
#line 1847 "1907096.tab.c"
    break;

  case 42:
#line 207 "1907096.y"
                                        {printf("\nAddition of %d and %d is %d \n",yyvsp[-2],yyvsp[0],yyvsp[-2]+yyvsp[0] );  yyval = yyvsp[-2] + yyvsp[0];}
#line 1853 "1907096.tab.c"
    break;

  case 43:
#line 209 "1907096.y"
                                        {printf("\nSubtraction of %d and %d is %d \n ",yyvsp[-2],yyvsp[0],yyvsp[-2]-yyvsp[0]); yyval = yyvsp[-2] - yyvsp[0]; }
#line 1859 "1907096.tab.c"
    break;

  case 44:
#line 211 "1907096.y"
                                        {printf("\nMultiplication of %d and %d is %d\n ",yyvsp[-2],yyvsp[0],yyvsp[-2]*yyvsp[0]); yyval = yyvsp[-2] * yyvsp[0]; }
#line 1865 "1907096.tab.c"
    break;

  case 45:
#line 213 "1907096.y"
                                        { if(yyvsp[0]){
										printf("\nDivision of %d and %d is %d\n",yyvsp[-2],yyvsp[0],yyvsp[-2]/yyvsp[0]);
										yyval = yyvsp[-2] / yyvsp[0];
				  					}
				  					else{
										yyval = 0;
										printf("\nDivision by zero\n");
				  					} 	
				    			}
#line 1879 "1907096.tab.c"
    break;

  case 46:
#line 222 "1907096.y"
                                        {
								printf("\nIncrement of %d is %d\n",yyvsp[-1],yyvsp[-1]+1);
								yyval = yyvsp[-1] + 1;
							}
#line 1888 "1907096.tab.c"
    break;

  case 47:
#line 226 "1907096.y"
                                        {
								printf("\nDecrement of %d is %d\n",yyvsp[-1],yyvsp[-1]-1);
								yyval = yyvsp[-1] - 1;
							}
#line 1897 "1907096.tab.c"
    break;

  case 48:
#line 230 "1907096.y"
                                        { if(yyvsp[0]){
				     					printf("\nMod of %d and %d is %d\n",yyvsp[-2],yyvsp[0],yyvsp[-2] % yyvsp[0]);
				     					yyval = yyvsp[-2] % yyvsp[0];
										}
				  					else{
										yyval = 0;
										printf("\nMOD by zero\n");
				  					} 	
				    			}
#line 1911 "1907096.tab.c"
    break;

  case 49:
#line 239 "1907096.y"
                                        {printf("\nPower of %d and %d is %d\n",yyvsp[-2],yyvsp[0],pow(yyvsp[-2] , yyvsp[0]));  yyval = pow(yyvsp[-2] , yyvsp[0]);}
#line 1917 "1907096.tab.c"
    break;

  case 50:
#line 240 "1907096.y"
                                        { if(yyvsp[-2]<yyvsp[0]){
										printf("\n%d is less than %d\n",yyvsp[-2],yyvsp[0]);
										}
								  else{
										printf("\n%d is not less than %d\n",yyvsp[-2],yyvsp[0]);
								  }
								yyval = yyvsp[-2] < yyvsp[0]; 
								}
#line 1930 "1907096.tab.c"
    break;

  case 51:
#line 249 "1907096.y"
                                        { if(yyvsp[-2]>yyvsp[0]){
										printf("\n%d is greater than %d\n",yyvsp[-2],yyvsp[0]);
										}
								  else{
										printf("\n%d is not greater than %d\n",yyvsp[-2],yyvsp[0]);
								  }
								yyval = yyvsp[-2] > yyvsp[0]; 
								}
#line 1943 "1907096.tab.c"
    break;

  case 52:
#line 258 "1907096.y"
                                        { if(yyvsp[-2]<=yyvsp[0]){
										printf("\n%d is less than or equal to %d\n",yyvsp[-2],yyvsp[0]);
										}
								  else{
										printf("\n%d is not less than or equal to %d\n",yyvsp[-2],yyvsp[0]);
								  }
								yyval = yyvsp[-2] <= yyvsp[0]; 
								}
#line 1956 "1907096.tab.c"
    break;

  case 53:
#line 267 "1907096.y"
                                        { if(yyvsp[-2]>=yyvsp[0]){
										printf("\n%d is greater than or equal to %d\n",yyvsp[-2],yyvsp[0]);
										}
								  else{
										printf("\n%d is not greater than or equal to %d\n",yyvsp[-2],yyvsp[0]);
								  }
								yyval = yyvsp[-2] >= yyvsp[0]; 
								}
#line 1969 "1907096.tab.c"
    break;

  case 54:
#line 276 "1907096.y"
                                        { if(yyvsp[-2]==yyvsp[0]){
										printf("\n%d is equal to %d\n",yyvsp[-2],yyvsp[0]);
										}
								  else{
										printf("\n%d is not equal to %d\n",yyvsp[-2],yyvsp[0]);
								  }
								yyval = yyvsp[-2] == yyvsp[0]; 
								}
#line 1982 "1907096.tab.c"
    break;

  case 55:
#line 287 "1907096.y"
                                        { yyval = yyvsp[-1];	}
#line 1988 "1907096.tab.c"
    break;

  case 56:
#line 288 "1907096.y"
                                                {printf("\nValue of Sin(%d) is %lf\n",yyvsp[0],sin(yyvsp[0]*3.1416/180)); yyval=sin(yyvsp[0]*3.1416/180);}
#line 1994 "1907096.tab.c"
    break;

  case 57:
#line 290 "1907096.y"
                                        {printf("\nValue of Cos(%d) is %lf\n",yyvsp[0],cos(yyvsp[0]*3.1416/180)); yyval=cos(yyvsp[0]*3.1416/180);}
#line 2000 "1907096.tab.c"
    break;

  case 58:
#line 292 "1907096.y"
                                        {printf("\nValue of Tan(%d) is %lf\n",yyvsp[0],tan(yyvsp[0]*3.1416/180)); yyval=tan(yyvsp[0]*3.1416/180);}
#line 2006 "1907096.tab.c"
    break;

  case 59:
#line 294 "1907096.y"
                                                {printf("\nValue of Cosec(%d) is %lf\n",yyvsp[0],1/sin(yyvsp[0]*3.1416/180)); yyval=1/sin(yyvsp[0]*3.1416/180);}
#line 2012 "1907096.tab.c"
    break;

  case 60:
#line 296 "1907096.y"
                                        {printf("\nValue of Sec(%d) is %lf\n",yyvsp[0],1/cos(yyvsp[0]*3.1416/180)); yyval=1/cos(yyvsp[0]*3.1416/180);}
#line 2018 "1907096.tab.c"
    break;

  case 61:
#line 298 "1907096.y"
                                        {printf("\nValue of Cot(%d) is %lf\n",yyvsp[0],1/tan(yyvsp[0]*3.1416/180)); yyval=1/tan(yyvsp[0]*3.1416/180);}
#line 2024 "1907096.tab.c"
    break;

  case 62:
#line 300 "1907096.y"
                                        {printf("\nValue of Log10(%d) is %lf\n",yyvsp[0],(log(yyvsp[0]*1.0)/log(10.0))); yyval=(log(yyvsp[0]*1.0)/log(10.0));}
#line 2030 "1907096.tab.c"
    break;

  case 63:
#line 301 "1907096.y"
                                                {printf("\nValue of Log(%d) is %lf\n",yyvsp[0],(log(yyvsp[0]))); yyval=(log(yyvsp[0]));}
#line 2036 "1907096.tab.c"
    break;

  case 64:
#line 302 "1907096.y"
                                                                  {
			long long res = 1;
			long long x = yyvsp[-5];
			long long p= yyvsp[-3];
			long long m=yyvsp[-1];
			while ( p )
			{
				if (p%2== 1) //p is odd
				{
					res = ( res * x ) % m;
				}
				x = ( x * x ) % m;
				p = p / 2;
			}
			printf("\nBigmod of %d ^ %d MOD %d is = %lld\n",yyvsp[-5],yyvsp[-3],yyvsp[-1],res);
			yyval=res;
		}
#line 2058 "1907096.tab.c"
    break;


#line 2062 "1907096.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 320 "1907096.y"



void yyerror(char *s){
	printf( "%s\n", s);
}

