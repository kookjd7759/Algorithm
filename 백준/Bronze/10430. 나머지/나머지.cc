#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	scanf("%d %d %d", &a , &b , &c);
	
	printf("%d", (a+b)%c);
	printf("\n%d", ((a%c)+(b%c))%c);
	printf("\n%d", (a*b)%c);
	printf("\n%d", ((a%c)*(b%c))%c);
}