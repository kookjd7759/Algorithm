def _round(num) :
    if (num - int(num)) >= 0.5 : return int(num) + 1
    else : return int(num)

for _ in range(int(input())) :
    r, g, b = 0, 0, 0
    for _ in range(10) :
        lst = [*map(int, input().split())]
        r += lst[0]
        g += lst[1]
        b += lst[2]
    print(_round(r / 10), _round(g / 10), _round(b / 10))