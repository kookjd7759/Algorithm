#include <stdio.h>

int main() {
	int n, ret(0);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		if (i % 100 == 50) ret += 1;
		else if (i % 1000 / 10 == 50) ret += 1; 
		else if (i % 10000 / 100 == 50) ret += 1; 
		else if (i % 100000 / 1000 == 50) ret += 1; 
		else if (i % 1000000 / 10000 == 50) ret += 1; 
	}
	printf("%d", n + ret);
}