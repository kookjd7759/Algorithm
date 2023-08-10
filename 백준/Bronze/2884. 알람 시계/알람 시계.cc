#include <stdio.h>
#pragma warning(disable : 4996)warning pragma

int main(void)
{
	int t, m;

	scanf("%d %d", &t, &m);

	if (m > 45)
	{
		m -= 45;
	}
	else if (m < 45)
	{
		m = 60 - (45 - m);
		t -= 1;
		if (t < 0)
			t = 23;
	}
	else
		m = 0;

	printf("%d %d" , t, m);
}