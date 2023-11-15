a=int(input())
b=int(input())
print(a)
print(b)
c = b
while(c > 0):
    print(a*(c % 10))
    c = int(c // 10)
print(a * b)