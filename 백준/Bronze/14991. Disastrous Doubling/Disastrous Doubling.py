n = int(input())
b = [*map(int, input().split())]
MD = 10**9 + 7
ret = 1
ch = 0
for bt in b:
    ret = ret * 2 - bt
    if ret < 0:
        ch = 1
        break
if ch == 1:
    print("error")
else:
    print(ret % MD)