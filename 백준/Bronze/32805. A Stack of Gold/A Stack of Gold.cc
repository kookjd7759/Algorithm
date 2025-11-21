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

    ll w;
    ll s;
    in w >> s;

    const ll WT = 29260;
    const ll WG = 29370;
    const ll diff_per_coin = WG - WT;

    ll c = s * (s + 1) / 2;
    ll all_tungsten_weight = c * WT;

    ll diff = w - all_tungsten_weight;
    ll stack = diff / diff_per_coin;

    out stack endl;

    return 0;
}
