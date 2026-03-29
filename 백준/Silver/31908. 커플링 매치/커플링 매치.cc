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
    unordered_map<string, vector<string>> mp;
    Fori(n) {
        string p, s; in p >> s;
        if (s != "-") mp[s].push_back(p);
    }
    vector<pair<string, string>> ans;
    for (auto &it : mp) if (it.second.size() == 2) ans.push_back({it.second[0], it.second[1]});
    out ans.size() endl;
    for (auto &p : ans) out p.first spc p.second endl;
    return 0;
}