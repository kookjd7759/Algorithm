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

    int n, m; in n >> m;
    int a[60]; a[0] = 1; a[1] = 1;
    for (int i = 2; i < 60; ++i) a[i] = (a[i - 1] + a[i - 2]) % 10;

    int L = m - n + 1;
    string ans; ans.reserve(L);
    for (int i = n; i <= m; ++i) ans.push_back(char('0' + a[(i - 1) % 60]));
    out ans endl;

    return 0;
}
