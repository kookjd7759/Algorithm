#include <stdio.h>

int main(void)
{
    int t, i, a, b;
    
    scanf("%d" , &t);
    
    for(i=1;i<=t;i++)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n" , i ,a ,b , a + b);
    }
}