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

    int R, C; in R >> C;
    vector<vector<int>> a(C, vector<int>(R)), b(R, vector<int>(C)), c(R, vector<int>(C));
    Fori(C) Forj(R) in a[i][j];
    Fori(R) Forj(C) in b[i][j];
    Fori(R) Forj(C) c[i][j] = a[C - 1 - j][i];

    if (b == c) {
        out "|>___/|        /}" endl;
        out "| O < |       / }" endl;
        out "(==0==)------/ }" endl;
        out "| ^  _____    |" endl;
        out "|_|_/     ||__|" endl;
    } else {
        out "|>___/|     /}" endl;
        out "| O O |    / }" endl;
        out "( =0= )\"\"\"\"  \\" endl;
        out "| ^  ____    |" endl;
        out "|_|_/    ||__|" endl;
    }

    return 0;
}