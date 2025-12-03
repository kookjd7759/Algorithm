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

struct Player {
    int bib;
    int p, q, r;
    int sum;
    int prod;
};

int main() {
    Sync;
    int n;
    in n;
    vector<Player> v(n);
    Fori(n) {
        in v[i].bib >> v[i].p >> v[i].q >> v[i].r;
        v[i].sum = v[i].p + v[i].q + v[i].r;
        v[i].prod = v[i].p * v[i].q * v[i].r;
    }
    sort(v.begin(), v.end(), [](const Player& a, const Player& b) {
        if (a.prod != b.prod) return a.prod < b.prod;
        if (a.sum != b.sum) return a.sum < b.sum;
        return a.bib < b.bib;
    });
    out v[0].bib spc v[1].bib spc v[2].bib;
}
