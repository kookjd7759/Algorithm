work = {"Re" : 0, "Pt" : 0 ,"Cc" : 0, "Ea" : 0, "Tb" : 0, "Cm" : 0, "Ex" : 0}
lst = ["Re", "Pt", "Cc", "Ea", "Tb", "Cm", "Ex"]

while True :
    try :
        temp = list(map(str, input().split()))

        for i in temp :
            if i in work :
                work[i] += 1
            else :
                work[i] = 1

        if len(temp) == 0:
            break

    except  :
        break

total = 0
for i in work :
    total += work[i]

for i in range(len(lst)) :
    print(lst[i], work[lst[i]], '{:.2f}'.format(work[lst[i]]/total))

print("Total", total, "1.00")