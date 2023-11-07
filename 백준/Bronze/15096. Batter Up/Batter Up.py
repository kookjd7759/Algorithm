input()
b = map(int, input().split())
res = list(filter(lambda x: x != -1, b))
print(sum(res) / len(res))