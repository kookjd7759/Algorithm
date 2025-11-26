#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define out cout <<
#define in cin >> 
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

int main() {
    Sync;

    int x1, x2, x3;
    in x1 >> x2 >> x3;

    int a[3] = {x1, x2, x3};
    int S = x1 + x2 + x3;
    int T = S / 2;

    bool ok = false;
    for (int mask = 1; mask < 8; ++mask) {
        int sum = 0;
        Fori(3) {
            if (mask & (1 << i)) sum += a[i];
        }
        if (sum == T) {
            ok = true;
            break;
        }
    }

    if (ok) {
        out 0 endl;
        return 0;
    }

    for (int i = 0; i < 3; ++i) {
        int xi = a[i];
        int idx1 = (i + 1) % 3;
        int idx2 = (i + 2) % 3;
        int y1 = a[idx1];
        int y2 = a[idx2];

        int sums[4];
        sums[0] = 0;
        sums[1] = y1;
        sums[2] = y2;
        sums[3] = y1 + y2;

        for (int t = 0; t < 4; ++t) {
            int k = sums[t];
            int c = T - k;
            if (c >= 1 && c < xi) {
                out (i + 1) endl;
                out c spc (xi - c) endl;
                return 0;
            }
        }
    }

    out -1 endl;
    return 0;
}
