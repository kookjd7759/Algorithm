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
#define Fori(x) for (int i = 0; i < (x); ++i)
#define Forj(x) for (int j = 0; j < (x); ++j)
#define Fork(x) for (int k = 0; k < (x); ++k)
#define For1i(x) for (int i = 1; i <= (x); ++i)
#define For1j(x) for (int j = 1; j <= (x); ++j)
#define For1k(x) for (int k = 1; k <= (x); ++k)

using namespace std;

int main() {
    Sync;
    ll A, B, C; in A >> B >> C;
    int S, V; in S >> V;
    int L; in L;
    ll E = 100LL * (250 - L), ans = 0, t = 0;
    t = min(30LL * V, (E + C - 1) / C); ans += t; E -= t * C;
    if (E > 0) { t = min(30LL * S, (E + B - 1) / B); ans += t; E -= t * B; }
    if (E > 0) ans += (E + A - 1) / A;
    out ans endl;
    return 0;
}