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

    string s; in s;
    string t = s.substr(4) + s.substr(0, 4);
    int mod = 0;
    for (char c : t) {
        if ('0' <= c && c <= '9') mod = (mod * 10 + (c - '0')) % 97;
        else {
            int x = c - 'A' + 10;
            mod = (mod * 10 + x / 10) % 97;
            mod = (mod * 10 + x % 10) % 97;
        }
    }
    if (mod == 1) out "correct" endl;
    else out "incorrect" endl;

    return 0;
}