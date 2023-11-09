pi = 3.14159
ans = []
for _ in range(int(input())) :
    lst = input().split()
    if lst[0] == "S" :
        ans.append((4 / 3) * pi * (float(lst[1]) ** 3))
    elif lst[0] == "C" :
        ans.append((1 / 3) * pi * (float(lst[1]) ** 2) * float(lst[2]))
    else :
        ans.append(pi * (float(lst[1]) ** 2) * float(lst[2]))
print("{:.3f}".format(max(ans)))