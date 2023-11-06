n=int(input())
text1=input()
text2=input()
cnt=0
for i in range(n):
    if text1[i]!=text2[i]:
        cnt+=1
print(cnt)