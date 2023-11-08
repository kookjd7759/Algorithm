for _ in range(int(input())) :
    N, X, Y = map(int, input().split())
    lst = [*map(int, input().split())]
    if lst[0] == X and lst[-1] == Y : print("BOTH")
    elif lst[0] == X : print("EASY")
    elif lst[-1] == Y : print("HARD")
    else : print("OKAY")