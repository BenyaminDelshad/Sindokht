# -*- coding: utf-8 -*-

import random
from Tokenizer import *
from FreqsCalculator import *
from collections import *
from navigator import *

SEP = u' '
# token separator symbol

def calculate_probs(tokens):
    probs = ""
    cnt = Counter()
    for word in tokens:
        cnt[word] += 1
    for word in cnt:
        probs += word.encode("utf-8") + '#' + str(cnt[word]) +'\n'
    out = open('Prob.txt', 'w')
    out.write(probs)
    out.close()


def next_word(text, N, counts):
    """ Outputs the next word to add by using most recent tokens """
    # TODO
    # chera aghel konad kari?‌:-?
    token_seq = SEP.join(text.split()[-(N-1):])
    try:
        choices = counts[token_seq].items()
    except:
        return u"  ."
    else:
    # make a weighted choice for the next_token
    # [see http://stackoverflow.com/a/3679747/2023516]
        #print "here yopu are"
        total = sum(weight for choice, weight in choices)
        r = random.uniform(0, total)
        upto = 0
        for choice, weight in choices:
            upto += weight
            if upto > r:
                return choice
        assert False


def gengram_sentence(corpus, tokens, N=5, sentence_count=20, start_seq=None):
    """ Generate a random sentence based on input text corpus """

    ngrams = make_ngrams(tokens, N)
    counts = ngram_freqs(ngrams)
#    if start_seq is None:
#     sent_list = sent_tokenize(corpus)

    if start_seq is None:
        startngram = []
        for i in range(len(tokens) - N + 1):
            if i - 1 >= 0 and (tokens[i - 1] == '.' or tokens[i - 1] == '!' or tokens[i - 1] == u'.' or tokens[i - 1] == u'!' or tokens[i - 1] == u'؟'):
                startngram.append(SEP.join(tokens[i:i + N]))
        start_seq = random.choice(startngram)
        #start_seq = random.choice(counts.keys())
    rand_text = start_seq
    sentences = 0

    while sentences < sentence_count:
        rand_text += SEP + next_word(rand_text, N, counts)
        sentences += 1 if rand_text.endswith((u'.',u'!', u'؟')) else 0


    normalizer2 = Normalizer()
    return normalizer2.normalize(rand_text)


if __name__ == "__main__":

    stories = ["darenshon1.txt", "darenshon2.txt", "johnathan.txt", "mazrae-heyvanate-2.txt", "sinohe.txt"]
#   f = raw_input("Enter input story address:\n")
#
    corpus = TextNormalizer(r"../Docs/mazrae-heyvanate-2.txt")
    tokens = TextTokenizer(r"../Docs/mazrae-heyvanate-2.txt")
    calculate_probs(tokens)
    story = gengram_sentence(corpus, tokens)
    out = open('Story.txt', 'w')
    out.write(story.encode('utf8'))
    out.close()
    tell_story()
