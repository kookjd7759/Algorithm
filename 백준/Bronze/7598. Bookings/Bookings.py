while 1:
    p, n = input().split()
    if p == '#':
        break
    n = int(n)
    while 1:
        c, a = input().split()
        if c == 'X':
            break
        a = int(a)
        if a > 68:
            continue
        if c == 'B' and n+a <= 68:
            n += a
        elif c == 'C' and n-a >= 0:
            n -= a
    print(p, n)