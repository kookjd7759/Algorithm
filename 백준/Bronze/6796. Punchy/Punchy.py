tmp = {'A': 0, 'B': 0}

while True:
    arr = input().split()
    if arr[0] == '1':
        tmp[f'{arr[1]}'] = int(arr[2])
    elif arr[0] == '2':
        print(f'{tmp[f"{arr[1]}"]}')
    elif arr[0] == '3':
        tmp[f"{arr[1]}"] =  tmp[f"{arr[1]}"] + tmp[f"{arr[2]}"]
    elif arr[0] == '4':
         tmp[f"{arr[1]}"] = tmp[f"{arr[1]}"] * tmp[f"{arr[2]}"]
    elif arr[0] == '5':
        tmp[f"{arr[1]}"] = tmp[f"{arr[1]}"] - tmp[f"{arr[2]}"]
    elif arr[0] == '6':
        tmp[f"{arr[1]}"] = tmp[f"{arr[1]}"] // tmp[f"{arr[2]}"]
    elif arr[0] == '7':
        break