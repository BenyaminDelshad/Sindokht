
%{
#include <cstdio>
#include <iostream>
using namespace std;

extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;

void yyerror(const char *s);
%}

%union {
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
}

%token <n_sing> N_SING
%token <n_pl> N_PL
%token <v_pa> V_PA
%token <con> CON
%token <adj> ADJ
%token <adj_cmpr> ADJ_CMPR
%token <adj_ino> ADJ_INO
%token <adj_sup> ADJ_SUP
%token <pro> PRO
%token <p> P
%token <clitic> CLITIC
%token <v_sa> V_SA
%token <v_sp> V_SP
%token <v_sm> V_SM
%token <v_pm> V_PM
%token <v_pp> V_PP
%token <v_prs> V_PRS
%token <adv_time> ADV_TIME
%token <adv> ADV
%token <adv_loc> ADV_LOC
%token <adv_i> ADV_I
%token <adv_ino> ADV_INO
%token <adv_neg> ADV_NEG
%token <adv_comp> ADV_COMP
%token <delm> DELM
%token <det> DET
%token <num> NUM
%token <v_aux> V_AUX
%token <v_imp> V_IMP
%token <pi> pi
%token <v_sub> V_SUB
%%

S : SENT DELM;


SENT :    NSINGLESUB NSINGGOZARE  { cout << "NSINGLESUB NSINGGOZARE " << endl; }
	| NSINGGOZARE { cout << "NSINGGOZARE" << endl; }
	| NMULTIGOZARE 
	| NMULTISUB NMULTIGOZARE {cout << "NPRE "<<" NADJ NPOST NADJ" <<endl;}
;

NSINGLESUB :      PRO N_SING ADJ PRO ADJ { cout << "PRO N_SING ADJ PRO ADJ" << endl; } 
	        | PRO N_SING ADJ PRO { cout << "PRO N_SING ADJ PRO" << endl; }  
		| PRO N_SING ADJ { cout << "PRO N_SING ADJ " << endl; }
		| PRO N_SING PRO ADJ{ cout << "PRO N_SING PRO ADJ " << endl; } 
		| N_SING ADJ PRO ADJ { cout << " N_SING ADJ PRO ADJ" << endl; }
		| N_SING ADJ PRO { cout << " N_SING ADJ PRO " << endl; }
		| N_SING ADJ {cout <<"N_SING ADJ" <<endl;}
		| N_SING {cout <<"N_SING" <<endl;}
		| PRO{cout <<"PRO" <<endl;}

;

NMULTISUB :       PRO N_PL ADJ PRO ADJ { cout << " PRO N_PL ADJ PRO ADJ" << endl; }
	  | PRO N_PL ADJ PRO { cout << " PRO N_PL ADJ PRO " << endl; }
		| PRO N_PL ADJ{ cout << " PRO N_PL ADJ " << endl; }
		| N_PL ADJ PRO ADJ { cout << " N_PL ADJ PRO ADJ" << endl; }
		| N_PL ADJ PRO{ cout << " N_PL ADJ PRO " << endl; }
		| N_PL ADJ{ cout << " N_PL ADJ " << endl; }
		| N_PL { cout << " N_PL " << endl; }
		| NSINGLESUB NCON { cout << " NSINGLESUB NCON" << endl; }
		| NMULTISUB NCON { cout << " NMULTISUB NCON" << endl; }
;


NCON:     CON NMULTISUB { cout << " CON NMULTISUB" << endl; }
    | CON NSINGLESUB { cout << " CON NSINGLESUB" << endl; }
	| CON { cout << " CON " << endl; }
;


NSINGGOZARE : 	  NMAFOOL NSINGV NRABET { cout << " NMAFOOL NSINGV NRABET" << endl; }
	    | NMOSNAD  NSINGV NRABET{ cout << " MOSNAD NSINGV NRABET" << endl; }
		| NRABTI NSINGV NRABET { cout << " NRABTI NSINGV NRABET" << endl; }
		| NMAFOOL NSINGV { cout << " NMAFOOL NSINGV" << endl; }
		| NSINGV NRABET { cout << " NSINGV NRABET" << endl; }
		| NMOSNAD  NSINGV { cout << " NMOSNAD NSINGV " << endl; } 
		| NRABTI NSINGV { cout << " NRABET NSINGV " << endl; }
		| NSINGV {cout <<"NPRE "<<" NADJ NPOST NADJ" <<endl;}
		| V_PRS {cout <<"fel e esnadi " <<endl;}
