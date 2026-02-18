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

    int N; in N;
    string line; getline(cin, line);

    Fori(N) {
        ll A = 0, R = 0; int has = 0;
        while (1) {
            if (!getline(cin, line)) break;
            if (line.empty()) { if (has) break; else continue; }
            has = 1;
            for (char c : line) { A++; if (c != '#') R++; }
        }
        ll val = (R * 1000 + A / 2) / A;
        out "Efficiency ratio is ";
        if (val % 10 == 0) out (val / 10);
        else out (val / 10) << "." << (val % 10);
        out "%." endl;
    }

    return 0;
}
