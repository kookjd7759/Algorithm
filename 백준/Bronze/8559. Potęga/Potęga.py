n = int(input())
if n == 0: print(1)
else:
    n = n - 1
    if (n % 4 == 0): print(2)
    elif (n % 4 == 1): print(4)
    elif (n % 4 == 2): print(8)
    else: print(6)