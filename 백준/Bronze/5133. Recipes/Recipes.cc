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
        int I, C; in I >> C;
        out "Data Set " << i << ":" endl;
        Forj(I) {
            ll w, n, d; char ch; in w >> n >> ch >> d;
            ll num = (w * d + n) * C, den = d, g = gcd(num, den);
            num /= g, den /= g;
            ll whole = num / den, rem = num % den;
            if (!rem) out whole endl;
            else if (!whole) out 0 spc rem << "/" << den endl;
            else out whole spc rem << "/" << den endl;
        }
        ent;
    }

    return 0;
}