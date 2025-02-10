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

    string st; in st;
    vector<int> vec;
    char prev = st[0];
    int cnt(0);
    for (const char c : st) {
        if (c == prev) ++cnt;
        else {
            vec.push_back(prev == 'X' ? cnt : -cnt);
            prev = c;
            cnt = 1;
        }
    }
    vec.push_back(prev == 'X' ? cnt : -cnt);

    bool ch = true;
    for (const int n : vec) if (n > 0 && (n & 1)) { ch = false; break; }

    if (!ch) out - 1;
    else {
        for (const int n : vec) {
            if (n < 0) Fori(-n) out '.';
            Fori(n / 4) out "AAAA";
            Fori((n % 4) / 2) out "BB";
        }
    }
}