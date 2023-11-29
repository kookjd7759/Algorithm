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

    bool cube[7][7][7]; memset(cube, false, sizeof cube);
    int n, m; in n >> m;
    Fori(m) {
        int x, y, z; in x >> y >> z;
        cube[x][y][z] = true;
    }

    int ret(0);
    For1i(n) For1j(n) For1k(n)
        if (cube[i][j][k] &&
            (cube[i + 1][j][k] && cube[i - 1][j][k] &&
                cube[i][j + 1][k] && cube[i][j - 1][k] &&
                cube[i][j][k + 1] && cube[i][j][k - 1]))
            ret++;

    out ret;
}