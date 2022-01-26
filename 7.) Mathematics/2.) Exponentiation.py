#***************Exponentiation***************#
#author: @Divyesh Chhabra

from math import *
import os
import random
import re
import sys
from itertools import *

m = pow(10,9)+7

for t in range(int(input())):
	a,b = map(int,input().split())
	print(pow(a,floor(b/2))%m * pow(a,ceil(b/2))%m)