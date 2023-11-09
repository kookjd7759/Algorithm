alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
for i in input() :
    if alpha.find(i) >= 0 : print(str(alpha.find(i) + 1).zfill(2), end = "")
    elif i >= "0" and i <= "9" : print(f"#{i}", end = "")
    else : print(i, end = "")