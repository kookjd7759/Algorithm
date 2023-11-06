n, p, h = map(int, input().split())
for _ in range(n) :
    c = int(input())
    if c > h :
        print(f"BBTV: Dollar reached {c} Oshloobs, A record!")
        h = c
    elif p > c :
        print("NTV: Dollar dropped by {:d} Oshloobs".format(p - c))
    p = c