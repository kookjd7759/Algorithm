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

    string s;
    in s;
    int n = (int)s.size();
    int W = 4 * n + 1;

    vector<string> g(5, string(W, '.'));

    Fori(n) {
        int center = 2 + 4 * i;
        char sym = ((i + 1) % 3 == 0) ? '*' : '#';

        auto place = [&](int r, int c) {
            if (sym == '*') {
                g[r][c] = '*';
            } else {
                if (g[r][c] == '.')
                    g[r][c] = '#';
            }
        };

        place(0, center);
        place(1, center - 1);
        place(1, center + 1);
        place(2, center - 2);
        place(2, center + 2);
        place(3, center - 1);
        place(3, center + 1);
        place(4, center);

        g[2][center] = s[i];
    }

    Fori(5) {
        out g[i] << "\n";
    }

    return 0;
}
