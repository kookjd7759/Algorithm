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

    int a, b; in a >> b;
    vector<string> g(a);
    Fori(a) in g[i];

    auto ok_after_remove_row = [&](int rm) -> bool {
        char ref = 0;
        for (int i = 0; i < a; ++i) if (i != rm) {
            for (int j = 0; j < b; ++j) {
                char c = g[i][j];
                if (ref == 0) ref = c;
                else if (c != ref) return false;
            }
        }
        return true;
        };

    auto ok_after_remove_col = [&](int rm) -> bool {
        char ref = 0;
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < b; ++j) if (j != rm) {
                char c = g[i][j];
                if (ref == 0) ref = c;
                else if (c != ref) return false;
            }
        }
        return true; 
        };

    for (int r = 0; r < a; ++r) {
        if (ok_after_remove_row(r)) {
            out "Yes\n";
            return 0;
        }
    }
    for (int c = 0; c < b; ++c) {
        if (ok_after_remove_col(c)) {
            out "Yes\n";
            return 0;
        }
    }
    out "No\n";
}