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

    int t; in t;
    while (t--) {
        string s; in s;
        int n = (int)s.size(), m = (n + 2) / 3;
        string p = s.substr(0, m), rp = p;
        reverse(rp.begin(), rp.end());
        string trp = rp.substr(1), tp = p.substr(1);

        bool ok = (s == p + rp + p) || (s == p + trp + p) || (s == p + rp + tp) || (s == p + trp + tp);
        out (ok ? 1 : 0) endl;
    }

    return 0;
}
