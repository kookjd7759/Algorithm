for i in range(int(input())):
    N = int(input())
    for n in range(N, 0, -1):
        if str(n) == "".join(sorted(list(str(n)))):
            print(f"Case #{i+1}: {n}")
            break