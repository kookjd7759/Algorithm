#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
    Sync;

    int T; in T;
    For1k(T) {
        out "Data Set " << k << ":\n";
        int n, m, ret(0);
        string st;
        in n >> m >> st;
        bool* ch = new bool[m];
        fill_n(ch, m, true);
        Fori(n) {
            string t; in t;
            Forj(m) if (st[j] == t[j]) ch[j] = false;
        }
        Fori(m) ret += ch[i];
        out ret << '/' << m;
        ent; ent;
    }
}