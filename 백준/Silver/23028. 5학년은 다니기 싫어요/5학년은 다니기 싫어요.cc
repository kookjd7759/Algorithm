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
    int n, A, B; in n >> A >> B;
    vector<pair<int, int>> sem(10);
    Fori(10) in sem[i].first >> sem[i].second;
    int rem = 8 - n;
    vector<vector<bool>> dp(43, vector<bool>(43, false)), ndp(43, vector<bool>(43, false));
    dp[0][0] = true;
    Fori(rem) {
        Forj(43) fill(ndp[j].begin(), ndp[j].end(), false);
        int x = sem[i].first, y = sem[i].second;
        for (int m = 0; m <= 42; ++m) for (int t = 0; t <= 42; ++t) if (dp[m][t]) {
            for (int a = 0; a <= min(6, x); ++a) for (int b = 0; a + b <= 6 && b <= y; ++b) {
                int nm = min(42, m + a), nt = min(42, t + a + b);
                ndp[nm][nt] = true;
            }
        }
        dp = ndp;
    }
    bool ok = false;
    for (int m = 0; m <= 42; ++m) for (int t = 0; t <= 42; ++t) if (dp[m][t]) {
        if (A + 3 * m >= 66 && B + 3 * t >= 130) ok = true;
    }
    out (ok ? "Nice" : "Nae ga wae");
    return 0;
}