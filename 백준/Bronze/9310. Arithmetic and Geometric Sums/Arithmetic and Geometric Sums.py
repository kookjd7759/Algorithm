while 1:
    n = int(input())
    if n == 0:
        break
    a, b, c = map(int, input().split())
    if b-a == c-b:
        d = b-a
        print((n*(2*a + (n-1)*d)) // 2)
    elif b/a == c/b:
        r = b//a
        print(a*(r**n - 1)//(r-1))