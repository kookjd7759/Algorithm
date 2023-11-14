import sys
input = sys.stdin.readline

for k in range(int(input())):
    n, w, e = map(int, input().split())
    ans = 0
    for _ in range(n):
        a, b, c, d = map(int, input().split())
        ans += max(a*w+c*e, e*d+b*w)
    print('Data Set {0}:'.format(k+1))
    print(ans)
    print()