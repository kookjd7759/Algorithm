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

    int n, m; in n >> m;
    bool* h = new bool[n]; memset(h, false, sizeof(h));
    bool* w = new bool[m];memset(w, false, sizeof(w));
    Fori(n) Forj(m) {
        char c; in c;
        if (c == 'X') {
            h[i] = true;
            w[j] = true;
        }
    }
    int a(0), b(0);
    Fori(n) if (!h[i]) ++a;
    Fori(m) if (!w[i]) ++b;
    out max(a, b);
}