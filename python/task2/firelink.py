#! /usr/bin/python3
import webbrowser 

favourite={
    "QURAN":"https://quran.com/ar",
    "FACEBOOK":"https://web.facebook.com/",
    "YOUTUBE":"https://www.youtube.com/",
    "SOUND":"https://soundcloud.com/",
    "GOOGLE":"https://www.google.com/"
}

def firfox(link):
    aw=11
    webbrowser.open(favourite.get(link),new=1,autoraise=True)