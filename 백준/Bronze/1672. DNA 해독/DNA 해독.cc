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

int id(char c){ if(c=='A') return 0; if(c=='G') return 1; if(c=='C') return 2; return 3; }

int main() {
    Sync;

    int N; string s; in N >> s;
    static char tbl[4][4] = {
        {'A','C','A','G'},
        {'C','G','T','A'},
        {'A','T','C','G'},
        {'G','A','G','T'}
    };

    char cur = s.back();
    for (int i = N-2; i >= 0; --i) cur = tbl[id(s[i])][id(cur)];
    out cur << "\n";
}
