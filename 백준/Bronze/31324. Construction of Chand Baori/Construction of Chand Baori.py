n, m = map(int, input().split())
cnt = 1
for i in range(1, n + 1):
    cnt *= i * 2

if (cnt >= m):
    print('Harshat Mata')
else:
    print('Nope')