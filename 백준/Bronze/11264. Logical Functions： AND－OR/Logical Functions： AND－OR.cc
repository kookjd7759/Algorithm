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

int F(double x1, double x2, double w1, double w2, double b) {
    return x1 * w1 + x2 * w2 + b >= 0.0 ? 1 : 0;
}

int main() {
    Sync;

    int T; in T;
    while (T--) {
        string s; double w1, w2, b; in s >> w1 >> w2 >> b;
        int a = F(0, 0, w1, w2, b);
        int c = F(0, 1, w1, w2, b);
        int d = F(1, 0, w1, w2, b);
        int e = F(1, 1, w1, w2, b);
        if (s == "AND") out (a == 0 && c == 0 && d == 0 && e == 1 ? "true" : "false") endl;
        else out (a == 0 && c == 1 && d == 1 && e == 1 ? "true" : "false") endl;
    }

    return 0;
}