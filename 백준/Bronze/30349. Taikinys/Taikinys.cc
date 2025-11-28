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
    ll M, N, A, B;
    ll X, Y;
    in M >> N;
    in A >> B;
    in X >> Y;
    
    ll x0 = max(0LL, X);
    ll x1 = min(A - 1, X + M - 1);
    ll y0 = max(0LL, Y);
    ll y1 = min(B - 1, Y + N - 1);
    
    if (x0 <= x1 && y0 <= y1) {
        out x0 + y0;
    } else {
        out "NEPATAIKYS";
    }
}
