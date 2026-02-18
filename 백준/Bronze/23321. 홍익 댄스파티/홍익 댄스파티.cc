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

    string s[5]; Fori(5) in s[i];
    int m = (int)s[0].size();
    string t[5]; Fori(5) t[i] = string(m, ' ');
    string A = ".omln", B = "owln.", C = "..oLn";
    Forj(m) {
        string col = ""; Fori(5) col.push_back(s[i][j]);
        string nxt = (col == A ? B : (col == B ? A : C));
        Fori(5) t[i][j] = nxt[i];
    }
    Fori(5) out t[i] endl;

    return 0;
}
