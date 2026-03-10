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

bool Ok(string a, string b, string c) {
    Fori(4) {
        set<char> s = {a[i], b[i], c[i]};
        if (s.size() == 2) return 0;
    }
    return 1;
}

int main() {
    Sync;

    vector<string> v(12);
    Fori(4) Forj(3) in v[i * 3 + j];

    vector<array<int, 3>> ans;
    Fori(12) for (int j = i + 1; j < 12; ++j) for (int k = j + 1; k < 12; ++k) if (Ok(v[i], v[j], v[k])) ans.push_back({i + 1, j + 1, k + 1});

    if (ans.empty()) out "no sets" endl;
    else for (auto &a : ans) out a[0] spc a[1] spc a[2] endl;

    return 0;
}