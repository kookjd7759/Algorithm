for _ in range(int(input())):
    li1 = list(map(float, input().split()))
    li2 = list(map(float, input().split()))
    a = li1[0]*li2[1] + li1[1]*li2[2] + li1[2]*li2[0]
    g = li2[0]*li1[1] + li2[1]*li1[2] + li2[2]*li1[0]
    if a == g:
        print('=')
    elif a > g:
        print("ADAM")
    else:
        print("GOSIA")