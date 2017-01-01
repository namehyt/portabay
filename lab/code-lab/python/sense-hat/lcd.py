#!/usr/bin/env python3
import time
from sense_hat import SenseHat

sense = SenseHat()

myDict = {"haha":"str haha", "lala":"str lala"}
print("{0}".format(myDict))

for i in range(8):
    sense.clear()
    if i == 5:
        i = 2
    sense.set_pixel(0,i,[255,0,0])
    print("var i is %d"%i)
    time.sleep(1)
    
