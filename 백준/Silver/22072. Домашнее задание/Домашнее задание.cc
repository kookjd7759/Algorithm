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
    while (t--) {
        string x, y, z; in x >> y >> z;
        vector<int> a, b, c;
        for (int i = (int)x.size() - 1; i >= 0; --i) a.push_back(x[i] - '0');
        for (int i = (int)y.size() - 1; i >= 0; --i) b.push_back(y[i] - '0');
        for (int i = (int)z.size() - 1; i >= 0; --i) c.push_back(z[i] - '0');

        vector<int> r(a.size() + b.size() - 1);
        Fori((int)a.size()) Forj((int)b.size()) r[i + j] += a[i] * b[j];

        out (r == c ? "Infinity" : "Finite") endl;
    }

    return 0;
}