from decimal import Decimal

n, p = map(int, input().split())
ret = str(n**p)
for i in range(0, len(ret), 70):
    print(ret[i : i + 70])