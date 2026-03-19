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

    int P; in P;
    For1i(P) {
        int n, m; in n >> m;
        vector<string> name(n);
        unordered_map<string, ll> mp;
        Forj(n) in name[j], mp[name[j]] = 0;

        Forj(m) {
            string x, c; ll r; in x >> r >> c;
            mp[x] += r;
        }

        ll mx = -1;
        string winner = "";
        int cnt = 0;
        for (auto &s : name) {
            if (mp[s] > mx) mx = mp[s], winner = s, cnt = 1;
            else if (mp[s] == mx) ++cnt;
        }

        if (cnt == 1) out "VOTE " << i << ": THE WINNER IS " << winner spc mx endl;
        else out "VOTE " << i << ": THERE IS A DILEMMA" endl;
    }

    return 0;
}