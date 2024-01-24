import math

t = int(input())
for _ in range(t):
    a, b = input().split()
    c = str(math.factorial(int(a)))
    cnt = c.count(b)
    print(cnt)