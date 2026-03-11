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
    Fixed(2);

    int K; in K;
    For1i(K) {
        int n; in n;
        vector<double> x(n);
        Forj(n) in x[j];

        int st = -1;
        Forj(n) if (30.0 <= x[j] && x[j] <= 30.2) { st = j; break; }

        double ans = 0.0;
        if (st != -1 && st + 3 < n) {
            double mn = x[st + 3];
            for (int j = st + 3; j < n; ++j) mn = min(mn, x[j]);
            ans = mn - 30.0;
        }

        out "Data Set " << i << ":" endl;
        out ans endl;
        ent;
    }

    return 0;
}