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
    int N; in N;
    vector<int> X(N); Fori(N) in X[i];
    int target = X.back() + 1, mx = target + 2;
    vector<char> blk(mx + 1, 0);
    Fori(N) if (X[i] <= mx) blk[X[i]] = 1;
    const int INF = 1e9;
    vector<int> dp(mx + 1, INF);
    dp[0] = 0;
    for (int i = 1; i <= target; ++i) {
        if (blk[i]) continue;
        dp[i] = min(dp[i], dp[i - 1] + 1);
        if (i >= 2) dp[i] = min(dp[i], dp[i - 2] + 1);
    }
    out (dp[target] >= INF ? -1 : dp[target]) endl;
    return 0;
}