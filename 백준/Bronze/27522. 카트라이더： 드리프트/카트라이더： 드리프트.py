sco = {}

for i in range(8):
    record, team = input().split()
    M, SS, sss = record.split(":")
    result = float(str(int(M) * 60 + int(SS)) + "." + sss)
    sco[result] = team

sco = sorted(sco.items())

point = [10, 8, 6, 5, 4, 3, 2, 1]
R, B = 0, 0

for i in range(8):
    if sco[i][1] == "R":
        R += point[i]
    else:
        B += point[i]

if R > B:
    print("Red")
else:
    print("Blue")