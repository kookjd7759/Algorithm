n1, n2 = map(int, input().split())
answer = 0
w1 = len(str(n1)) * sum(list(map(int, list(str(n1)))))
w2 = len(str(n2)) * sum(list(map(int, list(str(n2)))))
if w1 > w2:
    print(1)
elif w1 < w2:
    print(2)
else:
    print(0)