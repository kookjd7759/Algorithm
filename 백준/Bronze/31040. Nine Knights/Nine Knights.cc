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

int moveX[8]{ -2, -2, -1, -1, 1, 1, 2, 2 };
int moveY[8]{ -1, 1, -2, 2, -2, 2, -1, 1 };

int main() {
    Sync;

    auto boundaryCheck = [&](int x, int y) -> bool {
        if (x < 0 || 5 <= x) return false;
        if (y < 0 || 5 <= y) return false;
        return true;
        };

    Testcase{
    bool board[5][5];
    Fori(5) Forj(5) {
        char c; in c;
        board[i][j] = (c == 'k' ? true : false);
    }

    bool ch = true;
    Fori(5) Forj(5) {
        if (board[i][j]) {
            Fork(8) {
                int x = i + moveX[k];
                int y = j + moveY[k];
                if (boundaryCheck(x, y) && board[x][y]) 
                    ch = false;
            }
        }
    }
    
    if (ch) out "valid\n";
    else out "invalid\n";

    }
}