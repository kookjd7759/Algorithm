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

    int T;
    in T;
    while (T--) {
        int n;
        in n;
        bool ok = false;
        for (int b = 2; b <= 64 && !ok; ++b) {
            vector<int> v;
            int x = n;
            while (x > 0) {
                v.push_back(x % b);
                x /= b;
            }
            int l = 0, r = (int)v.size() - 1;
            bool pal = true;
            while (l < r) {
                if (v[l] != v[r]) {
                    pal = false;
                    break;
                }
                ++l;
                --r;
            }
            if (pal) ok = true;
        }
        out (ok ? 1 : 0) endl;
    }

    return 0;
}
