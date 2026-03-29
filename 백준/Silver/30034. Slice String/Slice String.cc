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
    int n, m, k, s; in n;
    vector<bool> cut(256, false), merge(256, false);
    Fori(n) { char c; in c; cut[(unsigned char)c] = true; }
    in m;
    Fori(m) { char c; in c; cut[(unsigned char)c] = true; }
    in k;
    Fori(k) { char c; in c; merge[(unsigned char)c] = true; }
    in s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string str; getline(cin, str);
    Fori(256) if (merge[i]) cut[i] = false;
    string cur;
    for (char c : str) {
        if (c == ' ' || cut[(unsigned char)c]) {
            if (!cur.empty()) out cur endl, cur.clear();
        } else cur.push_back(c);
    }
    if (!cur.empty()) out cur;
    return 0;
}