import sys
input = sys.stdin.readline
from math import *

T = int(input())
for _ in range(T):
    able = []
    n = int(input())
    for i in range(1, n+1):
        for j in range(1, n+1):
            if i*j > n:
                break
            k = (n // i) // j
            if i*j*k == n:
                able.append((i, j, k))
    ret = 1e9
    for a, b, c in able:
        if ret > 2*(a*b + b*c + c*a):
            ret = 2*(a*b + b*c + c*a)
    print(ret)