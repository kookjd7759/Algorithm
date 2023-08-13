#include <stdio.h>

int main(void)
{
	int n, N;
	int i, f, d;

	scanf("%d", &n);

	N = 2 * n - 1;
	f = N / 2;
	for (i = 1; i <= f; i++)
	{
		for (d = 0; d < i; d++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= n; i++)
	{
		printf("*");
	}
	printf("\n");
	while (n >= 0)
	{
		n--;
		for (i = 1; i <= n; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}