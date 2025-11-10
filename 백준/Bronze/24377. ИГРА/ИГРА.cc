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

    vector<int> a(4);
    Fori(4) in a[i];
    vector<int> miss;
    for (int x = 1; x <= 4; ++x) {
        bool ok = false;
        Fori(4) if (a[i] == x) { ok = true; break; }
        if (!ok) miss.push_back(x);
    }
    int zeros = 0, idx = -1;
    Fori(4) if (a[i] == 0) { ++zeros; idx = i; }
    if (zeros == 1) {
        out idx + 1 spc miss[0] << "\n";
    }
    else if (zeros == 2) {
        if (miss[0] > miss[1]) swap(miss[0], miss[1]);
        out miss[0] spc miss[1] << "\n";
    }
    else {
        out a[0] spc a[1] << "\n";
    }
    return 0;
}
