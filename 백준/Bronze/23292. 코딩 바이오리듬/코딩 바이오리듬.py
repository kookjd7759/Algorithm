birthday = input()
N = int(input())
biorhythm = [0] * N

for i in range(N) :
    coding = input()
    a, b, c = 0, 0, 0
    for j in range(4) :
        a += (int(birthday[j]) - int(coding[j])) ** 2
    for j in range(4, 6) :
        b += (int(birthday[j]) - int(coding[j])) ** 2
    for j in range(6, 8) :
        c += (int(birthday[j]) - int(coding[j])) ** 2
    value = a * b * c
    biorhythm[i] = (int(coding), value)

new_dict = sorted(biorhythm, key=lambda x : (-x[1], x[0]))
print(new_dict[0][0])