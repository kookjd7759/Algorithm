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

    int tc; in tc;
    while (tc--) {
        int r, c; in r >> c;
        char** board = new char* [r + 2];
        Fori(r + 2) {
            board[i] = new char[c + 2];
            memset(board[i], '.', sizeof(char) * (c + 2));
        }
        For1i(r) For1j(c) in board[i][j];

        int cnt(0);
        For1i(r) For1j(c) {
            if ((board[i][j - 1] == '>' && board[i][j] == 'o' && board[i][j + 1] == '<') ||
                (board[i - 1][j] == 'v' && board[i][j] == 'o' && board[i + 1][j] == '^'))
                ++cnt;
        }
        out cnt endl;
    }
}