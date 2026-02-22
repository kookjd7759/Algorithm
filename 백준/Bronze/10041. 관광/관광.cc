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
    int W, H, N; in W >> H >> N;
    vector<int> x(N), y(N); Fori(N) in x[i] >> y[i];
    ll ans = 0;
    Fori(N - 1) {
        ll dx = (ll)x[i + 1] - x[i], dy = (ll)y[i + 1] - y[i];
        ll adx = llabs(dx), ady = llabs(dy);
        if (dx == 0 || dy == 0 || (dx > 0 && dy > 0) || (dx < 0 && dy < 0)) ans += max(adx, ady);
        else ans += adx + ady;
    }
    out ans endl;
    return 0;
}