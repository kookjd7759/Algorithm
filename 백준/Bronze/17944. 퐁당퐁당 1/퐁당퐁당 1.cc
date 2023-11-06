#include <stdio.h>

int main() {
    int n, t; scanf("%d %d", &n, &t);
    int n4 = n * 4;
    while (n4 - 2 < t) t -= n4 - 2;
    printf("%d", (n * 2 >= t ? t : n4 - t));
}