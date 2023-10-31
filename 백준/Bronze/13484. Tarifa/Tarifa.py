X = int(input())
N = int(input())

res = X*(N+1)
for _ in range(N):
    p = int(input())
    res -= p
print(res)