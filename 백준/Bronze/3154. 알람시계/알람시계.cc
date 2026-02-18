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

    string s; in s;
    int H = stoi(s.substr(0, 2)), M = stoi(s.substr(3, 2));
    vector<pair<int, int>> pos(10);
    pos[1] = { 0,0 }; pos[2] = { 1,0 }; pos[3] = { 2,0 };
    pos[4] = { 0,1 }; pos[5] = { 1,1 }; pos[6] = { 2,1 };
    pos[7] = { 0,2 }; pos[8] = { 1,2 }; pos[9] = { 2,2 };
    pos[0] = { 1,3 };
    auto dist = [&](int a, int b) { return abs(pos[a].first - pos[b].first) + abs(pos[a].second - pos[b].second); };

    int bestE = 1e9, bestH = 0, bestM = 0;
    Fori(100) {
        if (i % 24 != H) continue;
        Forj(100) {
            if (j % 60 != M) continue;
            int d1 = i / 10, d2 = i % 10, d3 = j / 10, d4 = j % 10;
            int e = dist(d1, d2) + dist(d2, d3) + dist(d3, d4);
            if (e < bestE || (e == bestE && (i < bestH || (i == bestH && j < bestM)))) bestE = e, bestH = i, bestM = j;
        }
    }

    out setw(2) << setfill('0') << bestH << ":" << setw(2) << setfill('0') << bestM endl;

    return 0;
}
