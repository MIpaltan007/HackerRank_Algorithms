import math
import os
import random
import re
import sys
#
# Complete the 'extraLongFactorials' function below.
#
# The function accepts INTEGER n as parameter.
#
def extraLongFactorials(n):
    if n==1:
        return 1
    else:
        return (n*extraLongFactorials(n-1))  
    # Write your code here
if __name__ == '__main__':
    n = int(input().strip())
    extraLongFactorials(n)
    print(extraLongFactorials(n))