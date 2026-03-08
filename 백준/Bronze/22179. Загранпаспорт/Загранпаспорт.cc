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

int ToMin(const string& s) {
    return (s[0] - '0') * 600 + (s[1] - '0') * 60 + (s[3] - '0') * 10 + (s[4] - '0');
}

string ToStr(int x) {
    string s = "00:00";
    s[0] = char('0' + x / 600);
    x %= 600;
    s[1] = char('0' + x / 60);
    x %= 60;
    s[3] = char('0' + x / 10);
    s[4] = char('0' + x % 10);
    return s;
}

int main() {
    Sync;

    string s; in s;
    int cur = ToMin(s), n; in n;

    Fori(n) {
        string l, r; int t; in l >> r >> t;
        int open = ToMin(l), close = ToMin(r);
        int start = max(cur, open);
        if (start + t > close) {
            out "No" endl;
            return 0;
        }
        cur = start + t;
    }

    out "Yes" endl;
    out ToStr(cur) endl;

    return 0;
}