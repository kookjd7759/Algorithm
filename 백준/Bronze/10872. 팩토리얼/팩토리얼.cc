#include <stdio.h>

int P (int num) {
	if (num <= 1)
		return 1;
	else
		return num * P(num - 1);
}

int main (void) {
	int num;
	scanf("%d", &num);
	printf("%d", P(num));
}