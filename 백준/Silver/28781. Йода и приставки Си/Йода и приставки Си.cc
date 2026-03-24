#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n";
#define ent cout << "\n";
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

    string s; in s;
    vector<pair<string, int>> p = {
        {"tera", 12}, {"giga", 9}, {"mega", 6}, {"kilo", 3},
        {"deci", -1}, {"centi", -2}, {"milli", -3}, {"micro", -6}, {"nano", -9}
    };

    int mul = 1;
    if ((int)s.size() >= 7 && s.substr((int)s.size() - 7) == "meter^2") s.erase((int)s.size() - 7), mul = 2;
    else if ((int)s.size() >= 7 && s.substr((int)s.size() - 7) == "meter^3") s.erase((int)s.size() - 7), mul = 3;
    else if ((int)s.size() >= 6 && s.substr((int)s.size() - 6) == "meter3") s.erase((int)s.size() - 6), mul = 3;
    else s.erase((int)s.size() - 5);

    ll ans = 0;
    int i = 0;
    while (i < (int)s.size()) {
        for (auto &[t, v] : p) {
            int len = t.size();
            if (i + len <= (int)s.size() && s.substr(i, len) == t) {
                ans += v;
                i += len;
                break;
            }
        }
    }

    out ans * mul endl;
    return 0;
}