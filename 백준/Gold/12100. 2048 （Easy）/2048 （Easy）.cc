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
	DIR_NUM, DIR_NULL
};
Dir& operator++(Dir& d) { d = (Dir)(d + 1); return d; }
constexpr inline Dir opposite(const Dir& d) {
	if (d == UP) return DOWN;
	else if (d == LEFT) return RIGHT;
	else if (d == RIGHT) return LEFT;
	else if (d == DOWN) return UP;
	else return DIR_NULL;
}

struct Board {
	int** board = nullptr;
	int size = 0, maxi = 0;
	Dir prevMove = DIR_NULL;
	bool prevJoin = false;

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

	void moveLine(Dir dir, int idx) {
		int dest, cnt(0);
		bool join = false;
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
						join = true;
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
		else if (dir == RIGHT) {
			dest = size - 1;
			for (int i = size - 2; i >= 0; i--) {
				if (!board[idx][i]) continue;

				if (!board[idx][dest]) board[idx][dest] = board[idx][i];
				else {
					if (board[idx][dest] & board[idx][i]) {
						board[idx][dest] <<= 1;
						maxi = max(maxi, board[idx][dest]);
						dest--;
						join = true;
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
		else if (dir == UP) {
			dest = 0;
			for (int i = 1; i < size; i++) {
				if (!board[i][idx]) continue;

				if (!board[dest][idx]) board[dest][idx] = board[i][idx];
				else {
					if (board[dest][idx] & board[i][idx]) {
						board[dest][idx] <<= 1;
						maxi = max(maxi, board[dest][idx]);
						dest++;
						join = true;
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
						join = true;
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

		prevJoin = join;
	}
	void move(Dir dir) {
		Fori(size) moveLine(dir, i);

		prevMove = dir;
	}

	bool operator==(const Board& other) const {
		Fori(size) Forj(size) if (board[i][j] != other.board[i][j]) return false;
		return true;
	}
};

int maxi(0);

void DFS(Board& board, int cnt) {
	maxi = max(maxi, board.maxi);

	if (!cnt) return;

	for (Dir dir = UP; dir < DIR_NUM; ++dir) {
		if (!board.prevJoin && opposite(board.prevMove) == dir) continue;
		Board next(board);
		next.move(dir);
		if (board == next) continue;
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