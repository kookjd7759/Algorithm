n = int(input())
r = 2e9
l = -2e9
u = 2e9
d = -2e9
for _ in range(0, n):
    a, b, dir = map(str, input().split())
    x = int(a)
    y = int(b)
    if dir == 'L':
        r = min(r, x)
    elif dir == 'R':
        l = max(l, x)
    elif dir == 'U':
        d = max(d, y)
    elif dir == 'D':
        u = min(u, y)

if r != 2e9 and l != -2e9 and u != 2e9 and d != -2e9:
    print((r - l - 1)* (u - d - 1))
else:
    print('Infinity')