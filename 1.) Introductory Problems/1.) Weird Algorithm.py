#***************Weird Algorithm***************#
#author - @Divyesh Chhabra

from math import *
import os
import random
import re
import sys
from itertools import *

n = int(input())
res = []
res.append(n)

while n!=1:
	if n%2==0:
		n//=2
	else:
		n*=3
		n+=1
	res.append(n)

for i in res:
	print(i,end=" ")
