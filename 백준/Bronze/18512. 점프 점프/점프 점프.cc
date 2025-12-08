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

    int X, Y, P1, P2; in X >> Y >> P1 >> P2;

    int g = gcd(X, Y);

    if ((P2 - P1) % g != 0) {
        out -1;
        return 0;
    }

    int L = X / g * Y;
    int start = max(P1, P2);
    int ans = -1;

    for (int t = start; t <= start + L; ++t) {
        if ((t - P1) % X == 0 && (t - P2) % Y == 0) {
            ans = t;
            break;
        }
    }

    out ans;

    return 0;
}
