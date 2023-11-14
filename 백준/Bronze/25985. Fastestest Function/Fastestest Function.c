#include <stdio.h>

int main() {
	double a, b;
	scanf("%lf%lf", &a, &b); printf("%.10lf", a / (b * (100 - a) / (100 - b)));
}