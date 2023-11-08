i = 1
while 1:
    n = int(input())
    if n < 0:
        break
    X = Y = M = 0
    for _ in range(n):
        x, y, m = map(int, input().split())
        X += x*m; Y += y*m; M += m
    print("Case %d: %.2f %.2f" % (i, X/M, Y/M))
    i += 1
    t = input()