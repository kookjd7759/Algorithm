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

    int n; in n;
    vector<string> a(n); Fori(n) in a[i];

    Fori(n) {
        int b = 0, w = 0;
        Forj(n) {
            if (a[i][j] == 'B') ++b;
            else ++w;
            if (j >= 2 && a[i][j] == a[i][j - 1] && a[i][j - 1] == a[i][j - 2]) { out 0 endl; return 0; }
        }
        if (b != n / 2 || w != n / 2) { out 0 endl; return 0; }
    }

    Forj(n) {
        int b = 0, w = 0;
        Fori(n) {
            if (a[i][j] == 'B') ++b;
            else ++w;
            if (i >= 2 && a[i][j] == a[i - 1][j] && a[i - 1][j] == a[i - 2][j]) { out 0 endl; return 0; }
        }
        if (b != n / 2 || w != n / 2) { out 0 endl; return 0; }
    }

    out 1 endl;
    return 0;
}