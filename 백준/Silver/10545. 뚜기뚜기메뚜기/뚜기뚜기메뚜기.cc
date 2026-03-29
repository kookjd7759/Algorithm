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
    vector<int> mp(10), rev(10);
    For1i(9) in mp[i], rev[mp[i]] = i;
    string s; in s;
    vector<int> key(26), cnt(26);
    string a[8] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < (int)a[i].size(); ++j) {
            key[a[i][j] - 'a'] = i + 2;
            cnt[a[i][j] - 'a'] = j + 1;
        }
    }
    int prev = -1;
    for (char c : s) {
        int k = rev[key[c - 'a']], t = cnt[c - 'a'];
        if (prev == k) out '#';
        Fori(t) out k;
        prev = k;
    }
    return 0;
}