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

int Mod9(const string &s) {
    int r = 0;
    for (char c : s) r = (r + c - '0') % 9;
    return r;
}

int main() {
    Sync;

    string s;
    int tc = 1;
    while (getline(cin, s)) {
        if (s == ".") break;
        string a, b, c;
        char op = 0;
        int i = 0;
        while (i < (int)s.size() && isdigit(s[i])) a += s[i++];
        op = s[i++];
        while (i < (int)s.size() && isdigit(s[i])) b += s[i++];
        ++i;
        while (i < (int)s.size() && isdigit(s[i])) c += s[i++];

        int x = Mod9(a), y = Mod9(b), z = Mod9(c);
        bool ok = (op == '+' ? (x + y) % 9 == z : (x * y) % 9 == z);

        out tc++ << ". " << (ok ? "PASS" : "NOT!") endl;
    }

    return 0;
}