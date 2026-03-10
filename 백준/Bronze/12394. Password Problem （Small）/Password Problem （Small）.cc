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
    Fixed(6);

    int T; in T;
    For1i(T) {
        int A, B; in A >> B;
        vector<double> p(A + 1), pref(A + 1, 1.0);
        For1j(A) in p[j];
        For1j(A) pref[j] = pref[j - 1] * p[j];

        double ans = (double)B + 2.0;

        for (int k = 0; k <= A; ++k) {
            double ok = pref[A - k];
            double base = 2.0 * k + (B - A) + 1.0;
            double cur = ok * base + (1.0 - ok) * (base + B + 1.0);
            ans = min(ans, cur);
        }

        out "Case #" << i << ": " << ans << "\n";
    }

    return 0;
}