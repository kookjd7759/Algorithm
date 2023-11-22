while 1:
    s = input()
    if s == '#':
        break
    li = s.split()
    for t in li:
        print(t[::-1], end=' ')
    print()