#include <stdio.h>

int main() {
    int t; scanf("%d", &t);
    while (t--) {
        int n; scanf("%d", &n);
        n %= 12;
        printf("%c\n", "BABCBCDCDADAB"[n]);
    }
}