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
    int N, Nlines;
    in N >> Nlines;
    vector<int> total(N + 1, 0);
    vector<int> start(N + 1, -1);
    Fori(Nlines) {
        int c, h, m;
        string kw;
        in c >> kw >> h >> m;
        int t = h * 60 + m;
        if (kw == "START") {
            start[c] = t;
        } else {
            total[c] += t - start[c];
            start[c] = -1;
        }
    }
    For1i(N) {
        int h = total[i] / 60;
        int m = total[i] % 60;
        out h spc m << "\n";
    }
}
