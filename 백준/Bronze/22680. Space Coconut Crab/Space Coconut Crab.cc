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

    ll e;
    while (in e) {
        if (!e) break;
        ll ans = (1LL << 60);
        for (ll z = 0; z * z * z <= e; ++z) {
            ll rem = e - z * z * z;
            ll y = sqrt((long double)rem);
            while ((y + 1) * (y + 1) <= rem) y++;
            while (y * y > rem) y--;
            ll x = rem - y * y;
            ans = min(ans, x + y + z);
        }
        out ans << "\n";
    }

    return 0;
}