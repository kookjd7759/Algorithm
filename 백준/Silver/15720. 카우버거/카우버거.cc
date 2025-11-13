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

    int B, C, D;
    in B >> C >> D;
    vector<int> burger(B), side(C), drink(D);
    ll total = 0;
    Fori(B) { in burger[i]; total += burger[i]; }
    Fori(C) { in side[i]; total += side[i]; }
    Fori(D) { in drink[i]; total += drink[i]; }

    sort(burger.begin(), burger.end(), greater<int>());
    sort(side.begin(), side.end(), greater<int>());
    sort(drink.begin(), drink.end(), greater<int>());

    int sets = min(B, min(C, D));
    ll discount = 0;
    Fori(sets) {
        int sumSet = burger[i] + side[i] + drink[i];
        discount += sumSet / 10;
    }

    ll after = total - discount;

    out total endl;
    out after endl;

    return 0;
}
