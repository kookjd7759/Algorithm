case = 1
while 1:
    n = int(input())
    if n == 0:
        break
    li = [list(map(int, input().split())) for _ in range(n)]
    res = li[0][0] + sum(li[-1]) if n > 1 else li[0][0]
    res += sum([li[i][0]+li[i][-1] for i in range(1, n-1)])
    print(f"Case #{case}:{res}")
    case += 1