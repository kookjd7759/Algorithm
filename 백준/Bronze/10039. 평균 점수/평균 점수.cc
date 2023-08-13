#include <stdio.h>

int main(void)
{
	int stu[5], i, all = 0, avr;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &stu[i]);
		if (stu[i] <= 40)
		{
			stu[i] = 40;
		}
	}

	for (i = 0; i < 5; i++)
	{
		all += stu[i];
	}
	avr = all / 5;

	printf("%d", avr);
}