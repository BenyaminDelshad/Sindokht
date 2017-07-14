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

#ifndef YY_YY_BISON2_TAB_H_INCLUDED
# define YY_YY_BISON2_TAB_H_INCLUDED
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
    N_SING = 258,
    N_PL = 259,
    V_PA = 260,
    CON = 261,
    ADJ = 262,
    ADJ_CMPR = 263,
    ADJ_INO = 264,
    ADJ_SUP = 265,
    PRO = 266,
    P = 267,
    CLITIC = 268,
    V_SA = 269,
    V_SP = 270,
    V_SM = 271,
    V_PM = 272,
    V_PP = 273,
    V_PRS = 274,
    ADV_TIME = 275,
    ADV = 276,
    ADV_LOC = 277,
    ADV_I = 278,
    ADV_INO = 279,
    ADV_NEG = 280,
    ADV_COMP = 281,
    DELM = 282,
    DET = 283,
    NUM = 284,
    V_AUX = 285,
    V_IMP = 286,
    pi = 287,
    V_SUB = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "bison2.y" /* yacc.c:1909  */

    char *n_sing;
    char *v_pa;
    char *n_pl;
    char *con;
    char *adj;
    char *adj_cmpr;
    char *adj_ino;
    char *adj_sup;
    char *num;
    char *pro;
    char *p;
    char *clitic;
    char *v_sa;
    char *v_sp;
    char *v_sm;
    char *v_pp;
    char *v_pm;
    char *adv_time;
    char *adv;
    char *adv_loc;
    char *adv_ino;
    char *adv_neg;
    char *adv_comp;
    char *v_prs;
    char *adv_i;
    char *delm;
    char *det;
    char *v_aux;
    char *v_imp;
    char *pi;
    char *v_sub;

#line 122 "bison2.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON2_TAB_H_INCLUDED  */
