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

    int T; in T;
    while (T--) {
        int a, b; in a >> b;
        string s = to_string(a), g = to_string(b);
        while (s.size() < 4) s = "0" + s;
        while (g.size() < 4) g = "0" + g;

        int c = 0, q = 0;
        vector<int> cs(10, 0), cg(10, 0);

        Fori(4) {
            if (s[i] == g[i]) ++c;
            else ++cs[s[i] - '0'], ++cg[g[i] - '0'];
        }

        Fori(10) q += min(cs[i], cg[i]);

        out "For secret = " << s << " and guess = " << g << ", " << c << " circles and " << q << " squares will light up." endl;
    }

    return 0;
}