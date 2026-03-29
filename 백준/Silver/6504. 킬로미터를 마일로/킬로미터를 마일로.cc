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
    vector<int> f = {1, 2};
    while (f.back() < 25000) f.push_back(f[(int)f.size() - 1] + f[(int)f.size() - 2]);
    int t; in t;
    while (t--) {
        int x; in x;
        int y = 0;
        for (int i = (int)f.size() - 1; i >= 0; --i) if (f[i] <= x) {
            x -= f[i];
            if (i) y += f[i - 1];
        }
        out y endl;
    }
    return 0;
}