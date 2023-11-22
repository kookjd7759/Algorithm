n = input()
l = [['B', 'v'], ['E', 'ye'], ['H', 'n'], [
    'P', 'r'], ['C', 's'], ['Y', 'u'], ['X', 'h']]

for v in l:
    n = n.replace(v[0], v[1])
print(n.lower())