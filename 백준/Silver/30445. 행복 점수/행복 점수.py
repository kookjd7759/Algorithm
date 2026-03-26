import sys

def solve():
    message = sys.stdin.read().strip()
    
    happy_letters = {'H', 'A', 'P', 'Y'}
    sad_letters = {'S', 'A', 'D'}
    
    p_h = 0
    p_g = 0
    
    for char in message:
        if char in happy_letters:
            p_h += 1
        if char in sad_letters:
            p_g += 1
            
    if p_h == 0 and p_g == 0:
        h = 0.5
    else:
        h = p_h / (p_h + p_g)
        
    print(f"{h * 100 + 1e-9:.2f}")

if __name__ == '__main__':
    solve()