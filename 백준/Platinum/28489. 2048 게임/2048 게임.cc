#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
// #define endl << "\n"
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
	UP, DOWN, LEFT, RIGHT, DIR_NUM, DIR_NULL
};
string dir_to_string[4]{ "UP", "DOWN", "LEFT", "RIGHT" };
Dir& operator++(Dir& d) { d = (Dir)(d + 1); return d; }

class Game2048 {
private:
	int board[4][4];

	int moveLine(Dir dir, int idx) {
		int dest, cnt(0), score(0);

		if (dir == LEFT) {
			dest = 0;
			for (int i = 1; i < 4; i++) {
				if (!board[idx][i]) continue;

				if (!board[idx][dest]) board[idx][dest] = board[idx][i];
				else {
					if (board[idx][dest] & board[idx][i]) {
						score += board[idx][dest];
						board[idx][dest] <<= 1;
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
		else if (dir == RIGHT) {
			dest = 3;
			for (int i = 2; i >= 0; i--) {
				if (!board[idx][i]) continue;

				if (!board[idx][dest]) board[idx][dest] = board[idx][i];
				else {
					if (board[idx][dest] & board[idx][i]) {
						score += board[idx][dest];
						board[idx][dest] <<= 1;
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
		else if (dir == UP) {
			dest = 0;
			for (int i = 1; i < 4; i++) {
				if (!board[i][idx]) continue;

				if (!board[dest][idx]) board[dest][idx] = board[i][idx];
				else {
					if (board[dest][idx] & board[i][idx]) {
						score += board[idx][dest];
						board[dest][idx] <<= 1;
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
			dest = 3;
			for (int i = 2; i >= 0; i--) {
				if (!board[i][idx]) continue;

				if (!board[dest][idx]) board[dest][idx] = board[i][idx];
				else {
					if (board[dest][idx] & board[i][idx]) {
						score += board[idx][dest];
						board[dest][idx] <<= 1;
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

		return score;
	}
	int move(Dir dir) {
		int score(0);
		Fori(4) score += moveLine(dir, i);
		return score;
	}
	Dir findBestMove() {
		Dir bestDir(DIR_NULL);
		int bestScore(0);
		for (Dir dir = UP; dir < DIR_NUM; ++dir) {
			int temp[4][4]; memcpy(temp, board, sizeof(board));
			int score = move(dir);
			if (bestScore < score) {
				bestDir = dir;
				bestScore = score;
			}
			memcpy(board, temp, sizeof(temp));
		}

		if (bestDir == DIR_NULL) {
			bestDir = UP;
		}

		return bestDir;
	}

public:
	Game2048(){ Fori(4) Forj(4) board[i][j] = 0; }

	void print() {
		int cur_score(0);
		Fori(4) {
			Forj(4) out board[i][j] << ' ', cur_score = max(cur_score, board[i][j]);
			ent;
		}
		out "current score : " << cur_score << "\n";
	}

	void start() {
		// print();
		while (true) {
			int create; in create; create--;
			if (create == -2) return;
			board[create / 4][create % 4] = 2;
			Dir moveDir = findBestMove();
			out dir_to_string[moveDir] << endl;
			move(moveDir);
			// print();
		}
	}
};

int main() {
	Interactive;

	Game2048 game;
	game.start();
}