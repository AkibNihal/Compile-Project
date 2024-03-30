/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
