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
    vector<string> a(n);
    Fori(n) in a[i];
    string s = "MOBIS";
    int dx[8] = {-1,-1,-1,0,0,1,1,1};
    int dy[8] = {-1,0,1,-1,1,-1,0,1};
    int ans = 0;
    Fori(n) Forj(n) Fork(8) {
        bool ok = true;
        for (int t = 0; t < 5; ++t) {
            int ni = i + dx[k] * t, nj = j + dy[k] * t;
            if (ni < 0 || ni >= n || nj < 0 || nj >= n || a[ni][nj] != s[t]) { ok = false; break; }
        }
        if (ok) ++ans;
    }
    out ans;
    return 0;
}