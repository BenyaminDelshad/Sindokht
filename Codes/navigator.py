# -*- coding: utf-8 -*-
import pyttsx

story = open("Story.txt", "r")
s = story.read()

def onWord(name, location, length):
   print 'word', name, location, length
   if location > 10:
      engine.stop()

engine = pyttsx.init()
voices = engine.getProperty('voices')
rate = engine.getProperty('rate')
for v in voices:
    print v.id
engine.setProperty('rate', rate-100)
engine.setProperty('voice', 'persian')

print s

engine.say(s.decode("utf-8", errors = "ignore"))

engine.say("سلام سلام خاله بزغاله".decode("utf-8", errors = "ignore"))

engine.runAndWait()

