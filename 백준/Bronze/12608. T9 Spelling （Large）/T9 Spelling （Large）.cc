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
    mp[0] = "2"; mp[1] = "22"; mp[2] = "222";
    mp[3] = "3"; mp[4] = "33"; mp[5] = "333";
    mp[6] = "4"; mp[7] = "44"; mp[8] = "444";
    mp[9] = "5"; mp[10] = "55"; mp[11] = "555";
    mp[12] = "6"; mp[13] = "66"; mp[14] = "666";
    mp[15] = "7"; mp[16] = "77"; mp[17] = "777"; mp[18] = "7777";
    mp[19] = "8"; mp[20] = "88"; mp[21] = "888";
    mp[22] = "9"; mp[23] = "99"; mp[24] = "999"; mp[25] = "9999";

    int T; in T;
    cin.ignore();
    For1i(T) {
        string s, ans; getline(cin, s);
        for (char c : s) {
            string cur = c == ' ' ? "0" : mp[c - 'a'];
            if (!ans.empty() && ans.back() == cur[0]) ans += ' ';
            ans += cur;
        }
        out "Case #" << i << ": " << ans endl;
    }

    return 0;
}