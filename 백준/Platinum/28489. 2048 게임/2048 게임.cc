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
	UP, DOWN, LEFT, RIGHT, DIR_NUM, DIR_NULL
};
string dir_to_string[4]{ "UP", "DOWN", "LEFT", "RIGHT" };
Dir& operator++(Dir& d) { d = (Dir)(d + 1); return d; }

bool isSame(int a[4][4], int b[4][4]) {
	Fori(4) Forj(4) if (a[i][j] != b[i][j]) return false;
	return true;
}

int count_weight;
int maxi_weight;
int empty_weight;
int monotonic_weight;
void init_weight(int count, int maxi, int empty, int monotonic) {
	count_weight = count;
	maxi_weight = maxi;
	empty_weight = empty;
	monotonic_weight = monotonic;
}

struct MoveData {
	int count = 0, maxi = 0;

	void add(int n) { count++; maxi = max(maxi, n); }
	void add(MoveData md) { count += md.count; maxi = max(maxi, md.maxi); }
};

class Game2048 {
public:
	int board[4][4];
	pair<int, int> maxiPos;
	inline bool isSafe(int x, int y) const { return (x >= 0 && x < 4 && y >= 0 && y < 4); }
	inline int getEmptySize() const {
		int cnt(0);
		Fori(4) Forj(4) if (!board[i][j]) cnt++;
		return cnt;
	}
	inline int getScore() const {
		int score(0);
		Fori(4) Forj(4) score = max(score, board[i][j]);
		return score;
	}
	inline void updateMaxiPos() {
		int maxiNum(0);
		Fori(4) Forj(4) if (maxiNum < board[i][j]) {
			maxiNum = board[i][j];
			maxiPos.first = i, maxiPos.second = j;
		}
	}

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
		updateMaxiPos();
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

	int monotonic_score() {
		int score(0), x_change, y_change;
		vector<int> row, col;
		if (maxiPos.first == 0 && maxiPos.second == 0) { x_change = +1; y_change = +1; }
		else if (maxiPos.first == 0 && maxiPos.second == 3) { x_change = -1; y_change = +1; }
		else if (maxiPos.first == 3 && maxiPos.second == 0) { x_change = +1; y_change = -1; }
		else if (maxiPos.first == 3 && maxiPos.second == 3) { x_change = -1; y_change = -1; }
		else return -100;

		Fori(4) {
			if (board[maxiPos.first][maxiPos.second + x_change * i]) row.push_back(board[maxiPos.first][maxiPos.second + x_change * i]);
			if (board[maxiPos.first + y_change * i][maxiPos.second]) col.push_back(board[maxiPos.first + y_change * i][maxiPos.second]);
		}
		
		if (row.size() >= 2) {
			Fori(row.size() - 1) {
				if (row[i] >= row[i + 1]) score++;
				else score -= 10;
			}
		}

		if (col.size() >= 2) {
			Fori(col.size() - 1) {
				if (col[i] >= col[i + 1]) score++;
				else score -= 10;
			}
		}
		/*
		out "row [ ";
		Fori(row.size()) {
			out row[i];
			if (i != row.size() - 1) out ", ";
		}
		out " ]\n";

		out "col [ ";
		Fori(col.size()) {
			out col[i];
			if (i != col.size() - 1) out ", ";
		}
		out " ]\n";
		*/
		// out "mono score : " << score << "\n";
		return score;
	}
	int evaluation(MoveData moveData) {
		int score(0);
		score += getEmptySize() * empty_weight;
		score += (moveData.count * count_weight);
		score += moveData.maxi * maxi_weight;
		score += monotonic_score() * monotonic_weight;
		return score;
	}
	int search(Dir dir) {
		int temp[4][4]; memcpy(temp, board, sizeof(board));
		pair<int, int> tempPos = maxiPos;

		MoveData moveData = move(dir);
		int score = evaluation(moveData);
		// int score = monotonic_score();
		memcpy(board, temp, sizeof(temp));
		maxiPos = tempPos;

		return score;
	}

	Dir findBestMove() {
		vector<Dir> legalMove = getLegalMove();
		Dir bestDir = legalMove[0];
		int bestScore(0);

		for (const Dir& dir : legalMove) {
			int score = search(dir);
			//out dir_to_string[dir] << " : " << score << "\n";
			if (bestScore < score) {
				bestDir = dir;
				bestScore = score;
			}
		}

		return bestDir;
	}

	void init() { 
		Fori(4) Forj(4) board[i][j] = 0; 
		maxiPos.first = -1, maxiPos.second = -1;
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
		while (true) {
			int pos; in pos; pos--;
			if (pos == -2) return;
			board[pos / 4][pos % 4] = 2;
			//print();
			Dir moveDir = findBestMove();
			move(moveDir);
			out dir_to_string[moveDir] << endl;
			//print();
		}
	}

	int selfTest() {
		int emptySize(16), sum(0);
		Fori(16) {
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
		//out "score :" spc(sum / 16) << "\n";
		return (sum / 16);
	}
	int getCreatePos() const {
		random_device rd; mt19937 gen(rd());
		uniform_int_distribution<> dis(1, getEmptySize());
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
	int testSize = 50;
	Fori(10) {
		init_weight(3, 2, 1, i);
		out "[Weight Data]\n";
		out " - count : " << count_weight << "\n";
		out " - maxi : " << maxi_weight << "\n";
		out " - empty : " << empty_weight << "\n";
		out " - monotonic : " << monotonic_weight << "\n";

		int sum(0);
		for (int test = 1; test < testSize; ++test) {
			Game2048 game;
			sum += game.selfTest();
		}

		out "\033[31m[score] : " << (sum / testSize) << "\033[0m\n";
	}
}

int main() {
	Interactive;
	
	Game2048 game;
	init_weight(2, 1, 1, 4);
	game.start();
	
	//learning();
}