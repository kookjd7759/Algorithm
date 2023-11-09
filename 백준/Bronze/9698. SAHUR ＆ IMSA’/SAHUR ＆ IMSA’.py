for i in range(1, int(input()) + 1) :
    H, M = map(int, input().split())
    if M < 45 :
        M += 15
        H -= 1
    else :
        M -= 45
    if H == -1 : H = 23
    print(f"Case #{i}: {H} {M}")