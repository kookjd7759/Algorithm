while True:
    year = int(input())
    if year == 0:
        break
    if year % 4 == 0 and year >= 1896:
        if 1914 <= year <= 1918 or 1939 <= year <= 1945:
            print(year, "Games cancelled")
        elif year > 2020:
            print(year, "No city yet chosen")
        else:
            print(year, "Summer Olympics")
    else:
        print(year, "No summer games")