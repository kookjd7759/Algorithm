#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

ll c[101], t[101], p[101], d[101];

int main() {
    Sync;

    int n, m; in n >> m;
    Fori(n) in c[i] >> t[i] >> p[i];
    Fori(m) in d[i];
    ll mini = 0xffffffff;
    int ret(0);
    Fori(n) {
        ll cur = c[i] * 100;
        Forj(m) {
            ll cl = (d[j] + t[i] - 1) / t[i] - (ll)(d[j] < t[i]);
            cur += cl * p[i];
        }
        if (mini > cur) {
            mini = cur;
            ret = i;
        }
    }
    out ret + 1;
}