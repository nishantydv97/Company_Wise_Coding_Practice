#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the stepPerms function below.
def stepPerms(n): 
    if n==0: return 1
    num=(n+1)*[0]
    num[0]=1
    for i in range(1,n+1):
        res=0
        for j in [1,2,3]:
            if(i-j>=0):
                res+=num[i-j]
        num[i]=res
    return num[n]

    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = int(input())

    for s_itr in range(s):
        n = int(input())

        res = stepPerms(n)

        fptr.write(str(res) + '\n')

    fptr.close()
