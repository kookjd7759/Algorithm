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
    vector<int> a(n);
    int mx = 0;
    Fori(n) in a[i], mx = max(mx, a[i]);

    ll ans = (1LL << 60);
    for(int h = 0; h <= mx; h++){
        ll need = 0, extra = 0;
        Fori(n) if(a[i] < h) need += h - a[i]; else extra += a[i] - h;
        ans = min(ans, max(need, extra));
    }

    out ans;

    return 0;
}