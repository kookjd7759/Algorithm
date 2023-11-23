n ,m = input().split()
arr = [list(map(int,input().split())) for _ in range(int(m))]
trans = {5:2,2:5,1:1,8:8}
ret = [[0]*int(m) for _ in range(int(m))]
for i in range(int(m)):
    for j in range(int(m)):
        if n == 'L' or n == 'R':
            if arr[i][j] in trans.keys():
                ret[i][int(m)-j-1] = trans[arr[i][j]]
            else:
                ret[i][int(m)-j-1]='?'
        elif n=='U' or n=='D':
            if arr[i][j] in trans.keys():
                ret[int(m)-i-1][j]=trans[arr[i][j]]
            else:
                ret[int(m)-i-1][j]='?'

for L in ret:
    for i in L:
        print(i, end=' ')
    print()