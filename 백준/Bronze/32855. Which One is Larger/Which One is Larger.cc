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

long double to_dec(const string &s) {
    return stold(s);
}

pair<ll,ll> to_tuple(const string &s) {
    int pos = s.find('.');
    ll x = stoll(s.substr(0, pos));
    string ystr = s.substr(pos + 1);
    while (!ystr.empty() && ystr[0] == '0') ystr.erase(ystr.begin());
    ll y = ystr.empty() ? 0 : stoll(ystr);
    return {x, y};
}

int main() {
    Sync;
    string a, b;
    in a >> b;

    long double da = to_dec(a), db = to_dec(b);
    bool dec_cmp = da > db;

    auto ta = to_tuple(a);
    auto tb = to_tuple(b);

    if (ta == tb) {
        out -1;
        return 0;
    }

    bool tup_cmp;
    if (ta.first != tb.first) tup_cmp = ta.first > tb.first;
    else tup_cmp = ta.second > tb.second;

    if (dec_cmp == tup_cmp) {
        out (dec_cmp ? a : b);
    } else {
        out -1;
    }
}
