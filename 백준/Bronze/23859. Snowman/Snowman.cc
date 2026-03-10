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

    string s; int k; in s >> k;
    int n = s.size();
    vector<int> cur(n, 1), nxt(n), pick(n);
    string ans = "";

    Fori(k) {
        char mn = '{';
        Forj(n) if (cur[j]) mn = min(mn, s[j]);
        ans += mn;
        fill(pick.begin(), pick.end(), 0);
        Forj(n) if (cur[j] && s[j] == mn) pick[j] = 1;
        if (i == k - 1) break;
        fill(nxt.begin(), nxt.end(), 0);
        Forj(n) if (pick[j]) {
            if (j > 0) nxt[j - 1] = 1;
            if (j + 1 < n) nxt[j + 1] = 1;
        }
        cur.swap(nxt);
    }

    out ans endl;

    return 0;
}