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

ll Id(ll y, ll m) {
    if (3 <= m && m <= 5) return y * 4;
    if (6 <= m && m <= 8) return y * 4 + 1;
    if (9 <= m && m <= 11) return y * 4 + 2;
    if (m == 12) return y * 4 + 3;
    return (y - 1) * 4 + 3;
}

int main() {
    Sync;

    ll A, B, C; in A >> B >> C;
    ll st = Id(2015, 1), ed = Id(A, B);
    out ed - st + 1 endl;

    return 0;
}