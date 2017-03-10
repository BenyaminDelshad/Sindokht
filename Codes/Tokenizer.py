# -*- coding: utf-8 -*-

from __future__ import unicode_literals
from hazm import *

# ../Docs/test.txt


def process(filename):
    tmp = open(filename, 'r').read()
    s = unicode(tmp, "utf-8")
    normalizer = Normalizer()
    s = normalizer.normalize(s)
    return word_tokenize(s)

