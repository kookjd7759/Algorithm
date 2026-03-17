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

    int n; in n;
    Fixed(2);
    while (n--) {
        double cost, pay; in cost >> pay;
        int d = (int)floor(pay - cost + 1e-9);
        int a = d / 50; d %= 50;
        int b = d / 20; d %= 20;
        int c = d / 10; d %= 10;
        int e = d / 5; d %= 5;
        int f = d;
        out a << "-$50, " << b << "-$20, " << c << "-$10, " << e << "-$5, " << f << "-$1\n";
    }

    return 0;
}