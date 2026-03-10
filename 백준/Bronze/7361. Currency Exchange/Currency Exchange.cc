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

ll ToCents(string s) {
    size_t p = s.find('.');
    if (p == string::npos) return stoll(s) * 100;
    string a = s.substr(0, p), b = s.substr(p + 1);
    while ((int)b.size() < 2) b += '0';
    if ((int)b.size() > 2) b = b.substr(0, 2);
    return stoll(a) * 100 + stoll(b);
}

ll RoundHalfUp(long double x) {
    return (ll)floor(x + 0.5L + 1e-18L);
}

int main() {
    Sync;

    vector<vector<long double>> r(6, vector<long double>(6));
    For1i(5) For1j(5) in r[i][j];

    while (1) {
        int n; in n;
        if (n == 0) break;

        vector<int> v(n + 2);
        v[0] = 1;
        For1i(n) in v[i];
        v[n + 1] = 1;

        string ms; in ms;
        ll cents = ToCents(ms);

        for (int i = 0; i <= n; ++i) cents = RoundHalfUp((long double)cents * r[v[i]][v[i + 1]]);

        out setw(0) << (cents / 100) << ".";
        out setw(2) << setfill('0') << (cents % 100) << "\n";
    }

    return 0;
}