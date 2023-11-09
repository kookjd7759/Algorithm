for _ in range(int(input())) :
    N, M, L = map(int, input().split())
    if L == 1 :
        if N % M == 0 : print(N // M)
        else : print(N // M + 1)
    else :
        N -= (M - (L - 1))
        if N % M == 0 : print(N // M)
        else : print(N // M + 1)