from math import factorial
from collections import Counter

while n := int(input()):
    print(f'{n}! --')
    fd = Counter (str(factorial(n)))
    print(f'{"(0)":>6}{fd["0"]:>5}', end="")
    for i in range(1, 5):
        print(f'{"("+str(i)+")":>7}{fd[str(i)]:>5}', end="")
    print()
    print(f'{"(5)":>6}{fd["5"]:>5}', end="")
    for i in range(6, 10):
        print(f'{"("+str(i)+")":>7}{fd[str(i)]:>5}', end="")
    print()
    input()