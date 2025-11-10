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

    long long N; in N;
    vector<int> res;
    long long t = N / 3, r = N % 3;
    if (r == 0) {
        Fori(t) res.push_back(3);
    } else if (r == 2) {
        Fori(t) res.push_back(3);
        res.push_back(2);
    } else { // r == 1
        if (t >= 1) {
            Fori(t - 1) res.push_back(3);
            res.push_back(2);
            res.push_back(2);
        }
    }
    out (int)res.size() << "\n";
    Fori(res.size()) {
        if (i) cout << ' ';
        out res[i];
    }
    ent;
    return 0;
}
