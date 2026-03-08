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

array<int,4> Rot(array<int,4> a, int k) {
    array<int,4> b;
    Fori(4) b[i] = a[(i - k + 4) % 4];
    return b;
}

bool Check(vector<pair<int,int>> p, vector<array<int,4>> s) {
    Fori(3) Forj(3) if (i != j) {
        int dx = p[j].first - p[i].first, dy = p[j].second - p[i].second;
        if (abs(dx) + abs(dy) != 1) continue;
        if (dx == 1 && s[i][1] != s[j][3]) return false;
        if (dx == -1 && s[i][3] != s[j][1]) return false;
        if (dy == 1 && s[i][0] != s[j][2]) return false;
        if (dy == -1 && s[i][2] != s[j][0]) return false;
    }
    return true;
}

int main() {
    Sync;
    vector<array<int,4>> a(3);
    Fori(3) in a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
    vector<vector<pair<int,int>>> shapes = {{{0,0},{1,0},{2,0}}, {{0,0},{1,0},{0,1}}};
    vector<int> p = {0,1,2};
    do {
        for (auto &shape : shapes) {
            Fori(4) Forj(4) Fork(4) {
                vector<array<int,4>> s = {Rot(a[p[0]], i), Rot(a[p[1]], j), Rot(a[p[2]], k)};
                if (Check(shape, s)) {
                    out "Yes" endl;
                    return 0;
                }
            }
        }
    } while (next_permutation(p.begin(), p.end()));
    out "No" endl;
    return 0;
}