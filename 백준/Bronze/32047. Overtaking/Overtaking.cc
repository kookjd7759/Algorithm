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

    int n;
    while (in n, n) {
        vector<ll> a(n), b(n);
        Fori(n) in a[i];
        Fori(n) in b[i];
        ll cur = 0;
        int last = 0, ans = 0;
        Fori(n) {
            cur += a[i] - b[i];
            int s = (cur > 0 ? 1 : (cur < 0 ? -1 : 0));
            if (s == 0) continue;
            if (last != 0 && last != s) ++ans;
            last = s;
        }
        out ans endl;
    }

    return 0;
}