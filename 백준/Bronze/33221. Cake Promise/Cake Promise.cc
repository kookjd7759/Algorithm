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
    int t, p;
    in t >> p;
    vector<int> solved(t);
    vector<ll> sum(t);
    Fori(t) {
        int sc = 0;
        ll sm = 0;
        Forj(p) {
            string s;
            in s;
            if (s != "X") {
                int r = stoi(s);
                ++sc;
                sm += r;
            }
        }
        solved[i] = sc;
        sum[i] = sm;
    }
    int s0 = solved[0];
    ll m0 = sum[0];
    int ans = 0;
    For1i(t - 1) {
        int idx = i;
        if (solved[idx] > s0) ++ans;
        else if (solved[idx] == s0 && sum[idx] <= m0) ++ans;
    }
    out ans;
}
