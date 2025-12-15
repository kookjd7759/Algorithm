import sys

def solve():
    input = sys.stdin.readline
    T = int(input().strip())
    out = []
    for _ in range(T):
        M, N = map(int, input().split())
        prod = [1] * M
        for _ in range(N):
            row = list(map(int, input().split()))
            for j in range(M):
                prod[j] *= row[j]
        best = prod[0]
        ans = 1
        for j in range(1, M):
            if prod[j] > best or (prod[j] == best and j + 1 > ans):
                best = prod[j]
                ans = j + 1
        out.append(str(ans))
    sys.stdout.write("\n".join(out))

if __name__ == "__main__":
    solve()
