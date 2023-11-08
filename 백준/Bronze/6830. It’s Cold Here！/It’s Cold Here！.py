import sys
input = sys.stdin.readline
city, temp = "", 201
try :
    while True :
        c, t = input().split()
        if int(t) < temp :
            city = c
            temp = int(t)
except :
    print(city)