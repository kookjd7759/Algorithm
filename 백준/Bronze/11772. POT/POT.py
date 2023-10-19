N = int(input())
li = [input() for _ in range(N)]
res = sum([int(s[:-1])**int(s[-1]) for s in li])
print(res)