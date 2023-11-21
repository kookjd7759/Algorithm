import sys
a,b=map(int,sys.stdin.readline().split())
if a%b==0 :print( int (a/b))
else: print("%.10f"% (a/b))