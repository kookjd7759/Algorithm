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

    const ll MOD = 1000000007LL;
    int L; string S; in L; in S;
    ll A = 0, C = 0, G = 0, T = 0;
    Fori(L) {
        if (S[i] == 'A') A++;
        else if (S[i] == 'C') C++;
        else if (S[i] == 'G') G++;
        else T++;
    }
    out (((A % MOD) * (C % MOD) % MOD) * ((G % MOD) * (T % MOD) % MOD) % MOD) endl;

    return 0;
}
