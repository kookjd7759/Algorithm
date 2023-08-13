#include <stdio.h>

int main()
 {
	int Num[3], NumNum[10] = {0,0,0,0,0,0,0,0,0,0};
	int result, num = 100000000;

	for (int i = 0; i <= 2; i++)
		scanf("%d", &Num[i]);

	result = Num[0] * Num[1] * Num[2]; 

	while (result / num == 0)
		num /= 10;

	while (1)
	{
		NumNum[(result / num)] += 1;
		result %= num;
		num /= 10;

		if (num < 1)
			break;
	}

	for (int i = 0; i < 10; i++)
		printf("%d \n", NumNum[i]);

	return 0;
}