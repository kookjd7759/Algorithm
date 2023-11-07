n = int(input())
print('Bob' if n & 1 else f'Alice\n{n // 2}')