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
    ll N, A, PA, B, PB; in N >> A >> PA >> B >> PB;
    ll ax = N / PA, by = N / PB, best = -1, rx = 0, ry = 0;
    if (ax <= by) {
        for (ll x = 0; x <= ax; ++x) {
            ll y = (N - PA * x) / PB, v = A * x + B * y;
            if (v > best) best = v, rx = x, ry = y;
        }
    } else {
        for (ll y = 0; y <= by; ++y) {
            ll x = (N - PB * y) / PA, v = A * x + B * y;
            if (v > best) best = v, rx = x, ry = y;
        }
    }
    out rx spc ry;
    return 0;
}