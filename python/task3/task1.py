import pyautogui
from time import sleep
from gtts import gTTS
import vlc



pyautogui.hotkey('win')
sleep(1)
pyautogui.typewrite('terminator')
sleep(1)
pyautogui.press('Enter')
sleep(1)
pyautogui.typewrite('code &')
sleep(1)
pyautogui.press('Enter')
sleep(1)

ext=['clangd','c++ testmate', 'c++ helper', 'cmake', 'cmake tools']

def install_ext(ext):
    for i in ext:
        pyautogui.hotkey('ctrl','shift','x')
        sleep(1)
        pyautogui.keyDown("Backspace")
        sleep(3)
        pyautogui.typewrite(i)
        sleep(3)
        pyautogui.click(391,250)
        sleep(5)

install_ext(ext)


myobj = gTTS(
    text = 'لقد انجزت المهمة بنجاح يا معتصم ' 
    , lang= 'ar', slow = False )


#saving the converted audio in a mp3 file named 
myobj.save("welcomeback.mp4")
p = vlc.MediaPlayer("./welcomeback.mp4")
p.play()
while True:
    pass
    sleep(5)
    exit()
