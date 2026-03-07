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

    int n, m; in n >> m;
    vector<string> p(n), c(n);
    Fori(n) in p[i];
    Fori(n) in c[i];

    Fori(n) Forj(m){
        int x = c[i][j] - '0';
        if(p[i][j] == '.') continue;
        if(p[i][j] == 'R' && !(x & 1)){ out "incorrect" endl; return 0; }
        if(p[i][j] == 'G' && !(x & 2)){ out "incorrect" endl; return 0; }
        if(p[i][j] == 'B' && !(x & 4)){ out "incorrect" endl; return 0; }
    }

    out "correct" endl;

    return 0;
}