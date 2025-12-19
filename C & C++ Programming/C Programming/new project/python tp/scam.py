import pyautogui
import time

time.sleep(4)
count = 0
while count <= 50:
    pyautogui.typewrite("yo yo"+str(count))
    pyautogui.press("enter")
    count = count+1
