N = int(input())
ans = 0
for n in range(1, N+1):
    for i in range(n+1):
        ans += n+i
print(ans)