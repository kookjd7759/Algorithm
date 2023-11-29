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

    int n, ret(0); char c;
    in n >> c;
    Fori(4 * n) {
        string st; in st;
        if (st[0] == 'A') ret += 11;
        else if (st[0] == 'K') ret += 4;
        else if (st[0] == 'Q') ret += 3;
        else if (st[0] == 'J') ret += (st[1] == c ? 20 : 2);
        else if (st[0] == 'T') ret += 10;
        else if (st[0] == '9' && st[1] == c) ret += 14;
    }

    out ret;
}