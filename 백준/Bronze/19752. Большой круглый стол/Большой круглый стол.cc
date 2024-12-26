#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

int main() {
    Sync;

    int n, k; in n >> k;
    int maxi;
    if (n & 1) {
        cout << min(n, k + 1);
    }
    else {
        cout << min(n / 2, k + 1);
    }
}
/*
* 5
* 5 5
* 4 5
* 3 4
* 2 3
* 1 2
* 
* 4
* 6 2
* 5 2
* 4 2
* 3 2
* 2 2
* 1 2
* 
* 6
* 
* 
*/