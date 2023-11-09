def solve(A, B, n) :
    if B == 0 : return n - 1
    return solve(B, A % B, n + A // B)

A, B = map(int, input().split())
print(solve(A, B, 0))