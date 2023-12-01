a, b = map(int, input().split())
li = [a+b, a-b, a*b]
m = max(li)
idx = li.index(m)
m = m if m > 0 else f'({m})'
a = a if a > 0 else f'({a})'
b = b if b > 0 else f'({b})'

if li.count(m) > 1:
    print('NIE')
elif idx == 0:
    print(f"{a}+{b}={m}")
elif idx == 1:
    print(f"{a}-{b}={m}")
elif idx == 2:
    print(f"{a}*{b}={m}")