gold = 1.61803399
dif = gold * 0.01
for _ in range(int(input())) :
    a, b = map(float, input().split())
    if a / b >= gold - dif and a / b <= gold + dif : print("golden")
    else : print("not")