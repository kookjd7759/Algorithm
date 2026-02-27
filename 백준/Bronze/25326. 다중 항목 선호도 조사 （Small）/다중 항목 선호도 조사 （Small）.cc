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

static inline int sid(const string& s) { return s=="kor"?0:s=="eng"?1:2; }
static inline int fid(const string& s) { return s=="apple"?0:s=="pear"?1:2; }
static inline int cid(const string& s) { return s=="red"?0:s=="blue"?1:2; }

int main() {
    Sync;

    int n, m; in n >> m;
    int cnt[3][3][3]; memset(cnt, 0, sizeof(cnt));
    Fori(n) {
        string a, b, c; in a >> b >> c;
        cnt[sid(a)][fid(b)][cid(c)]++;
    }

    Fori(m) {
        string a, b, c; in a >> b >> c;
        int ans = 0;
        for (int i = 0; i < 3; ++i) for (int j = 0; j < 3; ++j) for (int k = 0; k < 3; ++k) {
            if (a != "-" && sid(a) != i) continue;
            if (b != "-" && fid(b) != j) continue;
            if (c != "-" && cid(c) != k) continue;
            ans += cnt[i][j][k];
        }
        out ans endl;
    }

    return 0;
}