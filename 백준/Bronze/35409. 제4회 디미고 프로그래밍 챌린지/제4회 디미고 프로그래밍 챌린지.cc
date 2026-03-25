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

    int H, M; in H >> M;
    int t = H * 60 + M;
    bool ok = false;
    vector<pair<int,int>> v = {
        {390, 540},
        {590, 600},
        {650, 660},
        {710, 720},
        {770, 830},
        {880, 890},
        {940, 950},
        {1000, 1370}
    };

    for (auto &[l, r] : v) if (l <= t && t <= r) ok = true;

    out (ok ? "Yes" : "No") endl;

    return 0;
}