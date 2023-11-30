import sys

N = int(sys.stdin.readline().rstrip())
xpos = []
ypos = []
for i in range(N):
    x,y = map(int, sys.stdin.readline().rstrip().split(","))
    xpos.append(x)
    ypos.append(y)
print(min(xpos)-1,min(ypos)-1, sep=",")
print(max(xpos)+1,max(ypos)+1, sep=",")