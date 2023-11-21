for _ in range(int(input())):
    tmp=list(input().split())
    if tmp[0]=='Simon' and tmp[1]=='says' : print("",*tmp[2:])