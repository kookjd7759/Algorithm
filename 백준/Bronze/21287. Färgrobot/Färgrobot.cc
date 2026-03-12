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

int Id(char c) {
    if (c == 'R') return 0;
    if (c == 'G') return 1;
    return 2;
}

char Ch(int x) {
    if (x == 0) return 'R';
    if (x == 1) return 'G';
    return 'B';
}

int main() {
    Sync;

    int N; string s; in N >> s;
    int L = (int)s.size();
    vector<vector<int>> nxt(L + 1, vector<int>(3, -1));
    vector<int> last(3, -1);

    for (int i = L; i >= 0; --i) {
        if (i < L) last[Id(s[i])] = i + 1;
        Forj(3) nxt[i][j] = last[j];
    }

    vector<vector<int>> dp(N + 1, vector<int>(L + 1, -1));
    vector<vector<int>> pick(N + 1, vector<int>(L + 1, -1));

    Fori(L + 1) dp[0][i] = i;

    For1i(N) {
        for (int pos = L; pos >= 0; --pos) {
            Forj(3) {
                int np = nxt[pos][j];
                if (np == -1) continue;
                if (dp[i][pos] < dp[i - 1][np]) {
                    dp[i][pos] = dp[i - 1][np];
                    pick[i][pos] = j;
                }
            }
        }
    }

    string ans;
    int pos = 0;
    for (int rem = N; rem >= 1; --rem) {
        int c = pick[rem][pos];
        ans += Ch(c);
        pos = nxt[pos][c];
    }

    out ans << "\n";

    return 0;
}