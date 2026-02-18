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

    int n; in n;
    ll mass = 0, apples = 0;

    Fori(n) {
        char T; ll W, H, L; in T >> W >> H >> L;
        if (T == 'A') {
            ll cnt = (W / 12) * (H / 12) * (L / 12);
            apples += cnt;
            mass += 1000 + cnt * 500;
        } else mass += 50 * 120;
    }

    out mass endl;
    out apples * 4000 endl;

    return 0;
}
