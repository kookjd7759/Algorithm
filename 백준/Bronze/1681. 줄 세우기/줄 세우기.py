import sys
a,b=sys.stdin.readline().split()
a=int(a)
cnt=0
n=0
while cnt!=a:
    n+=1
    if b in str(n):
        continue
    cnt+=1
print(n)