#include <stdio.h>

int main() {
    int t; scanf("%d", &t);
    while (t--) {
        int k, n; scanf("%d%d", &k, &n);
        printf("%d %d\n", k, (1 + n) * n / 2 + n);
    }
}