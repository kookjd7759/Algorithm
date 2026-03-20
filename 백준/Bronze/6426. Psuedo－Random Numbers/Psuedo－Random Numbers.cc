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

    int Z, I, M, L;
    int tc = 1;

    while (in Z >> I >> M >> L, !(Z == 0 && I == 0 && M == 0 && L == 0)) {
        vector<int> vis(M, -1);
        int step = 0;

        while (vis[L] == -1) {
            vis[L] = step++;
            L = (Z * L + I) % M;
        }

        out "Case " << tc++ << ": " << (step - vis[L]) endl;
    }

    return 0;
}