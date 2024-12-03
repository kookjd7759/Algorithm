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
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)
#define nonecountingTC int tc; in tc; while(tc--) 
#define countingTC int tc; in tc; for (int TCcounter = 1; TCcounter <= tc; TCcounter++) 

using namespace std;

enum Dir {
	UP, LEFT, DOWN, RIGHT, DIR_NUM, DIR_NULL
};
string dir_to_string[4]{ "UP", "LEFT", "DOWN", "RIGHT" };
Dir& operator++(Dir& d) { d = (Dir)(d + 1); return d; }

bool isSame(int a[4][4], int b[4][4]) {
	Fori(4) Forj(4) if (a[i][j] != b[i][j]) return false;
	return true;
}

struct MoveData {
	int count = 0, maxi = 0;

	void add(int n) { count++; maxi = max(maxi, n); }
	void add(MoveData md) { count += md.count; maxi = max(maxi, md.maxi); }
};

int mono_weight;
int monoMinus;
int monoPlus;
int board_weight[4][4];
void init_weight(int value[10]) {
	mono_weight = value[0];
	monoMinus = value[1];
	monoPlus = value[2];

	board_weight[0][0] = value[0];

	board_weight[1][0] = value[1];
	board_weight[0][1] = value[1];

	board_weight[2][0] = value[2];
	board_weight[2][2] = value[2];
	board_weight[0][2] = value[2];

	board_weight[3][0] = value[3];
	board_weight[2][1] = value[3];
	board_weight[1][2] = value[3];
	board_weight[0][3] = value[3];

	board_weight[1][2] = value[4];
	board_weight[2][2] = value[4];
	board_weight[2][1] = value[4];

	board_weight[2][3] = value[5];
	board_weight[3][2] = value[5];

	board_weight[3][3] = value[6];
}

class Game2048 {
public:
	int board[4][4];
	inline bool isSafe(int x, int y) const { return (x >= 0 && x < 4 && y >= 0 && y < 4); }

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

	int board_score() {
		int score(0);
		Fori(4) Forj(4) score += board[i][j] * board_weight[i][j];
		return score;
	}
	int BitDiff(int a, int b) {
		int cnt(0);
		while (a != b) {
			cnt++; b <<= 1;
		}
		return cnt;
	}
	int monotonic_score() {
		int score(0);
		auto cal = [&](int i, int j, int x, int y) {
			if (isSafe(x, y) && board[x][y]) {
				if (board[i][j] < board[x][y]) score -= monoMinus;
				else score += monoPlus - BitDiff(board[i][j], board[x][y]);
			}
			};

		Fori(4) Forj(4){
			if (!board[i][j]) continue;
			cal(i, j, i + 1, j);
			cal(i, j, i, j + 1);
		}

		score *= mono_weight;

		return score;
	}
	int evaluation(MoveData moveData) {
		int score(0);
		score += monotonic_score();
		score += board_score();
		return score;
	}
	int search(Dir dir) {
		int temp[4][4]; memcpy(temp, board, sizeof(board));

		MoveData moveData = move(dir);
		int score = evaluation(moveData);

		memcpy(board, temp, sizeof(temp));

		return score;
	}

	Dir findBestMove() {
		vector<Dir> legalMove = getLegalMove();
		Dir bestDir = legalMove[0];
		int bestScore(0);

		for (const Dir& dir : legalMove) {
			int score = search(dir);
			if (bestScore < score) {
				bestDir = dir;
				bestScore = score;
			}
		}

		int temp[4][4]; memcpy(temp, board, sizeof(board));

		move(bestDir);
		if (isSame(temp, board)) out "ERROR!!!\n";

		memcpy(board, temp, sizeof(temp));

		return bestDir;
	}

	void init() { 
		Fori(4) Forj(4) board[i][j] = 0; 
	}
	Game2048() { init(); }

	void print() const {
		out "┌────────────\n";
		Fori(4) {
			out "│";
			Forj(4) out board[i][j] << ' ';
			ent;
		}
		out "└────────────\n";
	}
	void start() {
		Dir firstMove[2]{ UP, LEFT };
		int moveCnt(0);
		while (true) {
			int pos; in pos; pos--;
			if (pos == -2) return;
			board[pos / 4][pos % 4] = 2;
			//print();
			Dir moveDir = (moveCnt < 2 ? firstMove[moveCnt++] : findBestMove());
			move(moveDir);
			out dir_to_string[moveDir] << endl;
			//print();
		}
	}

	int selfTest() {
		int emptySize(16), sum(0);
		Fori(16) {
			init();
			Dir firstMove[2]{ UP, LEFT };
			int moveCnt(0);
			while (true) {
				int pos = getCreatePos(); pos--;
				board[pos / 4][pos % 4] = 2;
				if (isEnd()) break;
				Dir moveDir = (moveCnt < 2 ? firstMove[moveCnt++] : findBestMove());
				move(moveDir);
			}
			int score(0);
			Fori(4) Forj(4) score = max(score, board[i][j]);
			sum += score;
			// print();
		}
		// out "score :" spc(sum / 16) << "\n";
		return (sum / 16);
	}
	int getCreatePos() const {
		int size(0);
		Fori(4) Forj(4) if (!board[i][j]) size++;
		random_device rd; mt19937 gen(rd());
		if (!size) {
			print();
		}
		uniform_int_distribution<> dis(1, size);
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

void learning() {
	int maxi_value[10]{ 40, 11, 3, 6, 5, 4, 4, 2, 1, 0 };
	int size = 50, maxiScore(0);
	int idx(0), cnt(0);
	while (true) {
		if (cnt == 10) break;
		int value[10]; memcpy(value, maxi_value, sizeof(maxi_value));
		value[idx] += 10;
		init_weight(value);
		out "current value [";
		Fori(10) {
			out value[i];
			if (i != 9) out ", ";
		}
		out "]\n";
		out "Maxi value {";
		Fori(10) {
			out maxi_value[i];
			if (i != 9) out ", ";
		}
		out "}\n";
		out "Maxi score : " << maxiScore << "\n";

		int sum(0);
		Fori(size) {
			Game2048 game;
			sum += game.selfTest();
		}
		int score = (sum / size);
		out "\033[31m[score] : " << score << "\033[0m\n";

		if (score > maxiScore) {
			memcpy(maxi_value, value, sizeof(value));
			maxiScore = score;
			cnt = 0;
		}
		else {
			idx++; idx %= 10;
			cnt++;
		}
	}
}

int main() {
	Interactive;

	
	int value[10]{60, 11, 3, 6, 5, 4, 4, 2, 1, 0};
	init_weight(value);
	Game2048 game;
	game.start();
	
}