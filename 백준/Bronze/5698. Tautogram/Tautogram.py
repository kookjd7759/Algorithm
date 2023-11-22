from sys import stdin

while 1:
    data = stdin.readline().rstrip()
    if data == '*':
        break
    words = data.split()
    chk = words[0][0].lower()
    tf = True
    for i in range(1, len(words)):
        if words[i][0].lower() != chk:
            tf = False
            break

    print('Y') if tf else print('N')