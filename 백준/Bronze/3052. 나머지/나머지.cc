#include <stdio.h>

int main()
 {
	int Num[10], NumNum[43];
	int result = 0;

	for (int i = 0; i < 43; i++)
		NumNum[i] = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &Num[i]);
		NumNum[(Num[i] % 42)] += 1;
	}

	for (int i = 0; i < 43; i++)
		if (NumNum[i] > 0)
			result += 1;

	printf("%d", result);

	return 0;
}