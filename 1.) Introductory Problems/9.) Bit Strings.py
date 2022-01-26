#***************Bit Strings***************#
#author: @Divyesh Chhabra

from math import *
import os
import random
import re
import sys
from itertools import *

m = pow(10,9)+7
ans = 1

for i in range(1,int(input())+1):
	ans = (ans*2)%m
print((int)(ans))