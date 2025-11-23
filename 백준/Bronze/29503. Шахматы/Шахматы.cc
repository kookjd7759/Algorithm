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

    string board[8];
    Fori(8) in board[i];

    int n;
    in n;

    string ans;
    ans.reserve(n);

    Fori(n) {
        string mv;
        in mv;
        int fc = mv[0] - 'a';
        int fr = mv[1] - '0';
        int tc = mv[2] - 'a';
        int tr = mv[3] - '0';

        int fromRow = 8 - fr;
        int fromCol = fc;
        int toRow = 8 - tr;
        int toCol = tc;

        char piece = board[fromRow][fromCol];
        ans.push_back(piece);
        board[fromRow][fromCol] = '.';
        board[toRow][toCol] = piece;
    }

    out ans endl;

    return 0;
}
