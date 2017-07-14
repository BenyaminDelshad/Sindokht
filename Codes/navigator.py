# -*- coding: utf-8 -*-
import json
import requests
from subprocess import call


#story = "سلام".decode("utf-8", errors = "ignore")

def read_story(story):
    #story = story1.decode("utf-8", errors = "ignore")

    data = {
        "Text": story,
        "Speaker":"Female1",
        "PitchLevel":"0",
        "PunctuationLevel":"0",
        "SpeechSpeedLevel":"0",
        "ToneLevel":"0",
        "GainLevel":"0",
        "BeginningSilence":"5",
        "EndingSilence":"0",
        "Format":"mp3/32/m",
        "APIKey":"CSHTMX03HCT7JJ7"
    }

    #req = urllib2.Request('http://api.farsireader.com/ArianaCloudService/ReadText')
    headers = {'Content-Type': 'application/json'}

    #response = urllib2.urlopen(req, json.dumps(data), timeout=200)
    response = requests.post('http://api.farsireader.com/ArianaCloudService/ReadText', data=json.dumps(data), headers=headers, timeout=120)

    with open('story.wav', 'wb') as output:
        output.write(bytearray(response.content))

    call(["mpg123", "story.wav"])