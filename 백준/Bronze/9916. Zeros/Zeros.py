a = int(input())
it = a + 1
a = 1
for i in range(1, it):
    a *= i
s = str(a)
ans = 0
for i in range(len(s)):
    if s[i] == "0":
        ans += 1
print(ans)