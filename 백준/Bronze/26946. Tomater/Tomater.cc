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
    int n, d;
    in n >> d;
    int t1, t2, t3;
    in t1 >> t2 >> t3;
    vector<int> ripe(n + 1, 0), nxt(n + 1, 0);
    ripe[t1] = ripe[t2] = ripe[t3] = 1;
    For1i(d) {
        nxt = ripe;
        For1j(n) {
            if (ripe[j]) {
                if (j - 1 >= 1) nxt[j - 1] = 1;
                if (j + 1 <= n) nxt[j + 1] = 1;
            }
        }
        ripe.swap(nxt);
    }
    int cnt = 0;
    For1i(n) if (ripe[i]) ++cnt;
    out cnt;
}
