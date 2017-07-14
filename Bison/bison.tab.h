/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
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
    SNAZZLE = 258,
    TYPE = 259,
    END = 260,
    ADV_I = 261,
    V_PRS = 262,
    ADV_TIME = 263,
    N_SING = 264,
    ADJ_INO = 265,
    PRO = 266,
    ADJ_CMPR = 267,
    N_PL = 268,
    DELM = 269,
    PREV = 270,
    V_PA = 271,
    V_AUX = 272,
    ADV_LOC = 273,
    V_IMP = 274,
    ADJ = 275,
    ADJ_SUP = 276,
    ADJ_VOC = 277,
    unknown = 278,
    ADV_NEG = 279,
    DET = 280,
    SYM = 281,
    ADV = 282,
    V_SUB = 283,
    CON = 284,
    P = 285,
    ADV_COMP = 286,
    INT = 287,
    V_PP = 288,
    NUM = 289,
    CLITIC = 290,
    N_VOC = 291,
    FW = 292
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "bison.y" /* yacc.c:1909  */

	int ival;
	float fval;
	char *sval;

#line 98 "bison.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */
