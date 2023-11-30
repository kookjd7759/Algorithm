from math import ceil, floor

for _ in range(int(input())):
    y, m, d = map(int, input().split())
    total = now = 0
    for i in range(1, 1000):
        if i%3 == 0:
            total += 20*10
        else:
            total += (20+19)*5
    total += 1
    
    for i in range(1, y):
        if i%3 == 0:
            now += 20*10
        else:
            now += (20+19)*5
    if y%3 == 0:
        now += (m-1)*20 + d
    else:
        now += ceil((m-1)/2)*20 + floor((m-1)/2)*19 + d
    print(total-now)