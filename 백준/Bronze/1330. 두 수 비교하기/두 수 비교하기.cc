#include <stdio.h>
#pragma warning(disable : 4996)warning pragma

int main(void)
{
	int a, b;

	scanf("%d %d", &a , &b);

	if (a > b)
	{
		printf(">");
	}
	else if (a < b)
	{
		printf("<");
	}
	else
		printf("==");
	
}