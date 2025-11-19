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

bool all_equal(const vector<int> &v) {
    Fori((int)v.size()) {
        if (v[i] != v[0]) return false;
    }
    return true;
}

int main() {
    Sync;

    int T;
    in T;
    while (T--) {
        int N;
        in N;
        vector<int> a(N);
        Fori(N) in a[i];

        Fori(N) if (a[i] & 1) ++a[i];

        if (all_equal(a)) {
            out 0 << "\n";
            continue;
        }

        int cycles = 0;
        while (true) {
            ++cycles;
            vector<int> give(N);
            Fori(N) {
                int half = a[i] / 2;
                a[i] -= half;
                give[(i + 1) % N] += half;
            }
            Fori(N) a[i] += give[i];
            Fori(N) if (a[i] & 1) ++a[i];
            if (all_equal(a)) break;
        }

        out cycles << "\n";
    }

    return 0;
}
