#include <iostream>
#include <vector>

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

    int n, k; in n >> k;
    vector<int> a(n); Fori(n) in a[i];
    vector<int> bad(10, 0); Fori(k) { int x; in x; bad[x] = 1; }

    int mx = 0; Fori(n) mx = max(mx, a[i]);
    vector<int> pref(mx + 1, 0);

    For1i(mx) {
        int x = i, ok = 0;
        while (x) {
            if (bad[x % 10]) { ok = 1; break; }
            x /= 10;
        }
        pref[i] = pref[i - 1] + ok;
    }

    ll ans = 0;
    Fori(n) ans += pref[a[i]];
    out ans endl;
    
    return 0;
}