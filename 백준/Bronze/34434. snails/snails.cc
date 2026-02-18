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

    int n; in n;
    string line; getline(cin, line);
    const unsigned long long LIM = 1ULL << 32;

    Fori(n) {
        getline(cin, line);
        unsigned long long e1 = 0, e2 = 1, e3 = 2, e4 = 3;
        int idx = 0, ok = 1, has = 0;
        unsigned long long val = 0; int inNum = 0;

        auto proc = [&](unsigned long long x) {
            idx++; has = 1;
            if (!ok) return;
            unsigned long long exp;
            if (idx == 1) exp = 0;
            else if (idx == 2) exp = 1;
            else if (idx == 3) exp = 2;
            else if (idx == 4) exp = 3;
            else {
                exp = e1 + e2 + e3 + e4;
                e1 = e2; e2 = e3; e3 = e4; e4 = exp;
            }
            if (exp >= LIM || x != exp) ok = 0;
        };

        for (char ch : line) {
            if ('0' <= ch && ch <= '9') { val = val * 10 + (ch - '0'); inNum = 1; }
            else { if (inNum) proc(val), val = 0, inNum = 0; }
        }
        if (inNum) proc(val);

        out (ok && has ? "NAUTILUS" : "SNAIL") endl;
    }

    return 0;
}
