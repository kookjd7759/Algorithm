for case in range(int(input())):
    t = list(map(int, input().split()))
    n = t[0]; li = t[1:]
    res = []
    for i in range(n):
        res.append(li[i]*(n-i))
    print(f"Case {case+1}: {n-1}", *res)