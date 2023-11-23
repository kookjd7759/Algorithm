n, m = map(int, input().split())
arr = list(map(int, input().split()))
cnt = []

for i in range(0, max(arr) + 1):  
    cnt.append(arr.count(i))

print(max(cnt))