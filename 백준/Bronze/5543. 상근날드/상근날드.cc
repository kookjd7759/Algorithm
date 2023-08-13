#include <stdio.h>

int main(void)
{
	int b[3], d[2], i, sb, sd;

	for (i = 0; i< 3; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0; i < 2; i++)
	{
		scanf("%d", &d[i]);
	}

	if (b[0] < b[1])
	{
		sb = b[0];
	}
	else
		sb = b[1];
	if (sb > b[2])
	{
		sb = b[2];
	}
	
	if (d[0] < d[1])
	{
		sd = d[0];
	}
	else
		sd = d[1];

	printf("%d", sd + sb - 50);
}