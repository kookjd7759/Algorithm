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

    int T;
    in T;
    For1i(T) {
        int m; in m;
        vector<string> words(m);
        Fori(m) in words[i];

        int n; in n;
        out "Scenario #" << i << ":\n";
        Fori(n) {
            int k; in k;
            string pw;
            Forj(k) {
                int idx; in idx;
                pw += words[idx];
            }
            out pw << "\n";
        }
        if (i != T) ent;
    }
    return 0;
}
