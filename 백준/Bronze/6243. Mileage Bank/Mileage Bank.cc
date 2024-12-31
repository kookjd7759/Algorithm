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

int cal(int m, char c) {
    return c == 'F' ? m * 2
        : c == 'B' ? m + ((m & 1) ? m / 2 + 1 : m / 2)
        : c == 'Y' ? (m <= 500 ? 500 : m)
        : 0;
}

int main() {
    Sync;

    while (true) {
        int m;
        char c;
        int total(0);
        while (true) {
            string ori, dest;
            in ori;
            if (ori == "#") exit(0);
            if (ori == "0") break;
            in dest;

            in m >> c;
            total += cal(m, c);
        }
        out total endl;
    }
}