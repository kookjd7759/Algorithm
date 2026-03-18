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

string AddSmall(string s, int x) {
    int i = (int)s.size() - 1, carry = x;
    while (i >= 0 && carry) {
        int v = (s[i] - '0') + carry;
        s[i] = char('0' + (v % 10));
        carry = v / 10;
        --i;
    }
    while (carry) s.insert(s.begin(), char('0' + (carry % 10))), carry /= 10;
    return s;
}

int main() {
    Sync;

    string s; in s;
    int mod = 0;
    for (char c : s) mod = (mod * 10 + (c - '0')) % 8;
    int d0 = (8 - mod) % 8, d5 = (5 - mod + 8) % 8, d = min(d0, d5);
    out AddSmall(s, d) endl;

    return 0;
}