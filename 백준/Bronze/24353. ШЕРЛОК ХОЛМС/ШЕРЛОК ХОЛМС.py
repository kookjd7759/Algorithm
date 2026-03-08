import sys

def solve():
    line = sys.stdin.readline()
    if not line:
        return
    N, s, M = map(int, line.split())

    least_n3 = None

    for i in range(1, 13):
        n1 = i + 10
        n2 = s
        key = 0
        
        for n3 in range(10, N + 1):
            if 11 <= n3 <= 22:
                continue
            
            if n3 == n1 or n3 == n2:
                continue

            num = n1 * 1000 + n2 * 100 + (n3 % 100)
            
            if num % (n1 + n2) == 0 or num % (n1 + n3) == 0 or num % (n2 + n3) == 0:
                key += 1
                if i == M and least_n3 is None:
                    least_n3 = n3
        
        print(key)

    if least_n3 is not None:
        print(f"{M + 10} {s} {least_n3}")
    else:
        print("0 0 0")

if __name__ == "__main__":
    solve()