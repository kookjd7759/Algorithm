while 1:
    n = int(input())
    if n == 0:
        break
    sum = 0
    for i in range(1, n+1):
        sum = sum + i
    print(sum)