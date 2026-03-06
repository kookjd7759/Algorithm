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

    ll a, b, c, d, k; in a >> b >> c >> d >> k;

    vector<vector<int>> up(61, vector<int>(d + 1));
    Fori((int)d + 1){
        ll y = 1LL * i * b;
        if(y < c) up[0][i] = 0;
        else{
            y -= c;
            if(y > d) y = d;
            up[0][i] = (int)y;
        }
    }

    for(int j = 1; j <= 60; j++) Fori((int)d + 1) up[j][i] = up[j - 1][up[j - 1][i]];

    int cur = (int)a;
    for(int j = 0; j <= 60; j++) if((k >> j) & 1LL) cur = up[j][cur];

    out cur;
    return 0;
}