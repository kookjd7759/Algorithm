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

bool Dark(int x, int h, int r, int t){
    x %= h;
    if(x == r || x == t) return true;
    if(r < t) return !(r < x && x < t);
    return !(x > r || x < t);
}

int main() {
    Sync;

    int N; in N;
    vector<int> H(N), R(N), T(N);
    int mx = 0;
    Fori(N) in H[i] >> R[i] >> T[i], mx = max(mx, H[i]);

    int lim = 1825 * mx;
    Fori(lim){
        bool ok = true;
        Forj(N) if(!Dark(i, H[j], R[j], T[j])){ ok = false; break; }
        if(ok){ out i; return 0; }
    }

    out "impossible";

    return 0;
}