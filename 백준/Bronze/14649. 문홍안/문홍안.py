P = int(input())
N = int(input())
stone = [0] * 100

for _ in range(N) :
    num, d = input().split()
    if d == 'R' :
        for i in range(int(num), len(stone)) :
            stone[i] += 1
    if d == 'L' :
        for j in range(0, int(num)-1) :
            stone[j] += 1

blue = 0
red = 0
green = 0

for k in range(100) :
    if stone[k] % 3 == 0 :
        blue += 1
    elif stone[k] % 3 == 1 :
        red += 1
    else :
        green += 1

print("{:.2f}".format(P * (blue / 100)))
print("{:.2f}".format(P * (red / 100)))
print("{:.2f}".format(P * (green / 100)))