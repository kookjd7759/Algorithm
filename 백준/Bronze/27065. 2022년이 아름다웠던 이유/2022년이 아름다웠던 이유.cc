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

    int T; in T;
    const int MX = 5000;
    vector<int> sum(MX + 1, 0);
    for (int d = 1; d <= MX / 2; ++d) for (int x = d + d; x <= MX; x += d) sum[x] += d;

    while (T--) {
        int n; in n;
        bool ok = (sum[n] > n);
        if (ok) {
            for (int i = 1; (ll)i * i <= n && ok; ++i) if (n % i == 0) {
                int d1 = i, d2 = n / i;
                if (d1 != n && sum[d1] > d1) ok = false;
                if (d2 != d1 && d2 != n && sum[d2] > d2) ok = false;
            }
        }
        out (ok ? "Good Bye" : "BOJ 2022") endl;
    }

    return 0;
}
