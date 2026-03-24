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

struct Monitor {
    ll w, h;
    int idx;
};

int main() {
    Sync;

    int N; in N;
    vector<Monitor> v(N);
    Fori(N) { in v[i].w >> v[i].h; v[i].idx = i + 1; }

    sort(v.begin(), v.end(), [](const Monitor& a, const Monitor& b) {
        ll va = a.w * a.w + a.h * a.h;
        ll vb = b.w * b.w + b.h * b.h;
        if (va != vb) return va > vb;
        return a.idx < b.idx;
    });

    Fori(N) out v[i].idx endl;

    return 0;
}