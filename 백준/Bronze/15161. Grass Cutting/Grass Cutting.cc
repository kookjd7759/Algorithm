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

    int k; in k;
    vector<vector<int>> a(10, vector<int>(10, 1));
    while (k--) {
        vector<int> r(3), c(3);
        Fori(3) in r[i], r[i]--;
        Fori(3) in c[i], c[i]--;
        Fori(10) Forj(10) a[i][j]++;
        vector<int> rr(10), cc(10);
        Fori(3) rr[r[i]] = 1;
        Fori(3) cc[c[i]] = 1;
        Fori(10) Forj(10) if (rr[i] || cc[j]) a[i][j] = 1;
    }
    Fori(10) {
        Forj(10) out a[i][j] << (j == 9 ? '\n' : ' ');
    }

    return 0;
}