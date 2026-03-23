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

    vector<string> a(3);
    Fori(3) in a[i];

    Fori(3) if (a[i][0] != '.' && a[i][0] == a[i][1] && a[i][1] == a[i][2]) {
        out "YES" endl;
        return 0;
    }
    Fori(3) if (a[0][i] != '.' && a[0][i] == a[1][i] && a[1][i] == a[2][i]) {
        out "YES" endl;
        return 0;
    }
    if (a[1][1] != '.' && ((a[0][0] == a[1][1] && a[1][1] == a[2][2]) || (a[0][2] == a[1][1] && a[1][1] == a[2][0]))) {
        out "YES" endl;
        return 0;
    }

    out "NO" endl;

    return 0;
}