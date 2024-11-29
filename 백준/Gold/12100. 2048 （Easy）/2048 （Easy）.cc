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
#define nonecountingTC int tc; in tc; while(tc--) 
#define countingTC int tc; in tc; for (int TCcounter = 1; TCcounter <= tc; TCcounter++) 

using namespace std;

enum Dir {
	UP, LEFT, RIGHT, DOWN,
	DIR_NUM
};
Dir& operator++(Dir& d) { d = (Dir)(d + 1); return d; }

struct Board {
	int** board = nullptr;
	int size = 0, maxi = 0;
	void init() {
		in size;
		board = new int* [size];
		Fori(size) board[i] = new int[size];
		Fori(size) Forj(size) in board[i][j], maxi = max(maxi, board[i][j]);
	}
	Board() {}
	Board(const Board& other) {
		size = other.size;
		maxi = other.maxi;
		board = new int* [size];
		Fori(size) board[i] = new int[size];
		Fori(size) Forj(size) board[i][j] = other.board[i][j];
	}

	void row_move(Dir dir, int idx) {
		int dest, cnt(0);
		if (dir == LEFT) {
			dest = 0;
			for (int i = 1; i < size; i++) {
				if (!board[idx][i]) continue;

				if (!board[idx][dest]) board[idx][dest] = board[idx][i];
				else {
					if (board[idx][dest] & board[idx][i]) {
						board[idx][dest] <<= 1;
						maxi = max(maxi, board[idx][dest]);
						dest++;
					}
					else {
						dest++;
						if (dest == i) continue;
						board[idx][dest] = board[idx][i];
					}
				}
				board[idx][i] = 0;
			}
		}
		else {
			dest = size - 1;
			for (int i = size - 2; i >= 0; i--) {
				if (!board[idx][i]) continue;

				if (!board[idx][dest]) board[idx][dest] = board[idx][i];
				else {
					if (board[idx][dest] & board[idx][i]) {
						board[idx][dest] <<= 1;
						maxi = max(maxi, board[idx][dest]);
						dest--;
					}
					else {
						dest--;
						if (dest == i) continue;
						board[idx][dest] = board[idx][i];
					}
				}
				board[idx][i] = 0;
			}
		}
	}
	void col_move(Dir dir, int idx) {
		int dest, cnt(0);
		if (dir == UP) {
			dest = 0;
			for (int i = 1; i < size; i++) {
				if (!board[i][idx]) continue;

				if (!board[dest][idx]) board[dest][idx] = board[i][idx];
				else {
					if (board[dest][idx] & board[i][idx]) {
						board[dest][idx] <<= 1;
						maxi = max(maxi, board[dest][idx]);
						dest++;
					}
					else {
						dest++;
						if (dest == i) continue;
						board[dest][idx] = board[i][idx];
					}
				}
				board[i][idx] = 0;
			}
		}
		else {
			dest = size - 1;
			for (int i = size - 2; i >= 0; i--) {
				if (!board[i][idx]) continue;

				if (!board[dest][idx]) board[dest][idx] = board[i][idx];
				else {
					if (board[dest][idx] & board[i][idx]) {
						board[dest][idx] <<= 1;
						maxi = max(maxi, board[dest][idx]);
						dest--;
					}
					else {
						dest--;
						if (dest == i) continue;
						board[dest][idx] = board[i][idx];
					}
				}
				board[i][idx] = 0;
			}
		}
	}
	void move(Dir dir) {
		if (dir == UP || dir == DOWN) Fori(size) col_move(dir, i);
		else Fori(size) row_move(dir, i);
	}
};

int maxi(0);

void DFS(Board& board, int cnt) {
	maxi = max(maxi, board.maxi);

	if (!cnt) return;

	for (Dir dir = UP; dir < DIR_NUM; ++dir) {
		Board next(board);
		next.move(dir);
		DFS(next, cnt - 1);
	}
}

int main() {
	Sync;

	int SIZE = 5;
	Board board; board.init();
	DFS(board, SIZE);
	out maxi;
}