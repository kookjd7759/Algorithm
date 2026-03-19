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

    int t; in t;
    cin.ignore();
    Fori(t) {
        int s, v, o; in s; in v; in o;
        cin.ignore();
        vector<string> sub(s), verb(v), obj(o);
        Forj(s) getline(cin, sub[j]);
        Forj(v) getline(cin, verb[j]);
        Forj(o) getline(cin, obj[j]);
        for (string &a : sub) for (string &b : verb) for (string &c : obj) out a spc b spc c << "." << "\n";
        if (i != t - 1) out "\n";
    }

    return 0;
}