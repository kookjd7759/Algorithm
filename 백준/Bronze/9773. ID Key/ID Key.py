for i in range(int(input())) :
    id = input()
    ans = sum([int(i) for i in id])
    ans += int(id[10 : ]) * 10
    if ans > 9999 : print(str(ans % 10000).zfill(4))
    elif ans < 1000 : print(ans + 1000)
    else : print(ans)