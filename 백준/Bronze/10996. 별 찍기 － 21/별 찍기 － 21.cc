#include <stdio.h>
int main (void)
{
	int n, i, f;
	
	scanf("%d", &n);
	
	if (n%2 == 1) //odd
	{
		for (f = 0; f < n;f++)
		{
			for (i = 0; i < (n/2 + 1);i++)
		    {
				printf("* ");
	    	}
			printf("\n");
			for (i = 0; i < (n/2);i++)
			{
				printf(" *");
			}
			printf("\n");
		}
		
	}
	else //even
	{
		for (f = 0; f < n; f++)
		{
			for (i = 0; i < (n/2);i++)
			{
				printf("* ");
			}
			printf("\n");
			for (i = 0; i < (n/2);i++)
			{
				printf(" *");
			}
			printf("\n");
		}
	}
}
