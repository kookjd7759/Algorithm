n, f = map(int, input().split())
record = []
for _ in range(n):
    x, v = map(int, input().split())
    record.append((f - x) / v)

print(record.index(min(record)) + 1)