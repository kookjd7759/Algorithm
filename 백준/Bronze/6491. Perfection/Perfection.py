import sys

nums = list(map(int, sys.stdin.read().split()))
for n in nums:
    if n == 0:
        break
    li = []
    for i in range(1, n):
        if n % i == 0:
            if i not in li:
                li.append(i)
            if n//i not in li and n//i != n:
                li.append(n//i)
    if sum(li) == n:
        print(f"{n} PERFECT")
    elif sum(li) < n:
        print(f"{n} DEFICIENT")
    else:
        print(f"{n} ABUNDANT")