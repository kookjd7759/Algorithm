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

bool isSame(int a[4][4], int b[4][4]) {
	Fori(4) Forj(4) if (a[i][j] != b[i][j]) return false;
	return true;
}

struct MoveData {
	int count = 0, maxi = 0;

	void add(int n) { count++; maxi = max(maxi, n); }
	void add(MoveData md) { count += md.count; maxi = max(maxi, md.maxi); }

	int evaluation() {
		int score = (8 << count) + maxi;
		return score;
	}
};

class Game2048 {
public:
	int board[4][4];

	MoveData moveLine(Dir dir, int idx) {
		int dest;
		MoveData moveData;

		if (dir == LEFT) {
			dest = 0;
			for (int i = 1; i < 4; i++) {
				if (!board[idx][i]) continue;

				if (!board[idx][dest]) board[idx][dest] = board[idx][i];
				else {
					if (board[idx][dest] & board[idx][i]) {
						moveData.add(board[idx][dest]);
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
						moveData.add(board[idx][dest]);
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
						moveData.add(board[dest][idx]);
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
						moveData.add(board[dest][idx]);
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

		return moveData;
	}
	MoveData move(Dir dir) {
		MoveData moveData;
		Fori(4) moveData.add(moveLine(dir, i));
		return moveData;
	}
	vector<Dir> getLegalMove() {
		vector<Dir> vec;
		for (Dir dir = UP; dir < DIR_NUM; ++dir) {
			int temp[4][4]; memcpy(temp, board, sizeof(board));
			move(dir);
			if (!isSame(temp, board)) vec.push_back(dir);
			memcpy(board, temp, sizeof(temp));
		}
		return vec;
	}

	int search(Dir dir) {
		int score(0);

		int temp[4][4]; memcpy(temp, board, sizeof(board));
		score = move(dir).evaluation();
		memcpy(board, temp, sizeof(temp));
		return score;

		return score;
	}

	Dir findBestMove() {
		//print();
		vector<Dir> legalMove = getLegalMove();
		Dir bestDir = legalMove[0];
		int bestScore(0);

		for (const Dir& dir : legalMove) {
			int temp[4][4]; memcpy(temp, board, sizeof(board));
			int score = search(dir);
			//out dir_to_string[dir] spc search(dir, 0) << "\n";
			if (bestScore < score) {
				bestDir = dir;
				bestScore = score;
			}
			memcpy(board, temp, sizeof(board));
		}

		return bestDir;
	}

	void init() { Fori(4) Forj(4) board[i][j] = 0; }
	Game2048() { init(); }
	void print() {
		out "┌────────────\n";
		Fori(4) {
			out "│";
			Forj(4) out board[i][j] << ' ';
			ent;
		}
		out "└────────────\n";
	}

	void start() {
		while (true) {
			int pos; in pos; pos--;
			if (pos == -2) return;
			board[pos / 4][pos % 4] = 2;
			Dir moveDir = findBestMove();
			move(moveDir);
			out dir_to_string[moveDir] << endl;
			//print();
		}
	}

	void selfTest(int size) {
		int emptySize(16), sum(0);
		Fori(size) {
			init();
			while (true) {
				int pos = getCreatePos(); pos--;
				board[pos / 4][pos % 4] = 2;
				if (isEnd()) break;
				Dir moveDir = findBestMove();
				move(moveDir);
			}
			int score = getScore();
			sum += score;
		}
		out "score :" spc(sum / size);
	}
	int getScore() const {
		int score(0);
		Fori(4) Forj(4) score = max(score, board[i][j]);
		return score;
	}
	int getSize() const {
		int cnt(0);
		Fori(4) Forj(4) if (!board[i][j]) cnt++;
		return cnt;
	}
	int getCreatePos() const {
		random_device rd; mt19937 gen(rd());
		uniform_int_distribution<> dis(1, getSize());
		int cnt(0), rand(dis(gen));
		Fori(4) Forj(4) {
			if (!board[i][j]) cnt++;
			if (cnt == rand) return (i * 4 + j + 1);
		}
	}
	bool isEnd() {
		vector<Dir> legalMove = getLegalMove();
		return !legalMove.size();
	}
};

int main() {
	Interactive;

	Game2048 game;
	// game.selfTest(16);
	game.start();
}