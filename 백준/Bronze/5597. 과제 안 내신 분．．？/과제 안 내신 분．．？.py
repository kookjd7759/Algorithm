checklist = [i for i in range(1, 31)]
for _ in range(28):
    checklist.remove(int(input()))

for i in range(len(checklist)):
    print(checklist[i])