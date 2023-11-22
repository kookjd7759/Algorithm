n = int(input())

for i in range(n):
    a, b = map(int, input().split())
    ret = ""
    while a > 0:
        ret += str(hex(a % b)[2:])
        a //= b
    
    if (ret == ret[::-1]):
        print(1)
    else:
        print(0)