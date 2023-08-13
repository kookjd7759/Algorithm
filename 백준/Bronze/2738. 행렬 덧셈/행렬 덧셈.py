arr = []

h_num, v_num = map(int, input().split())

for _ in range(h_num):
    temp_arr = list(map(int, input().split()))
    arr.append(temp_arr)
    
for H in range(h_num):
    temp_arr = list(map(int, input().split()))
    for V in range(v_num):
        arr[H][V] += temp_arr[V]

for H in range(h_num):
    for V in range(v_num):
        print(arr[H][V], end = ' ')
    print()