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

    ll H;
    int Y;
    in H >> Y;
    vector<ll> dp(Y + 1, 0);
    dp[0] = H;
    for (int i = 1; i <= Y; ++i) {
        dp[i] = max(dp[i], dp[i - 1] + dp[i - 1] * 5 / 100);
        if (i >= 3) dp[i] = max(dp[i], dp[i - 3] + dp[i - 3] * 20 / 100);
        if (i >= 5) dp[i] = max(dp[i], dp[i - 5] + dp[i - 5] * 35 / 100);
    }
    out dp[Y] endl;

    return 0;
}
