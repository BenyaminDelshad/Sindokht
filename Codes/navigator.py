# -*- coding: utf-8 -*-
import pyttsx


def tell_story():
    story = open("Story.txt", "r")
    s = story.read()
    s += '.'


    #def onWord(name, location, length):
    #   print 'word', name, location, length
    #   if location > 10:
    #      engine.stop()

    engine = pyttsx.init()
    voices = engine.getProperty('voices')
    rate = engine.getProperty('rate')
    #for v in voices:
    #    print v.id
    engine.setProperty('rate', rate-100)
    engine.setProperty('voice', 'persian')

    print s
    # story text!

    sentence = ""

    for c in s:
        if (c != '.'):
            sentence += c
        else:
            engine.say(sentence.decode("utf-8", errors = "ignore"))
            sentence = ""

    engine.runAndWait()
