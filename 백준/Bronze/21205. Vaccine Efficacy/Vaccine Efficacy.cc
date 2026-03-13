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

    int N; in N;
    int vc = 0, cc = 0, v[3] = {}, c[3] = {};
    Fori(N) {
        string s; in s;
        if (s[0] == 'Y') {
            vc++;
            Forj(3) if (s[j + 1] == 'Y') v[j]++;
        } else {
            cc++;
            Forj(3) if (s[j + 1] == 'Y') c[j]++;
        }
    }

    Fixed(6);
    Fori(3) {
        double vr = (double)v[i] / vc, cr = (double)c[i] / cc;
        if (vr >= cr) out "Not Effective" endl;
        else out (1.0 - vr / cr) * 100.0 endl;
    }

    return 0;
}