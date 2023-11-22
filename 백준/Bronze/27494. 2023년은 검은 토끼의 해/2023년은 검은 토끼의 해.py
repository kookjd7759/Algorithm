n = int(input())

if n<2023: print(0)
else:
    res = [0]
    for i in range(2023,n+1):
        cnt = res[i-2023]

        s = list(str(i))
        if(s.count('2') >= 2 and s.count('0') >= 1 and s.count('3') >= 1):
            tmp = s
            if '2' in s:
                loc_1 = s.index('2')
                s = s[loc_1:]
                if '0' in s:
                    loc_2 = s.index('0')
                    s = s[loc_2:]
                    if '2' in s:
                        loc_3 = s.index('2')
                        s = s[loc_3:]
                        if '3' in s:
                            loc_4 = s.index('3')
                            s = s[loc_4:]
                            cnt += 1
        res.append(cnt)
    print(res[n-2023+1])