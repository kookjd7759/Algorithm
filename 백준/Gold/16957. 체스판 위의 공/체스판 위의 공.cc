#include <bits/stdc++.h>
#include <random>

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
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)
#define nonecountingTC int tc; in tc; while(tc--) 
#define countingTC int tc; in tc; for (int TCcounter = 1; TCcounter <= tc; TCcounter++) 

using namespace std;

enum Dir {  L, LU, U, RU, R, RD, D, LD, DIR_NUM, END };
Dir& operator++(Dir& d) {
    d = (Dir)(d + 1);
    return d;
}
constexpr Dir opposite[8]{R, RD, D, LD, L, LU, U, RU};
constexpr int dir8[8][2]{ {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1} };

int** board_ori;
Dir** board_dir;
int r, c;

void init() {
    in r >> c;
    board_ori = new int* [r];  Fori(r) board_ori[i] = new int[c];
    board_dir = new Dir * [r]; Fori(r) board_dir[i] = new Dir[c];
    
    Fori(r) Forj(c) in board_ori[i][j];
}

inline bool isSafe(int x, int y) { return (x >= 0 && x < r && y >= 0 && y < c); }

int main() {
    Sync;

    init();
    vector<pair<int, int>> endPos;
    Fori(r) Forj(c) {
        Dir miniDir(END);
        int mini(board_ori[i][j]);
        for (Dir dir = L; dir < DIR_NUM; ++dir) {
            int x = i + dir8[dir][0], y = j + dir8[dir][1];
            if (isSafe(x, y) && mini > board_ori[x][y]) {
                mini = board_ori[x][y];
                miniDir = dir;
            }
        }
        
        board_dir[i][j] = miniDir;

        if (miniDir == END) endPos.push_back(make_pair(i, j));
    }

    for (pair<int, int> target : endPos) {
        stack<pair<int, int>> st;
        st.push(target);
        board_ori[target.first][target.second] = 1;
        while (!st.empty()) {
            pair<int, int> pos = st.top(); st.pop();
            for (Dir dir = L; dir < DIR_NUM; ++dir) {
                int x = pos.first + dir8[dir][0], y = pos.second + dir8[dir][1];
                if (isSafe(x, y) && board_ori[x][y] != -1 &&
                    board_dir[x][y] == opposite[dir]) {
                    board_ori[x][y] = -1;
                    board_ori[target.first][target.second]++;
                    st.push(make_pair(x, y));
                }
            }
        }
    }

    Fori(r) {
        Forj(c) out(board_ori[i][j] == -1 ? 0 : board_ori[i][j]) << ' ';
        ent;
    }
}