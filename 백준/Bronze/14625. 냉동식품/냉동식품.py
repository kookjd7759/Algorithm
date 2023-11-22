h, m = map(int, input().split())
start_m = h*60+ m
h, m = map(int, input().split())
ent_m = h*60+ m
n = input()

ret = 0
while str(start_m)!=str(ent_m+1):
    str_hh = str(start_m//60)
    str_mm = str(start_m % 60)
    if len(str_mm) == 1:
        str_mm = '0' + str_mm
    if len(str_hh) == 1:
        str_hh = '0' + str_hh
    if n in str_hh or n in str_mm :
        ret += 1
    start_m += 1

print(ret)