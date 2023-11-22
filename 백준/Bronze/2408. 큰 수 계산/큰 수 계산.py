ret = ''
n = int(input())
for _ in range(n + n - 1):
    ret += input()
ret = ret.replace('/', '//')
print(eval(ret))