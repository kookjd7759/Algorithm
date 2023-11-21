eng = list(input())
for i in range(len(eng)):
    times = sum(list(map(int, list(str(ord(eng[i]))))))
    print(eng[i] * times)