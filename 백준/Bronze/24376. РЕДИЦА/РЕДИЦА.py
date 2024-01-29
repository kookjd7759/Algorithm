x, n = map(int, input().split())
num = 1
st = '1'
while len(st) < n:
    num *= x
    st += str(num)

print(st[n - 1])