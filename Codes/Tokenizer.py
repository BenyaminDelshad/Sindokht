# -*- coding: utf-8 -*-

from __future__ import unicode_literals
from hazm import *

# /home/benyamin/Desktop/Sindokht/Docs/test.txt

def process(filename):
    filename = '../Docs/test.txt'
    tmp = open(filename, 'r').read()
    s = unicode(tmp, "utf-8")
    print type(s)
    print 'text:\n'
    print s
    normalizer = Normalizer()
    normalizer.normalize(s)
    print s
    print word_tokenize(s)


process('a')