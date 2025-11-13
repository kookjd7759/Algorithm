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
    int** map = new int* [n + 2];
    Fori(n + 2) {
        map[i] = new int[n + 2];
        Forj(n + 2) map[i][j] = 0;
    }

    For1i(n) For1j(n) {
        char c; in c;
        if (c == '.') map[i][j] = 0;
        else map[i][j] = c - '0';
    }

    int dir8[8][2] = {  {0,1},{0,-1},{1,0},{-1,0},{1, - 1},{1,1},{-1,-1},{-1,1}  };
    For1i(n) {
        For1j(n) {
            if (map[i][j] > 0) out '*';
            else {
                int sum(0);
                Fork(8) sum += map[i + dir8[k][0]][j + dir8[k][1]];
                if (sum > 9) out 'M';
                else out sum;
            }
        }
        ent;
    }
}
