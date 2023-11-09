ans = set()
for i in range(int(input())) :
    s = input()
    ans.add(s[0])
alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
idx = 0
while idx < 26 :
    if alpha[idx % 26] not in ans : break
    idx += 1
print(idx)