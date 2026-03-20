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
    while (n--) {
        string loc, s; in loc >> s;
        int b = 0, c = 0, m = 0, w = 0;
        for (char ch : s) {
            if (ch == 'B') b += 2;
            else if (ch == 'C') c += 1;
            else if (ch == 'M') m += 4;
            else if (ch == 'W') w += 3;
        }

        int mx = max({b, c, m, w});
        int cnt = (b == mx) + (c == mx) + (m == mx) + (w == mx);

        out loc << ": ";
        if (cnt > 1) out "There is no dominant species" endl;
        else if (b == mx) out "The Bobcat is the dominant species" endl;
        else if (c == mx) out "The Coyote is the dominant species" endl;
        else if (m == mx) out "The Mountain Lion is the dominant species" endl;
        else out "The Wolf is the dominant species" endl;
    }

    return 0;
}