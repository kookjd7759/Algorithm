#include <stdio.h>
#pragma warning(disable : 4996)warning pragma

int main(void)
{
	int a, b;

	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d", a * ((b % 100) % 10));
	printf("\n%d", a * ((b % 100) / 10));
	printf("\n%d", a * (b / 100));
	printf("\n%d", a * b);
}