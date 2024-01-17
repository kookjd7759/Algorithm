st = input().strip().split("|")

alist = ['A', 'D', 'E']
blist = ['C', 'F', 'G']

a = 0
b = 0

for i in st:
    if i[0] in alist:
        a += 1
    if i[0] in blist:
        b += 1

if a == b:
    if st[-1][-1] in blist:
        b += 1
    if st[-1][-1] in alist:
        a += 1

if a < b:
    print("C-major")
else:
    print("A-minor")