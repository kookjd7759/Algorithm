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
    int n, Aint, Bint;
    in n >> Aint >> Bint;
    vector<long double> ad(n + 1), bd(n + 1);
    For1i(n) {
        int ai, bi;
        in ai >> bi;
        ad[i] = ai;
        bd[i] = bi;
    }
    long double A = Aint, B = Bint;
    long double best = 0.0L;
    for (int id_d = 0; id_d <= n; ++id_d) {
        for (int id_e = 0; id_e <= n; ++id_e) {
            if (id_d != 0 && id_e != 0 && id_d == id_e) continue;
            long double cur = 0.0L;
            if (id_d) cur += A / ad[id_d];
            if (id_e) cur += B / bd[id_e];
            if (cur > best) best = cur;
        }
    }
    Fixed(2);
    out best;
}
