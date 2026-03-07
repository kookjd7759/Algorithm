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

struct Player{
    int r;
    string name;
};

int main() {
    Sync;

    int n; in n;
    vector<Player> v(n);
    unordered_map<string,int> mp;
    Fori(n){
        in v[i].r >> v[i].name;
        mp[v[i].name] = i;
    }

    int m; in m;
    Fori(m){
        string a, b; int x; in a >> b >> x;
        int ia = mp[a], ib = mp[b];
        int ra = v[ia].r, rb = v[ib].r;

        long double ea = 1.0L / (1.0L + pow((long double)10.0, ((long double)rb - ra) / 400.0L));
        long double eb = 1.0L / (1.0L + pow((long double)10.0, ((long double)ra - rb) / 400.0L));

        long double sa = (x == 1 ? 1.0L : (x == 0 ? 0.5L : 0.0L));
        long double sb = (x == 2 ? 1.0L : (x == 0 ? 0.5L : 0.0L));

        int na = (int)floor((long double)ra + 15.0L * (sa - ea));
        int nb = (int)floor((long double)rb + 15.0L * (sb - eb));

        v[ia].r = max(0, na);
        v[ib].r = max(0, nb);
    }

    sort(v.begin(), v.end(), [&](const Player& a, const Player& b){
        if(a.r != b.r) return a.r > b.r;
        return a.name < b.name;
    });

    Fori(n) out v[i].r spc v[i].name endl;

    return 0;
}