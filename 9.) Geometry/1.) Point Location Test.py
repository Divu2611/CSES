#***************Problem***************#
#author: @Divyesh Chhabra

from math import *
import os
import random
import re
import sys
from itertools import *

m = pow(10,9)+7

for t in range(int(input())):
    x1,y1,x2,y2,x3,y3 = map(int,input().split())
    m = ((y2-y1)/(x2-x1) if x2-x1!=0 else float("inf"))
    if m==float("inf"):
        if x3==x1:
            print("TOUCH")
        elif x1<x3:
            print("RIGHT")
        else:
            print("LEFT")
    elif m==0:
        if y3==y1:
            print("TOUCH")
        elif y1>y3:
            print("RIGHT")
        else:
            print("LEFT")
    else:
        c = y1-m*x1
        x = (y3-c)/m
        if x==x3:
            print("TOUCH")
        elif x<x3 and y2>y1 or x>x3 and y2<y1:
            print("RIGHT")
        else:
            print("LEFT")
        