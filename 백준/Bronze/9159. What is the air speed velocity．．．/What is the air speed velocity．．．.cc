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
    Fixed(2);

    double da, de; in da >> de;
    double sumA = 0, sumE = 0, m2A = 0, m2E = 0;
    int cntA = 0, cntE = 0;

    Fori(20) {
        char c; double t; in c >> t;
        if (c == 'A' || c == 'a') sumA += t, m2A += da / t, ++cntA;
        else sumE += t, m2E += de / t, ++cntE;
    }

    double method1A = da * cntA / sumA, method1E = de * cntE / sumE;
    double method2A = m2A / cntA, method2E = m2E / cntE;

    out "Method 1\n";
    out "African: " << method1A << " furlongs per hour\n";
    out "European: " << method1E << " furlongs per hour\n";
    out "Method 2\n";
    out "African: " << method2A << " furlongs per hour\n";
    out "European: " << method2E << " furlongs per hour\n";

    return 0;
}