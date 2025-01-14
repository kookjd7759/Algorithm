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

    int n, cnt_a(0), cnt_b(0); in n;
    string a, b; in a >> b;
    Fori(n) {
        if (a[i] == b[i]) continue;
        if (a[i] == 'R') b[i] == 'S' ? ++cnt_a : ++cnt_b;
        else if (a[i] == 'S') b[i] == 'P' ? ++cnt_a : ++cnt_b;
        else if (a[i] == 'P') b[i] == 'R' ? ++cnt_a : ++cnt_b;
    }
    out cnt_a spc cnt_b;
}