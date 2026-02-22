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

static bool ok(const string& a, const string& b) {
    int m = (int)a.size();
    for (int d = -(m - 1); d <= m - 1; ++d) {
        int L = max(0, d), R = min(m - 1, m - 1 + d);
        if (L > R) continue;
        bool good = true;
        for (int i = L; i <= R; ++i) if (a[i] != b[i - d]) { good = false; break; }
        if (good) return true;
    }
    return false;
}

int main() {
    Sync;
    int N, M; in N >> M;
    vector<string> s(N); Fori(N) in s[i];
    Fori(N - 1) if (!ok(s[i], s[i + 1])) { out 0 endl; return 0; }
    out 1 endl;
    return 0;
}