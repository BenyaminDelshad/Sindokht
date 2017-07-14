#encoding=utf8
import sys
import os
import re
from hazm import *
from openpyxl import *


dict = {'ا':'a',
        'ب':'b',
        'پ':'p',
        'ت':'t',
        'ث':'s',
        'ج':'j',
        'چ':'ch',
        'ح':'h',
        'خ':'kh',
        'د':'d',
        'ذ':'z',
        'ر':'r',
        'ز':'z',
        'ژ':'zh',
        'س':'s',
        'ش':'sh',
        'ص':'s',
        'ض':'z',
        'ط':'t',
        'ظ':'z',
        'ع':'a',
        'غ':'gh',
        'ف':'f',
        'ق':'gh',
        'ک':'k',
        'گ':'g',
        'ل':'l',
        'م':'m',
        'ن':'n',
        'و':'v',
        'ه':'h',
        'ی':'y',
        '^':'',
        'u':'u',
        '@':'a',
        'a':'a',
        'i':'i',
        'e':'e',
        'o':'o',
}

wb = load_workbook('Entries.xlsx')
ws = wb.active
def convert(s): 
    fing=""
    for row in ws.rows:
        if row[1].value == s:
             s = row[0].value
    for byte in s:
        if(byte.encode('utf-8', errors='ignore') != ' '):
            try:
                fing += dict[byte.encode('utf-8', errors='ignore')]
            except:
                fing += byte.encode('utf-8', errors='ignore')
    return fing

normalizer = Normalizer()

def find(word):
    for line in story_file.readline():
        normalizer.normalize(line.decode('utf-8', errors='ignore'))
        for wordtmp in line.split():
            if word == wordtmp:
                print word
                return 1
    return 0

persian_file = open('persian.txt', 'r')
finglish_file = open('finglishbkp.txt', 'w')
story_file = open('Story.txt', 'r')
for line in story_file.readlines():
    normalizer.normalize(line.decode('utf-8', errors='ignore'))
    for word in word_tokenize(line.decode('utf-8', errors='ignore')):
        try:
            finglish_file.write(convert(word).encode('utf-8', errors='ignore'))
            finglish_file.write(' '.encode('utf-8', errors='ignore'))
        except:
            print word
    finglish_file.write('\n')


