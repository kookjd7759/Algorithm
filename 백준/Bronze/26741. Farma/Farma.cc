# include <stdio.h>

int main() {
	int x, y; scanf("%d%d", &x, &y);
	int c = (y - x * 2) / 2;
	printf("%d %d", x - c, c);
}