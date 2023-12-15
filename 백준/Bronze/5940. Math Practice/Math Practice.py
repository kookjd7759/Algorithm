A, B = map(int, input().split())
res = 0
for i in range(A+1, 63):
    if int(str(2**i)[0]) == B:
        res = i
        break
print(res)