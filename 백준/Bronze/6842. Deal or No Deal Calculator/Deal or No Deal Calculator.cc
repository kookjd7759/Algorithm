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

    vector<int> v = {100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000};
    vector<int> chk(11, 0);

    int n; in n;
    Fori(n) {
        int x; in x;
        chk[x] = 1;
    }

    int offer; in offer;
    ll sum = 0, cnt = 0;
    For1i(10) if (!chk[i]) sum += v[i - 1], ++cnt;

    if (offer > (double)sum / cnt) out "deal" endl;
    else out "no deal" endl;

    return 0;
}