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

    vector<string> g = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
    vector<string> h = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string s;
    while (in s, s != "#") {
        string ans = s;
        Fori((int)s.size()) {
            bool ok = false;
            Forj(8) {
                size_t p = g[j].find(s[i]);
                if (p != string::npos) {
                    int len = g[j].size();
                    ans[i] = g[j][(p - (i + 1) % len + len) % len];
                    ok = true;
                    break;
                }
                p = h[j].find(s[i]);
                if (p != string::npos) {
                    int len = h[j].size();
                    ans[i] = h[j][(p - (i + 1) % len + len) % len];
                    ok = true;
                    break;
                }
            }
        }
        out ans endl;
    }

    return 0;
}