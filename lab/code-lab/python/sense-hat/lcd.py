#!/usr/bin/env python3

from itertools import combinations
import random
import time
from sense_hat import SenseHat

sense = SenseHat()

myDict = {"haha":"str haha", "lala":"str lala"}
print("{0}".format(myDict))

HAT_WIDTH = 8
hat_matrix = {}

for i in range(HAT_WIDTH):
    for j in range(HAT_WIDTH):
        hat_matrix[(i,j)] = False

while (True):
    pixelCount = random.randint(0, 64)
    cnt = 0

#    color = [[random.randint(0,255),random.randint(0,255),random.randint(0,255)],
#             [random.randint(0,255),random.randint(0,255),random.randint(0,255)],
#             [random.randint(0,255),random.randint(0,255),random.randint(0,255)],
#             [random.randint(0,255),random.randint(0,255),random.randint(0,255)]]

    sigColor = [random.randint(0,255),random.randint(0,255),random.randint(0,255)]
    color = [sigColor,
             [(sigColor[0]+random.randint(0 ,60))%255, (sigColor[1]+random.randint(0 ,60))%255, (sigColor[2]+random.randint(0 ,60))%255],
             [(sigColor[0]+random.randint(0 ,30))%255, (sigColor[1]+random.randint(0 ,30))%255, (sigColor[2]+random.randint(0 ,30))%255],
             [(sigColor[0]+random.randint(0 ,55))%255, (sigColor[1]+random.randint(0 ,55))%255, (sigColor[2]+random.randint(0 ,55))%255]]
 
    for i in range(0 ,63):
        if 1 == random.randint(0, 1):
            x = i // HAT_WIDTH
            y = i % HAT_WIDTH
#            color = [[random.randint(0,255),random.randint(0,255),random.randint(0,255)],
#                     [random.randint(0,255),random.randint(0,255),random.randint(0,255)],
#                     [random.randint(0,255),random.randint(0,255),random.randint(0,255)],
#                     [random.randint(0,255),random.randint(0,255),random.randint(0,255)]]
            sense.set_pixel(x, y, color[(x % 2) * 2 + y % 2])
            cnt += 1
            
    print(cnt) 
    time.sleep(1)
    sense.clear()


for y in range(8):
    for i in range(8):
        sense.clear()
        sense.set_pixel(y,i,[random.randint(0,255),random.randint(0,255),random.randint(0,255)])
        print("var i is %d"%i)
        time.sleep(0.1)
    
