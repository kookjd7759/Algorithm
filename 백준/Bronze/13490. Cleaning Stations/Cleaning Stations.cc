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

    int K; in K;
    For1i(K) {
        int n, m; in n >> m;
        vector<int> x(m);
        Forj(m) in x[j];

        ll mx = -(1LL << 60);
        vector<int> ans;

        For1j(n) {
            ll sum = 0;
            Fork(m) {
                int y; in y;
                sum += 1LL * x[k] * y;
            }
            if (sum > mx) mx = sum, ans = {j};
            else if (sum == mx) ans.push_back(j);
        }

        out "Data Set " << i << ":" << "\n";
        for (int v : ans) out v << "\n";
        out "\n";
    }

    return 0;
}