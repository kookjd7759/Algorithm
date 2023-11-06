#include <stdio.h>
main() {
	int a, b, n; scanf("%d %d %d", &a, &b, &n);
	for (int i = 0; i < n; i++) printf("%d ", a * n + (i + 1) * b);
}