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
    mp['a' - 'a'] = "2"; mp['b' - 'a'] = "22"; mp['c' - 'a'] = "222";
    mp['d' - 'a'] = "3"; mp['e' - 'a'] = "33"; mp['f' - 'a'] = "333";
    mp['g' - 'a'] = "4"; mp['h' - 'a'] = "44"; mp['i' - 'a'] = "444";
    mp['j' - 'a'] = "5"; mp['k' - 'a'] = "55"; mp['l' - 'a'] = "555";
    mp['m' - 'a'] = "6"; mp['n' - 'a'] = "66"; mp['o' - 'a'] = "666";
    mp['p' - 'a'] = "7"; mp['q' - 'a'] = "77"; mp['r' - 'a'] = "777"; mp['s' - 'a'] = "7777";
    mp['t' - 'a'] = "8"; mp['u' - 'a'] = "88"; mp['v' - 'a'] = "888";
    mp['w' - 'a'] = "9"; mp['x' - 'a'] = "99"; mp['y' - 'a'] = "999"; mp['z' - 'a'] = "9999";

    int T; in T;
    cin.ignore();
    For1i(T) {
        string s, ans = ""; getline(cin, s);
        for (char c : s) {
            string cur = c == ' ' ? "0" : mp[c - 'a'];
            if (!ans.empty() && ans.back() == cur[0]) ans += ' ';
            ans += cur;
        }
        out "Case #" << i << ": " << ans endl;
    }

    return 0;
}