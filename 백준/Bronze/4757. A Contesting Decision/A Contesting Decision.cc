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

    int n; in n;
    string ansName = "";
    int ansSolved = -1, ansPenalty = (int)1e9;

    Fori(n) {
        string name; in name;
        int solved = 0, penalty = 0;
        Forj(4) {
            int sub, tim; in sub >> tim;
            if (tim > 0) solved++, penalty += tim + (sub - 1) * 20;
        }
        if (solved > ansSolved || (solved == ansSolved && penalty < ansPenalty)) ansName = name, ansSolved = solved, ansPenalty = penalty;
    }

    out ansName spc ansSolved spc ansPenalty endl;

    return 0;
}