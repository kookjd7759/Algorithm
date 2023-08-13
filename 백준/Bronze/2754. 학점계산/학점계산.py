score = input()
num = 0
if score[0] == 'A':
    num += 4
elif score[0] == 'B':
    num += 3
elif score[0] == 'C':
    num += 2
elif score[0] == 'D':
    num += 1
else:
    print(float(num))
    exit()

if score[1] == '+':
    num += 0.3
elif score[1] == '-':
    num -= 0.3

print(float(num))