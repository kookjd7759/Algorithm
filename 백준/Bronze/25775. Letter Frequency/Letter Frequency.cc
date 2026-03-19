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
    vector<string> v(n);
    int mx = 0;
    Fori(n) in v[i], mx = max(mx, (int)v[i].size());

    Fori(mx) {
        vector<int> cnt(26, 0);
        int best = 0;
        Forj(n) if (i < (int)v[j].size()) cnt[v[j][i] - 'a']++, best = max(best, cnt[v[j][i] - 'a']);
        out i + 1 << ":";
        bool first = true;
        Forj(26) if (cnt[j] == best) {
            if (first) { out " " << char('a' + j); first = false; }
            else out " " << char('a' + j);
        }
        out "\n";
    }

    return 0;
}