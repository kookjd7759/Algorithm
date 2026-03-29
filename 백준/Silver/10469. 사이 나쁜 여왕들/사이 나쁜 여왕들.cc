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
    vector<string> a(8);
    Fori(8) in a[i];
    vector<int> r(8), c(8), d1(15), d2(15);
    int q = 0;
    Fori(8) Forj(8) if (a[i][j] == '*') {
        ++q;
        ++r[i]; ++c[j]; ++d1[i - j + 7]; ++d2[i + j];
    }
    if (q != 8) { out "invalid"; return 0; }
    Fori(8) if (r[i] != 1 || c[i] != 1) { out "invalid"; return 0; }
    Fori(15) if (d1[i] > 1 || d2[i] > 1) { out "invalid"; return 0; }
    out "valid";
    return 0;
}