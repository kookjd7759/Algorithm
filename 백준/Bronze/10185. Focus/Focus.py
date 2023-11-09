for _ in range(int(input())) :
    p, q = map(int, input().split())
    print("f = {:.1f}".format(p * q / (p + q)))