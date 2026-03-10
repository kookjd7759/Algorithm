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

    int q, a, b, c; 
    in q >> a >> b >> c;

    int cnt = 0;

    while (q > 0) {
        q--; cnt++; a++;
        if (a == 35) q += 30, a = 0;
        if (q == 0) break;

        q--; cnt++; b++;
        if (b == 100) q += 60, b = 0;
        if (q == 0) break;

        q--; cnt++; c++;
        if (c == 10) q += 9, c = 0;
    }

    out "Martha plays " << cnt << " times before going broke." endl;

    return 0;
}