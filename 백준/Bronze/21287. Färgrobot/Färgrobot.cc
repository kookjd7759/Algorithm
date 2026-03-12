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
    int L = s.size();
    vector<vector<int>> nxt(L + 1, vector<int>(3, -1)), last(1, vector<int>(3, -1));
    vector<int> cur(3, -1);

    for (int i = L - 1; i >= 0; --i) {
        cur[Id(s[i])] = i;
        Forj(3) nxt[i + 1][j] = cur[j];
    }
    cur = vector<int>(3, -1);
    Fori(L) if (cur[Id(s[i])] == -1) cur[Id(s[i])] = i;
    Forj(3) nxt[0][j] = cur[j];

    vector<vector<int>> dp(N + 1, vector<int>(L, -1));
    vector<vector<int>> prePos(N + 1, vector<int>(L, -1));
    vector<vector<char>> preCmd(N + 1, vector<char>(L, 0));

    Forj(3) {
        int np = nxt[0][j];
        if (np != -1) dp[1][np] = np, prePos[1][np] = -1, preCmd[1][np] = Ch(j);
    }

    for (int step = 1; step < N; ++step) {
        Fori(L) if (dp[step][i] != -1) {
            Forj(3) {
                int np = (i + 1 <= L ? nxt[i + 1][j] : -1);
                if (np == -1) continue;
                if (dp[step + 1][np] < np) {
                    dp[step + 1][np] = np;
                    prePos[step + 1][np] = i;
                    preCmd[step + 1][np] = Ch(j);
                }
            }
        }
    }

    int pos = -1;
    for (int i = L - 1; i >= 0; --i) if (dp[N][i] != -1) { pos = i; break; }

    string ans;
    for (int step = N; step >= 1; --step) {
        ans += preCmd[step][pos];
        pos = prePos[step][pos];
    }
    reverse(ans.begin(), ans.end());
    out ans << "\n";

    return 0;
}