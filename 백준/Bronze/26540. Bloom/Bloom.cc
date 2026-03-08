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

    int n; in n;
    string line;
    getline(cin, line);

    while (n--) {
        int x; in x;
        getline(cin, line);

        vector<vector<ll>> plants(x);
        Fori(x) {
            getline(cin, line);
            stringstream ss(line);
            ll v;
            while (ss >> v) plants[i].push_back(v);
        }

        ll day; in day;
        getline(cin, line);

        int ans = 0;

        Fori(x) {
            vector<ll> &p = plants[i];
            int sz = p.size();
            ll ret = p.back();
            vector<ll> d;
            Forj(sz - 1) d.push_back(p[j]);

            ll first = 0;
            for (ll v : d) first += v;

            if (day < first) continue;
            if (day == first) {
                ans++;
                continue;
            }

            if (ret == -1) continue;

            ll period = 0;
            for (int j = (int)ret; j < (int)d.size(); ++j) period += d[j];
            if (period > 0 && (day - first) % period == 0) ans++;
        }

        out ans endl;
    }

    return 0;
}