def func(num):
    if str(num**2)[-len(str(num)):] == str(num):
        return "YES"
    return "NO"
for i in range(int(input())):
    print(func(int(input())))