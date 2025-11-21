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

using namespace std;

int main() {
    Sync;

    string s;
    in s;

    int X = 0, Y = 0, Z = 0;
    int i = 0;
    while (i < (int)s.size() && isdigit(s[i])) {
        X = X * 10 + (s[i] - '0');
        ++i;
    }
    ++i;
    while (i < (int)s.size() && isdigit(s[i])) {
        Y = Y * 10 + (s[i] - '0');
        ++i;
    }
    ++i;
    while (i < (int)s.size() && isdigit(s[i])) {
        Z = Z * 10 + (s[i] - '0');
        ++i;
    }

    ll mn = (ll)X + (ll)Z;
    ll mx = (ll)X * (ll)Y + (ll)Z;
    ll sum = mn + mx;

    if (sum % 2 == 0) {
        out (sum / 2) endl;
    } else {
        out (sum / 2) << ".5" endl;
    }

    return 0;
}
