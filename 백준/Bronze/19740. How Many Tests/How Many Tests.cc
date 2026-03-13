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
    vector<string> a(k);
    Fori(k) in a[i];

    int L = a[0].size();
    ll mx = 0, p = 1;
    Fori(k) mx = max(mx, stoll(a[i]));
    Fori(L) p *= 10;

    ll mn = max(mx, L == 1 ? 1LL : p / 10);
    ll mxn = p - 1;

    out mn spc mxn endl;

    return 0;
}