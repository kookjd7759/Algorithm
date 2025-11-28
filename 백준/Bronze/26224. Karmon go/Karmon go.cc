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
    string name0, name1;
    ll inc0, inc1;
    long double mul1;
    in name0 >> inc0 >> name1 >> mul1 >> inc1;
    long double lhs = mul1 * (long double)inc0;
    long double rhs = (long double)inc1;
    const long double eps = 1e-9L;
    if (fabsl(lhs - rhs) <= eps) out "Whatever";
    else if (lhs > rhs) out "Power up, Evolve";
    else out "Evolve, Power up";
}
