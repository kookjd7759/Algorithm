def copier(number_list):
    for number in number_list:
        print(f"{number} {number}")
        
        
if __name__ == "__main__":
    number_list = []
    
    for _ in range(int(input())):
        number_list.append(int(input()))
        
    copier(number_list=number_list)