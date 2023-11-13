import sys, math
from decimal import *
put = sys.stdin.readline

a, b, c, d = map(int, put().split())
n1 = 0
n2 = 0
if Decimal(a) < Decimal(b):
    n1 = a
else:
    n1 = b
    
if Decimal(c) < Decimal(d):
    n2 = c
else:
    n2 = d
ret = n1 + n2

print(int(Decimal(ret) ** Decimal(0.5)))