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

    string s, t; getline(cin, s); getline(cin, t);
    vector<pair<char, int>> a, b;
    for (char c : s) {
        if (a.empty() || a.back().first != c) a.push_back({c, 1});
        else ++a.back().second;
    }
    for (char c : t) {
        if (b.empty() || b.back().first != c) b.push_back({c, 1});
        else ++b.back().second;
    }

    vector<int> sticky(256);
    Fori((int)a.size()) if (b[i].second == a[i].second * 2) sticky[(unsigned char)a[i].first] = 1;
    for (int c = 0; c < 256; ++c) if (sticky[c]) out char(c);
    ent;

    return 0;
}