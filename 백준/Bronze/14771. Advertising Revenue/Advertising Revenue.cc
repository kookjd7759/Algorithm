#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
    Sync;

    int T; in T;
    For1k(T) {
        int n, v, ret(0); in n >> v;
        vector<pair<int, int>> dp(n);
        Fori(n) in dp[i].first >> dp[i].second;

        Fori(v) {
            int a, b, c; in a >> b >> c;
            if (dp[a - 1].first == 1) ret += dp[a - 1].second;
            if (dp[b - 1].first == 1) ret += dp[b - 1].second;
            if (c == 1) {
                if (dp[a - 1].first == 0) ret += dp[a - 1].second;
            }
            else if (c == 2) {
                if (dp[b - 1].first == 0) ret += dp[b - 1].second;
            }
        }
        out "Data Set " << k << ":\n";
        out ret << "\n\n";
    }
}