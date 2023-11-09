ans = 0
for _ in range(int(input())) :
    lst = [*map(int, input().split())]
    ans += max(lst) if max(lst) > 0 else 0
print(ans)