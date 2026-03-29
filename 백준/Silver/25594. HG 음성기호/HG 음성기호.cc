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
    vector<string> mp(26);
    mp['a' - 'a'] = "aespa";
    mp['b' - 'a'] = "baekjoon";
    mp['c' - 'a'] = "cau";
    mp['d' - 'a'] = "debug";
    mp['e' - 'a'] = "edge";
    mp['f' - 'a'] = "firefox";
    mp['g' - 'a'] = "golang";
    mp['h' - 'a'] = "haegang";
    mp['i' - 'a'] = "iu";
    mp['j' - 'a'] = "java";
    mp['k' - 'a'] = "kotlin";
    mp['l' - 'a'] = "lol";
    mp['m' - 'a'] = "mips";
    mp['n' - 'a'] = "null";
    mp['o' - 'a'] = "os";
    mp['p' - 'a'] = "python";
    mp['q' - 'a'] = "query";
    mp['r' - 'a'] = "roka";
    mp['s' - 'a'] = "solvedac";
    mp['t' - 'a'] = "tod";
    mp['u' - 'a'] = "unix";
    mp['v' - 'a'] = "virus";
    mp['w' - 'a'] = "whale";
    mp['x' - 'a'] = "xcode";
    mp['y' - 'a'] = "yahoo";
    mp['z' - 'a'] = "zebra";

    string s; in s;
    string ans; ans.reserve(s.size());
    int n = s.size();

    for (int i = 0; i < n; ) {
        string &w = mp[s[i] - 'a'];
        if (i + (int)w.size() > n) {
            out "ERROR!";
            return 0;
        }
        Forj((int)w.size()) if (s[i + j] != w[j]) {
            out "ERROR!";
            return 0;
        }
        ans.push_back(s[i]);
        i += w.size();
    }

    out "It's HG!" endl;
    out ans;
    return 0;
}