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
#define Fori(x) for (int i = 0; i < (x); ++i)
#define Forj(x) for (int j = 0; j < (x); ++j)
#define Fork(x) for (int k = 0; k < (x); ++k)
#define For1i(x) for (int i = 1; i <= (x); ++i)
#define For1j(x) for (int j = 1; j <= (x); ++j)
#define For1k(x) for (int k = 1; k <= (x); ++k)

using namespace std;

int main() {
    Sync;
    string line;
    while (true) {
        if (!getline(cin, line)) break;
        if (line.size() && line.back() == '\r') line.pop_back();
        if (line == "0") break;
        stringstream ss(line);
        int b; string p, m; ss >> b >> p >> m;
        ll mod = 0;
        for (char ch : m) mod = mod * b + (ch - '0');
        ll r = 0;
        for (char ch : p) r = (r * b + (ch - '0')) % mod;
        if (r == 0) { out 0 endl; continue; }
        string ans;
        while (r > 0) { ans.push_back(char('0' + (r % b))); r /= b; }
        reverse(ans.begin(), ans.end());
        out ans endl;
    }
    return 0;
}