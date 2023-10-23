for _ in range(int(input())) :
    y, m = map(int, input().split())
    ch = False
    if (y % 4 == 0 and y % 100 != 0) or (y % 400 == 0) :
        ch = True
    
    if ch :
        days = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    else :
        days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    
    if m == 1 :
        print(y-1, m+11, days[m+10])
    else :
        print(y, m-1, days[m-2])