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
    int a = 0, b = 0, ga = 0, gb = 0;
    vector<pair<int,int>> res;

    for (char c : s) {
        if (c == 'A') ++a;
        else ++b;
        if (a == 21 || b == 21) {
            res.push_back({a, b});
            if (a == 21) ++ga;
            else ++gb;
            a = b = 0;
            if (ga == 2 || gb == 2) break;
        }
    }

    for (auto [x, y] : res) out x << "-" << y endl;
    out (ga == 2 ? "A" : "B") endl;

    return 0;
}