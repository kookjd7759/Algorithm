for _ in range(int(input())):
    s = input().rstrip()
    cnt = 0
    for c in s:
        if c in "aeiou":
            cnt += 1
    print(f"The number of vowels in {s} is {cnt}.")