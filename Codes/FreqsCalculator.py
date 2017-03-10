# -*- coding: utf-8 -*-

SEP = u' ' # token separator symbol


def make_ngrams(tokens, N):
    """ Returns a list of N-long ngrams from a list of tokens """

    ngrams = []
    for i in range(len(tokens)-N+1):
        ngrams.append(tokens[i:i+N])
    return ngrams


def ngram_freqs(ngrams):
    """ Builds dict of TOKEN_SEQUENCEs and NEXT_TOKEN frequencies """

    # has form TOKEN_SEQUENCE : DICT OF { NEXT_TOKEN : COUNT }
    #      e.g        "a b c" : {"d" : 4, "e" : 2, "f" : 6 }
    counts = {}

    # Using example of ngram "a b c e" ...
    for ngram in ngrams:
        token_seq  = SEP.join(ngram[:-1])   # "a b c"
        last_token = ngram[-1]              # "e"

        # create empty {NEXT_TOKEN : COUNT} dict if token_seq not seen before
        if token_seq not in counts:
            counts[token_seq] = {}

        # initialize count for newly seen next_tokens
        if last_token not in counts[token_seq]:
            counts[token_seq][last_token] = 0

        counts[token_seq][last_token] += 1

    return counts
