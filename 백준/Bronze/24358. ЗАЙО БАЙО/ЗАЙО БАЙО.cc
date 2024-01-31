#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
    Sync;

    int mt[12]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
    int x, n, d, m, g;
    in x >> n >> d >> m >> g;
    x = x * n * 2 - n - 1;
    d += x;
    if (g % 4 == 0 && g % 100 != 0 || g % 400 == 0) mt[1] = 29;
    else mt[1] = 28;
    while (d > mt[m - 1]) {
        if (g % 4 == 0 && g % 100 != 0 || g % 400 == 0) mt[1] = 29;
        else mt[1] = 28;
        d -= mt[m - 1];
        m++;
        if (m > 12) {
            g++;
            m -= 12;
        }
    }
    out d spc m spc g;
}