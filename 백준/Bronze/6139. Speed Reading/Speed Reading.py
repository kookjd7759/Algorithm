from math import ceil

N, K = map(int, input().split())        
for _ in range(K):
    s, t, r = map(int, input().split())
    c = s*t
    res = cnt = 0
    while 1: 
        if (N-cnt <= c):
            res += ceil((N-cnt)/s)
            break;
        else:
            cnt += c;
            res += t+r;    
    print(res)