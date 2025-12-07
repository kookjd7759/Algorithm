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

    int seq[28];
    int cur = 1;
    int dir = 1;
    Fori(28) {
        seq[i] = cur;
        if (cur == 15) dir = -1;
        else if (cur == 1) dir = 1;
        cur += dir;
    }

    while (T--) {
        ll N; in N;
        int idx = (int)((N - 1) % 28);
        int num = seq[idx];

        for (int bit = 3; bit >= 0; --bit) {
            if (num & (1 << bit)) out "딸기";
            else out "V";
        }
        ent;
    }

    return 0;
}
