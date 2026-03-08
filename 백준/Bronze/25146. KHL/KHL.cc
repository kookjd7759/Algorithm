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

vector<pair<int,int>> Parse(const string& s) {
    vector<pair<int,int>> v;
    string cur = "";
    for (char c : s) {
        if (c == '/') {
            int p = cur.find(':');
            v.push_back({stoi(cur.substr(0, p)), stoi(cur.substr(p + 1))});
            cur = "";
        } else cur += c;
    }
    int p = cur.find(':');
    v.push_back({stoi(cur.substr(0, p)), stoi(cur.substr(p + 1))});
    return v;
}

int main() {
    Sync;

    int N; in N;
    ll ans = 0;
    string s;

    Fori(N) {
        in s;
        vector<pair<int,int>> v = Parse(s);
        bool home = (i % 2 == 0);

        int d = v[0].first + v[1].first + v[2].first;
        int g = v[0].second + v[1].second + v[2].second;

        if (d != g) {
            bool medWin = home ? (d > g) : (g > d);
            if (medWin) ans += 3;
            continue;
        }

        if ((int)v.size() >= 4) {
            int dp = v[3].first, gp = v[3].second;
            if (dp != gp) {
                bool medWin = home ? (dp > gp) : (gp > dp);
                ans += medWin ? 2 : 1;
                continue;
            }
        }

        if ((int)v.size() == 5) {
            int dk = v[4].first, gk = v[4].second;
            bool medWin = home ? (dk > gk) : (gk > dk);
            ans += medWin ? 1 : 0;
        }
    }

    out ans endl;

    return 0;
}