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

    int N, M;
    while (in N >> M) {
        int ans = 0;
        for (int x = N; x <= M; ++x) {
            int y = x;
            int mask = 0;
            bool ok = true;
            while (y > 0) {
                int d = y % 10;
                if (mask & (1 << d)) {
                    ok = false;
                    break;
                }
                mask |= (1 << d);
                y /= 10;
            }
            if (ok) ++ans;
        }
        out ans << "\n";
    }

    return 0;
}
