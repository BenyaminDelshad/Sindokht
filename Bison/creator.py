#encoding=utf8
import sys
import os
import re
from hazm import *
from openpyxl import *


finglish_file = open('finglishbkp.txt', 'r')
finglish_rules = open('finglish.txt', 'r')
rule_file = open('Rules.txt', 'w')
ss = finglish_file.read().split()
print ss

for line in finglish_rules.readlines():
    #normalizer.normalize(line.decode('utf-8', errors='ignore'))
    for word in ss:
        if line.startswith(word):
            sss = line.split()
            #print ss 
            print sss[0] + "  {" + " yylval." + sss[len(sss)-1].lower() + " = strdup(yytext); return " +  sss[len(sss)-1] + "; }"
            # busidand	strcat(tkz_str, V_PA);
