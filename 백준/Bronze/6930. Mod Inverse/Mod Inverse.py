n = int(input())
d = int(input())
for i in range(d):
    if (n * i) % d == 1:
        print(i)
        break
    elif i == d - 1 and (n * i) % d != 1:
        print('No such integer exists.')