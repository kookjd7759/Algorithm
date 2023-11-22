N, M = map(int, input().split())
card_stamp = []
cnt = M-1
for _ in range(M) :
    A, B = map(int, input().split())
    if A < N :
        card_stamp.append(N - A)
    else :
        cnt -= 1

card_stamp.sort()
total_value = 0
if cnt > 0 :
    for i in range(cnt) :
        total_value += card_stamp[i]

print(total_value)