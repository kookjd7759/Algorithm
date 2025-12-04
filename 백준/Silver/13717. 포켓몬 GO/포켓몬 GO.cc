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

struct monster {
    string name;
    int need;
    int have;
    int evol_cnt = 0;
};

int get_evolution(monster m) {
    int cnt(0);
    while (true) {
        if (m.have / m.need == 0) break;
        int evol = m.have / m.need;
        cnt += evol;
        m.have %= m.need;
        m.have += evol * 2;
    }
    return cnt;
}

int main() {
    Sync;

    int n; in n;
    monster* monsters = new monster[n];
    Fori(n) in monsters[i].name >> monsters[i].need >> monsters[i].have;
    
    int maxi(-1), sum(0);
    Fori(n) {
        monsters[i].evol_cnt = get_evolution(monsters[i]);
        maxi = max(maxi, monsters[i].evol_cnt);
        sum += monsters[i].evol_cnt;
    }
    Fori(n) if (maxi == monsters[i].evol_cnt) {
        out sum endl;
        out monsters[i].name;
        break;
    }
}
