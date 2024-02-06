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

    int h, w, n; in h >> w >> n;
    char** board = new char*[h + 1];
    Fori(h + 1) {
        board[i] = new char[w + 1];
        fill_n(board[i], w + 1, '.');
    }
    Fori(n) {
        int r1, c1, r2, c2;
        in r1 >> c1 >> r2 >> c2;
        for (int j = r1; j <= r2; j++)
            board[j][c1] = char('a' + i);
        for (int j = r1; j <= r2; j++)
            board[j][c2] = char('a' + i);
        for (int j = c1; j <= c2; j++)
            board[r1][j] = char('a' + i);
        for (int j = c1; j <= c2; j++)
            board[r2][j] = char('a' + i);
    }
    For1i(h) {
        For1j(w) out board[i][j];
        ent;
    }
}