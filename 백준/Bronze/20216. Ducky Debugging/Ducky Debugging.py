from sys import stdin, stdout

input = stdin.readline

while True:
    s = input().rstrip()
    
    if s == 'I quacked the code!':
        break
    
    try:
        print('*Nod*' if s[-1] == '.' else 'Quack!')
    except:
        pass
    
    stdout.flush()