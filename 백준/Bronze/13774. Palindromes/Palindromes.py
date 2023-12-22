while True:
    w = input()
    result = []
    if w == '#':
        break
    else:
        for i,j in enumerate(range(1,len(w)+1)):
            a = w[:i]+w[j:]
            if a == a[::-1]:
                result.append(a)
        if len(result) == 0:
            print('not possible')
        else:
            print(result[0])