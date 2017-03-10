# -*- coding: utf-8 -*-

import random
from Tokenizer import *
from FreqsCalculator import *

SEP = u' ' # token separator symbol


def next_word(text, N, counts):
    """ Outputs the next word to add by using most recent tokens """

    token_seq = SEP.join(text.split()[-(N-1):])

    choices = counts[token_seq].items()

    # make a weighted choice for the next_token
    # [see http://stackoverflow.com/a/3679747/2023516]
    total = sum(weight for choice, weight in choices)
    r = random.uniform(0, total)
    upto = 0
    for choice, weight in choices:
        upto += weight
        if upto > r: return choice
    assert False


def gengram_sentence(corpus, tokens, N=4, sentence_count=10, start_seq=None):
    """ Generate a random sentence based on input text corpus """

    ngrams = make_ngrams(tokens, N)
    counts = ngram_freqs(ngrams)

    #if start_seq is None:
     #  sent_list = sent_tokenize(corpus)

    if start_seq is None: start_seq = random.choice(counts.keys());
    rand_text = start_seq
    sentences = 0

    while sentences < sentence_count:
        rand_text += SEP + next_word(rand_text, N, counts)
        sentences += 1 if rand_text.endswith((u'.',u'!', u'؟')) else 0

    normalizer2 = Normalizer()
    return normalizer2.normalize(rand_text)


if __name__ == "__main__":
    f = raw_input("Enter input story address:\n")
    corpus = TextNormalizer(f)
    tokens = TextTokenizer(f)

    story = gengram_sentence(corpus, tokens)
    out = open('Story.txt', 'w')
    out.write(story.encode('utf8'))
    out.close()