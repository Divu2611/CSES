#***************Two Sets***************#
#author: @Divyesh Chhabra

from math import *
import os
import random
import re
import sys
from itertools import *

n=int(input())
sum=(n*(n+1))//2

if sum%2!=0:
	print("NO")

else:
	print("YES")
	num1,num2 = 0,0
	grp1 = []
	grp2 = []
	num = list(range(1,n+1))
	if n%2 == 0:
		num1 = num2 = int(n/2)
		grp1 = (num[:int(n/4)]+num[int(3*n/4):])
		grp2 = (num[int(n/4):int(3*n/4)])
	else:
		num1 = int((n+1)/2)
		num2 = n - num1
		grp1 = (num[:int((n+1)/4)]+num[int(n/2):int(n/2)+1]+num[int(3*(n+1)/4):])
		grp2 = (num[int((n+1)/4):int(n/2)]+num[int(n/2)+1:int(3*(n+1)/4)])
	print(num1)
	for i in grp1:
		print(i,end=" ")
	print()
	print(num2)
	for i in grp2:
		print(i,end=" ")
	print()