string = input()
ans = "fix"
left, right = string.split("()")
if left == right:
    ans = "correct"
print(ans)