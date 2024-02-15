#include<stdio.h>
int a[1000];
int b[1000];
int main() {
	int c, d;
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= c; i++) {
		d = i;
		for (int j = 0; j < a[i]; j++) {
			b[d] = b[d - 1];
			d--;
		}
		b[d] = i;
	}
	for (int i = 0; i < c; i++) {
		printf("%d ", b[i] + 1);
	}
}