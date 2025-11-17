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

    int R, C;
    in R >> C;
    vector<int> dist(10, -1);

    Fori(R) {
        string s;
        in s;
        int pos = -1;
        for (int j = 0; j < C; ++j) {
            if (s[j] >= '1' && s[j] <= '9') pos = j;
        }
        if (pos != -1) {
            int team = s[pos] - '0';
            int d = (C - 1) - pos;
            dist[team] = d;
        }
    }

    vector<pair<int, int>> v;
    for (int t = 1; t <= 9; ++t) v.push_back({ dist[t], t });
    sort(v.begin(), v.end());

    vector<int> rankTeam(10);
    int curRank = 1;
    for (int i = 0; i < 9; ++i) {
        if (i > 0 && v[i].first != v[i - 1].first) curRank++;
        rankTeam[v[i].second] = curRank;
    }

    for (int t = 1; t <= 9; ++t) out rankTeam[t] << "\n";

    return 0;
}
