# -*- coding: utf-8 -*-

from __future__ import unicode_literals
from hazm import *

# ../Docs/test.txt


def TextNormalizer(filename):
    tmp = open(filename, 'r').read()
    s = unicode(tmp, "utf-8")
    normalizer = Normalizer()
    s = normalizer.normalize(s)
    return s


def TextTokenizer(filename):
    tmp = open(filename, 'r').read()
    s = unicode(tmp, "utf-8")
    normalizer = Normalizer()
    s = normalizer.normalize(s)
    return word_tokenize(s)

