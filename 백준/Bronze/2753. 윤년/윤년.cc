#include <stdio.h>
#pragma warning(disable : 4996)warning pragma

int main(void)
{
	int a, b4, b100, b400;

	scanf("%d", &a);

	b4 = a % 4;
	b100 = a % 100;
	b400 = a % 400;

	if (b4 == 0 && b100 != 0)
	{
		printf("1");
	}
	else if (b400 == 0)
	{
		printf("1");
	}
	else
		printf("0");
}