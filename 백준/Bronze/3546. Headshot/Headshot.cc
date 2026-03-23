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
    int n = s.size(), z = 0, o = 0, hit = 0;
    Fori(n) {
        if (s[i] == '0') {
            ++z;
            if (s[(i + 1) % n] == '1') ++hit;
        } else ++o;
    }

    ll a = 1LL * hit * n, b = 1LL * o * z;
    if (a < b) out "SHOOT" endl;
    else if (a > b) out "ROTATE" endl;
    else out "EQUAL" endl;

    return 0;
}