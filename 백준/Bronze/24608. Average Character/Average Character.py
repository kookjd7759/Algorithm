st = input()
n = 0
for c in list(st):
    k = ord(c)
    n += k
ret = n // len(st)
print(chr(ret))