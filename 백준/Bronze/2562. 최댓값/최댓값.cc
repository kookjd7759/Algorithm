#include <stdio.h>

int main(void)
{
	int i, max, pos = 1;
	int n[9];

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &n[i]);
	}

	max = n[0];

	for (i = 1; i < 9;i++)
	{
		if (n[i] > max)
		{
			max = n[i];
			pos = i+1;
		}
	}

	printf("%d \n%d", max, pos);
}