#include <stdio.h>
int main (void)
{
	int n, i, f, g;
	
	scanf("%d", &n);
	
	for (i=1;i<=n;i++)
	{
		for (f=n-i;f>0;f--)
		{
			printf(" ");
		}
		for (g=i;g>0;g--)
		{
			printf("*");
		}
		printf("\n");
	}
}