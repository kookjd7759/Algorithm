import datetime
from datetime import timedelta

for i in range(3):
    start,end=input().split()
    st=int(start.replace(":",""))
    ed=int(end.replace(":",""))
    stH,stM,stS=map(int,start.split(":"))
    edH,edM,edS=map(int,end.split(":"))
    stime=datetime.datetime(2021,1,1,stH,stM,stS)
    tmp_time=stime.strftime('%H%M%S')
    
    sec=1
    
    cnt=0
    if int(tmp_time)%3==0:
            cnt+=1
    etime=datetime.datetime(2021,1,1,edH,edM,edS)
    etime=etime.strftime('%H%M%S')

    while True:
        if tmp_time==etime:
            break
        
        stime=stime+timedelta(seconds=sec)
        tmp_time=stime.strftime('%H%M%S')
        if int(tmp_time)%3==0:
            cnt+=1

    print(cnt)