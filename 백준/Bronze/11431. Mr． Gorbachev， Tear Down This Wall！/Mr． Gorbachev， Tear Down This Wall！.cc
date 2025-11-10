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

    int K; in K;
    For1i(K) {
        int n, s, p; in n >> s >> p;
        long long x0, y0; in x0 >> y0;
        long long len = 0;
        Fori(n) {
            long long x1, y1; in x1 >> y1;
            len += llabs(x1 - x0) + llabs(y1 - y0);
            x0 = x1; y0 = y1;
        }
        long long hours = (len * s + p - 1) / p;
        out "Data Set " << i << ":\n";
        out hours << "\n\n";
    }
    return 0;
}
