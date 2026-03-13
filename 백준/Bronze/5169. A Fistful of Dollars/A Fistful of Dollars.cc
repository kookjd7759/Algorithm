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
        int s, t; in s >> t;
        vector<ll> sum(s + 1, 0);
        while (t--) {
            int x; ll p; in x >> p;
            sum[x] += p;
        }

        int ans = -1;
        For1j(s) {
            bool ok = 1;
            For1k(s) if (j != k && sum[j] <= 2 * sum[k]) ok = 0;
            if (ok) ans = j;
        }

        out "Data Set " << i << ":" endl;
        if (ans == -1) out "No suspect." endl;
        else out ans endl;
        ent;
    }

    return 0;
}