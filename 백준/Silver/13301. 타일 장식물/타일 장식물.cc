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

    ll fib[85];
    Fori(85) {
        if (i == 0) fib[0] = 1;
        else if (i == 1) fib[1] = 1;
        else fib[i] = fib[i - 1] + fib[i - 2];
    }

    int n; in n; --n;
    if (n == 0) out 4;
    else if (n == 1) out 6;
    else if (n == 2) out 10;
    else if (n == 3) out 16;
    else out fib[n] * 3 + fib[n - 1] * 2 + fib[n - 2] * 2 + fib[n - 3];
}