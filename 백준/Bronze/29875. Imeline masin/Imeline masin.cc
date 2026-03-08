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
    bitset<4> cur, nxt;
    cur[0] = 1;

    Fori(N) {
        int x; in x;
        nxt.reset();

        auto Go = [&](int s, int b) {
            if (s == 0) return 1;
            if (s == 1) return b == 0 ? 0 : 2;
            if (s == 2) return b == 0 ? 3 : 2;
            return b == 0 ? 3 : 0;
        };

        Forj(4) if (cur[j]) {
            if (x == 0 || x == -1) nxt[Go(j, 0)] = 1;
            if (x == 1 || x == -1) nxt[Go(j, 1)] = 1;
        }
        cur = nxt;
    }

    Fori(4) out (cur[i] ? "JAH" : "EI") endl;

    return 0;
}