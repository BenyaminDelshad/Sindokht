%{
#include <cstdio>
#include <iostream>
using namespace std;

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
void yyerror(const char *s);
%}

// Bison fundamentally works by asking flex to get the next token, which it
// returns as an object of type "yystype".  But tokens could be of any
// arbitrary data type!  So we deal with that in Bison by defining a C union
// holding each of the types of tokens that Flex could return, and have Bison
// use that union instead of "int" for the definition of "yystype":
%union {
	int ival;
	float fval;
	char *sval;
}

// define the constant-string tokens:
%token SNAZZLE TYPE
%token END

// define the "terminal symbol" token types I'm going to use (in CAPS
// by convention), and associate each with a field of the union:
%token <sval> ADV_I
%token <sval> V_PRS
%token <sval> ADV_TIME
%token <sval> N_SING
%token <sval> ADJ_INO
%token <sval> PRO
%token <sval> ADJ_CMPR
%token <sval> N_PL
%token <sval> DELM
%token <sval> PREV
%token <sval> V_PA
%token <sval> V_AUX
%token <sval> ADV_LOC
%token <sval> V_IMP
%token <sval> ADJ
%token <sval> ADJ_SUP
%token <sval> ADJ_VOC
%token <sval> unknown
%token <sval> ADV_NEG
%token <sval> DET
%token <sval> SYM
%token <sval> ADV
%token <sval> V_SUB
%token <sval> CON
%token <sval> P
%token <sval> ADV_COMP
%token <sval> INT
%token <sval> V_PP
%token <sval> NUM
%token <sval> CLITIC
%token <sval> N_VOC
%token <sval> FW

%%

// the first rule defined is the highest-level rule, which in our
// case is just the concept of a whole "snazzle file":
start: jomle DELM {cout << "done.\n";};
     jomle:
		fael gheid fel {cout << "jomle -> fael gheid fel\n";}
	|	CON jomle {cout << "jomle -> CON jomle, CON = " << $1 << endl;}
	|	nahad mosnad fel {cout << "jomle -> nahad mosnad fel\n";}
	|	monada DELM jomle {cout << "jomle -> monada DELM jomle, DELM = " << $2 << endl;}
	|	DELM	
	|	N_SING
	;
esm:
   		N_SING {cout<<"esm -> N_SING, N_SING = "<< $1 << endl;}
	|	N_PL {cout <<"esm -> N_PL, N_PL = " << $1 << endl;}
	;
fel:
   		V_AUX fel {cout << "fel -> V_AUX fel, V_AUX = " << $1 << endl;}
	|	V_PA {cout << "fel -> V_PA , V_PA = " << $1 << endl;}
	|	V_PP {cout << "fel -> V_PP , V_PP = " << $1 << endl;}
	|	V_PRS {cout << "fel -> V_PRS , V_PRS = " << $1 << endl;}
	|	V_SUB {cout << "fel -> V_SUB , V_SUB = " << $1 << endl;}
	|	V_IMP {cout << "fel -> V_IMP , V_IMP = " << $1 << endl;}
	;
monada:
      		N_VOC {cout << "monada -> N_VOC, N_VOC = " << $1 <<endl;}
	;
nahad:
     		esm S {cout << "nahad -> esm S\n";}
	| 	PRO S {cout << "nahad -> PRO S\n";}
	;
S:
 		vasf S {cout << "S -> vasf S\n";}
	| 	'' {cout << "S -> e\n";}
	;
mosnad:
      		sefatpishvandi sefat {cout << "mosnad -> sefatpishvandi sefat\n";}
	|	sefat {cout << "mosnad -> sefat\n";}
	|	esm {cout << "mosnad -> esm\n";}
	|	esm sefat {cout << "mosnad -> esm sefat\n";}
	|	sefatpishvandi esm sefat {cout << "mosnad -> sefatpishvandi esm sefat\n";}
	;
gheid:
     		PRO esm gheid {cout << "gheid -> PROP esm gheid, PROP = " << $1 << endl;}
	|	PRO {cout << "gheid -> PROP, PROP = " << $1 << endl;}
	|	ADV {cout << "gheid -> ADV, ADV = " << $1 << endl;}
	|	ADV_TIME {cout << "gheid -> ADV_TIME, ADV_TIME = " << $1 << endl;}
	;
sefat:
     		ADJ sefat {cout << "sefat -> ADJ sefat, ADJ = " << $1 << endl;}
	|	ADJ {cout << "sefat -> ADJ, ADJ = " << $1 << endl;}
	|	ADJ_CMPR {cout << "sefat -> ADJ_CMPR, ADJ_CMPR = " << $1 << endl;}
	|	ADJ_CMPR CON sefat {cout << "sefat -> ADJ_CMPR CON sefat, ADJ_CMPR = " << $1 << " CON = " << $2 << endl;}
	|	ADJ_CMPR sefat {cout << "sefat -> ADJ_CMPR sefat, ADJ_CMPR = " << $1 << endl;}
	|	gheid sefat {cout << "sefat -> gheid sefat\n";}
	;
sefatpishvandi:
	      		NUM sefatpishvandi {cout << "sefatpishvandi -> NUM sefatpishvandi, NUM = " << $1 << endl;}
	|	ADJ_SUP sefatpishvandi {cout << "sefatpishvandi -> ADJ_SUP sefat_pishvandi, ADJ_SUP = " << $1 << endl;}
	|	NUM {cout << "sefatpishvandi -> NUM, NUM = " << $1 << endl;}
	|	ADJ_SUP {cout << "sefatpishvandi -> ADJ_SUP, ADJ_SUP = " << $1 << endl;}
	;
fael:
    		esm S {cout << "fael -> esm S\n";}
	|	PRO S {cout << "fael -> PRO S, PRO = " << $1 << endl;}
	;
maful:
     		esm S {cout << "maful -> esm S\n";}
	|	PRO S {cout << "maful -> PRO S, PRO = " << $1 << endl;}
	;
mozaf-elayh:
		esm S {cout << "mozaf-elayh -> esm S\n";}
	|	PRO S {cout << "mozaf-elayh -> PRO S, PRO = " << $1 << endl;}
	;
vasf:
    		sefat {cout << "vasf -> sefat\n";}
	|	mozaf-elayh {cout << "vasf -> mozaf-elayh\n";}
	;
%%

int main(int, char**) {
	// open a file handle to a particular file:
	FILE *myfile = fopen("flex.out", "r");
	// make sure it is valid:
	if (!myfile) {
		cout << "I can't file!" << endl;
		return -1;
	}
	// set flex to read from it instead of defaulting to STDIN:
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
