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

using namespace std;

int main() {
    Sync;

    int n, m, k;
    in n >> m >> k;

    vector<ll> cost(m + 1, 0);
    vector<int> start(m + 1, -1);
    vector<bool> active(m + 1, false);

    Fori(k) {
        int p, c;
        in p >> c;

        if (!active[c]) {
            start[c] = p;
            active[c] = true;
        } else {
            if (start[c] == p) cost[c] += 100;
            else cost[c] += abs(start[c] - p);
            active[c] = false;
        }
    }

    For1i(m) {
        if (active[i]) cost[i] += 100;
    }

    For1i(m) {
        out cost[i];
        if (i != m) out " ";
    }
    ent;

    return 0;
}