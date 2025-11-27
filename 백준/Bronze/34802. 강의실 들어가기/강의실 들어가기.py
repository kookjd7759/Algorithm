def time_to_seconds(s):
    h, m, sec = map(int, s.split(':'))
    return h * 3600 + m * 60 + sec

now = input().strip()
lecture = input().strip()
t, k = map(int, input().split())

now_sec = time_to_seconds(now)
lec_sec = time_to_seconds(lecture)

diff = lec_sec - now_sec

if diff < 0:
    print(0)
else:
    if t * (100 - k) <= diff * 100:
        print(1)
    else:
        print(0)
