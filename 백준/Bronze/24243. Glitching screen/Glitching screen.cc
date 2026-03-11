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

    int h, w, n; in h >> w >> n;
    vector<vector<string>> a(n, vector<string>(h));
    Fori(n) Forj(h) in a[i][j];
    vector<string> cur(h);
    Fori(h) in cur[i];

    int cnt = 0;
    Fori(n) {
        bool ok = true;
        Forj(h) {
            Fork(w) if(cur[j][k] == 'x' && a[i][j][k] == '.') ok = false;
            if(!ok) break;
        }
        if(ok) ++cnt;
    }

    out (cnt == 1 ? "yes" : "no") endl;
    return 0;
}