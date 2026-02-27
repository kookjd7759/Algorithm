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
    string W; in W;
    int M; in M;
    string S; in S;
    vector<vector<int>> pos(26);
    Fori(N) pos[W[i]-'a'].push_back(i);
    Fori(M) if (pos[S[i]-'a'].empty()) { out -1 endl; return 0; }
    const int INF = 1e9;
    vector<vector<int>> dp(M + 1, vector<int>(N, INF));
    dp[0][N - 1] = 0;
    Fori(M) Forj(N) if (dp[i][j] < INF) {
        for (int q : pos[S[i]-'a']) {
            int d = (q - j + N) % N; if (!d) d = N;
            dp[i + 1][q] = min(dp[i + 1][q], dp[i][j] + d);
        }
    }
    int ans = INF; Forj(N) ans = min(ans, dp[M][j]);
    out (ans >= INF ? -1 : ans) endl;
    return 0;
}