from decimal import Decimal, getcontext
import sys

input = sys.stdin.readline
getcontext().prec = 35
for _ in range(int(input())):
    a, b, c, d = map(int, input().split())
    l = Decimal(a) + Decimal(b).sqrt()
    r = Decimal(c) + Decimal(d).sqrt()
    if l < r:
        print('Less')
    elif l == r:
        print('Equal')
    else:
        print('Greater')