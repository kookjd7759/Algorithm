#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t; scanf("%d %d", &n, &t);
    while (n * 4 - 2 < t) t -= n * 4 - 2;

    if (n * 2 >= t) printf("%d", t);
    else printf("%d", n * 4 - t);
}
/*
n * 2 - (t - (n * 2)) = n * 4 - t;
*/