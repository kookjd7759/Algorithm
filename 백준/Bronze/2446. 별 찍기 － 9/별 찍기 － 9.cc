#include <stdio.h>

int main(void)
{
	int n, N;
	int i, f, d, bd;

	scanf("%d", &n);

	N = 2 * n - 1;
	f = N / 2;
	for (i = 1; i <= f + 1; i++)
	{
		for (d = 1; d < i; d++)
		{
			printf(" ");
		}

		printf("*");

		for (d = 1; d <= n - i; d++)
		{
			printf("**");
		}
		printf("\n");
	}

	for (i = 1; i <= f ; i++)
	{
		for (d = 1; d <= (n - 1) - i; d++)
		{
			printf(" ");
		}

		printf("*");

		for (d = 1; d <= i; d++)
		{
			printf("**");
		}
		printf("\n");
	}
}