;


NMULTIGOZARE :    NMAFOOL NMULTIV NRABET {cout <<"NMAFOOL NMULTIV NRABET" <<endl;}
	     | NMOSNAD  NMULTIV NRABET {cout <<"NMOSNAD NMULTIV NRABET" <<endl;}
		| NRABTI NMULTIV NRABET {cout <<"NRABTI NMULTIV NRABET" <<endl;}
		| NMOSNAD  NMULTIV {cout <<"NMOSNAD NMULTIV " <<endl;}
		| NRABTI NMULTIV  {cout <<"NRABET NMULTIV " <<endl;}
		| NMAFOOL NMULTIV  {cout <<"NMAFOOL NMULTIV " <<endl;}
		| NMULTIV {cout <<" NMULTIV " <<endl;}
		| NMULTIV NRABET {cout <<" NMULTIV NRABET" <<endl;}
;


NMOSNAD :  NSINGLESUB {cout <<" NSINGLESUB" <<endl;} 
	|  NMULTISUB {cout <<" NMULTISUB" <<endl;}
	|  ADJ {cout <<"ADJ" <<endl;}
;


NMAFOOL: NSINGLESUB CLITIC {cout <<"NSINGLESUB CLITIC" <<endl;}
       | NMULTISUB CLITIC {cout <<"NMULTISUB CLITIC" <<endl;}
;


NRABTI : P  NSINGLESUB {cout <<"P  NSINGLESUB" <<endl;} 
       | P NMULTISUB {cout <<"P  NMULTISUB" <<endl;}
;


NRABET : CON SENT {cout <<"CON SENT" <<endl;}
       ;


NSINGV :  NADV V_SA {cout <<"NADV V_SA"<<endl;}
       | NADV V_SP {cout <<"NADV V_SP" <<endl;}
	| NADV V_SM{cout <<"NADV V_SM" <<endl;}
	| V_SA {cout <<"V_SA" <<endl;}
	| V_SP{cout <<"V_SP" <<endl;}
	| V_SM {cout <<"V_SM" <<endl;}
	| V_PRS {cout <<"fel e esnadi " <<endl;}
;


NMULTIV : NADV V_PA {cout <<"NADV V_PA" <<endl;} 
	| NADV V_PP {cout <<"NADV V_PP" <<endl;}   
	| NADV V_PM {cout <<"NADV V_PM" <<endl;} 
	| V_PA {cout <<"V_PA" <<endl;}
	| V_PP {cout <<" V_PP" <<endl;} 
	| V_PM {cout <<"V_PM" <<endl;}
	| V_PRS {cout <<"fel e esnadi " <<endl;}
;


NADV :    ADJ  ADV_TIME V_PM {cout <<"ADJ ADV_TIME V_PM" <<endl;} 
     | ADJ  ADV V_PM {cout <<"ADJ ADV V_PM" <<endl;}
	| ADJ ADV_LOC V_PM {cout <<"ADJ ADV_LOC V_PM" <<endl;}
	| ADJ ADV_I V_PM {cout <<"ADJ ADV_I V_PM" <<endl;}
	| ADV_TIME {cout <<"ADV_TIME" <<endl;}
	| ADV  {cout <<"ADV " <<endl;}
	| ADV_LOC {cout <<"ADV_LOC " <<endl;}
	| ADV_I {cout <<"V_ADV_IPM" <<endl;}
;

%%

int main(int, char**) {

	FILE *myfile = fopen("flex.out", "r");

	if (!myfile) {
			cout << "I can't open file!" << endl;
			return -1;
		}

	yyin = myfile;

	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));
}

void yyerror(const char *s) {
	cout << "EEK, parse error!  Message: " << s << endl;
	// might as well halt now:
	exit(-1);
}

