#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int n = 814;
    const int base = -8140;
    const int step = 581;

    int printed = 0;
    for (int r = 0; r < 29 && printed < n; r++) {
        for (int c = 0; c < 29 && printed < n; c++) {
            int x = base + step * c + (r % 2);
            int y = base + step * r + (c % 2) * 12;

            if (c == 0 && r == 28) x = base + step * c + 1;

            cout << x << ' ' << y << "\n";
            printed++;
        }
    }
    return 0;
}