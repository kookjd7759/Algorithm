me_x, me_y = map(int, input().split())
n = int(input())
min = 201
X = me_x
Y = me_y
for i in range(n):
    taxi_x, taxi_y = map(int, input().split())
    x = abs(taxi_x-me_x)
    y = abs(taxi_y-me_y)
    if min > x+y:
        min = x+y
        X = taxi_x
        Y = taxi_y
print("{0} {1}".format(X, Y))