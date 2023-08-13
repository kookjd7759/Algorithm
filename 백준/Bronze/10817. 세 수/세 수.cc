#include <stdio.h>

int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if(a > b && b > c)
	{
		printf("%d", b);
	}
	if (c > b && b > a)
	{
		printf("%d", b);
	}
	if (b > a && a > c)
	{
		printf("%d", a);
	}
	if (c > a && a > b)
	{
		printf("%d", a);
	}
	if (a > c && c > b)
	{
		printf("%d", c);
	}
	if (b > c && c >a)
	{
		printf("%d", c);
	}

	if (a == b)
	{
		if (a != c)
		{
			printf("%d", a);
		}
	}
	if (a == c)
	{
		if (a != b)
		{
			printf("%d", a);
		}
	}
	if (c == b)
	{
		if (a != c)
		{
			printf("%d", b);
		}
	}
	if (a == b && b == c)
	{
		printf("%d", a);
	}
}