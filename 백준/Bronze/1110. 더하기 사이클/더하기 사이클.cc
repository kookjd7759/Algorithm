#include <stdio.h>

int main(void)
{
	int n, nd, a, b, nn, ab, t=1;

	scanf("%d", &n);

	nd = n;

	while (1)
	{
		a = nd / 10;
		b = nd % 10;
		ab = a + b;
		nn = (b * 10) + (ab % 10);

		if (n == nn)
		{
			break;
		}
		nd = nn;
		t += 1;
	}
	printf("%d" , t);
}