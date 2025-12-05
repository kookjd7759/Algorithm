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

    int N;
    in N;

    vector<vector<int>> a(N, vector<int>(N));
    Fori(N) Forj(N) in a[i][j];

    int maxVal = N * N;
    vector<int> freq(maxVal + 1, 0);
    bool ok = true;

    Fori(N) {
        Forj(N) {
            int v = a[i][j];
            if (v < 1 || v > maxVal) ok = false;
            else {
                freq[v]++;
                if (freq[v] > 1) ok = false;
            }
        }
    }

    if (!ok) {
        out "FALSE";
        return 0;
    }

    ll target = 0;
    Forj(N) target += a[0][j];

    ll expected = (ll)N * ((ll)N * N + 1) / 2;
    if (target != expected) {
        out "FALSE";
        return 0;
    }

    Fori(N) {
        ll sum = 0;
        Forj(N) sum += a[i][j];
        if (sum != target) {
            out "FALSE";
            return 0;
        }
    }

    Forj(N) {
        ll sum = 0;
        Fori(N) sum += a[i][j];
        if (sum != target) {
            out "FALSE";
            return 0;
        }
    }

    ll d1 = 0, d2 = 0;
    Fori(N) {
        d1 += a[i][i];
        d2 += a[i][N - 1 - i];
    }

    if (d1 != target || d2 != target) {
        out "FALSE";
        return 0;
    }

    out "TRUE";

    return 0;
}
