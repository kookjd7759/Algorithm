#include <stdio.h>
int main(){int n,t;scanf("%d%d",&n,&t);int m=n*4-2;while(m<t)t-=m;printf("%d",(n*2>=t?t:n*4-t));}