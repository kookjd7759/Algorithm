a_1,a_2,a_3,a_4 = map(int,input().split())
b_1,b_2,b_3,b_4 = map(int,input().split())
c_1,c_2,c_3,c_4 = map(int,input().split())
d_1,d_2,d_3,d_4 = map(int,input().split())
if sum([a_1,a_2,a_3,a_4])==sum([b_1,b_2,b_3,b_4])==sum([c_1,c_2,c_3,c_4])==sum([d_1,d_2,d_3,d_4])==sum([a_1,b_1,c_1,d_1])==sum([a_2,b_2,c_2,d_2])==sum([a_3,b_3,c_3,d_3])==sum([a_4,b_4,c_4,d_4]):
    print('magic')
else:
    print('not magic')