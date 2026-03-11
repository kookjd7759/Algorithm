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

    int n, m, r; in n >> m >> r;
    vector<int> pnd(n, 0), ord(n);
    Fori(n) {
        string s; in s;
        ord[i] = i;
        for(char c : s) if(c == 'P') ++pnd[i];
    }

    int tot = 0;
    Fori(n) tot += pnd[i];

    Fori(tot) {
        string x, y; in x >> y;

        int idx = -1;
        for(int j = n - 1; j >= 0; --j) if(pnd[ord[j]] > 0) { idx = j; break; }

        int id = ord[idx];
        --pnd[id];

        if(y[3] == 'w') continue;

        int yc = 0;
        for(char c : y) if(c == 'y') ++yc;
        int pass = yc - 3;

        ord.erase(ord.begin() + idx);
        ord.insert(ord.begin() + idx - pass, id);
    }

    Fori(n) if(ord[i] == r - 1) {
        out i + 1 endl;
        break;
    }

    return 0;
}