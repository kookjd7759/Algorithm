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

    vector<int> a(6);
    Fori(6) in a[i];
    int A, B; in A >> B;

    for (int p = 0; p < 6; ++p) {
        for (int q = p + 1; q < 6; ++q) {
            for (int r = q + 1; r < 6; ++r) {
                if (a[p] + a[q] + a[r] != A) continue;
                vector<int> x = {a[p], a[q], a[r]}, y;
                for (int t = 0; t < 6; ++t) if (t != p && t != q && t != r) y.push_back(a[t]);
                sort(x.rbegin(), x.rend());
                sort(y.rbegin(), y.rend());
                Fori(3) out x[i] << " ";
                Fori(3) out y[i] << (i == 2 ? '\n' : ' ');
                return 0;
            }
        }
    }

    return 0;
}