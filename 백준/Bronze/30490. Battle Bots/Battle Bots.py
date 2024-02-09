num = int(input())
n = 1
cnt = 1
for _ in range(0, 61):
    n *= 2
    cnt += 1
    if num <= n:
        break

if num == 1:
    print(1)
else:
    print(cnt)