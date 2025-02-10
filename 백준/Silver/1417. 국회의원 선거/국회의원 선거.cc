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

    int n, target, cnt(0); in n >> target;
    map<int, int> map;
    int maxi(-1);
    Fori(n - 1) {
        int a; in a;
        maxi = max(maxi, a);
        map.count(a) ? ++map[a] : map[a] = 1;
    }

    while (true) {
        if (maxi < target) break;

        ++target;
        ++cnt;
        --map[maxi];
        map.count(maxi - 1) ? ++map[maxi - 1] : map[maxi - 1] = 1;
        if (map[maxi] == 0) {
            map.erase(maxi);
            --maxi;
        }
    }

    out cnt;
}