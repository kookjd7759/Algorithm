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

    while (1) {
        int n; in n;
        if (!n) break;
        int k; in k;

        vector<int> w(n + 1, 0), p(n + 1, 0);
        int g = k * n * (n - 1) / 2;

        while (g--) {
            int x, y; string a, b; in x >> a >> y >> b;
            if (a[0] != b[0]) {
                p[x]++, p[y]++;
                if ((a[0] == 'r' && b[0] == 's') || (a[0] == 's' && b[0] == 'p') || (a[0] == 'p' && b[0] == 'r')) w[x]++;
                else w[y]++;
            }
        }

        Fixed(3);
        For1i(n) {
            if (!p[i]) out "-" endl;
            else out (double)w[i] / p[i] + 1e-12 endl;
        }
        ent;
    }

    return 0;
}