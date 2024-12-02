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
	UP, DOWN, LEFT, RIGHT, DIR_NUM, DIR_NULL
};
Dir& operator++(Dir& d) { d = (Dir)(d + 1); return d; }
constexpr inline Dir opposite(const Dir& d) {
	if (d == UP || d == LEFT) return (Dir)(d + 1);
	else if (d == DOWN || d == RIGHT) return (Dir)(d - 1);
	else return DIR_NULL;
}

int SIZE, ans;
int board[20][20];
bool prevJoin = false;
Dir prevDir = DIR_NULL;

void init() { in SIZE; Fori(SIZE) Forj(SIZE) in board[i][j]; }
int get_maxi() {
	int maxi(0);
	Fori(SIZE) Forj(SIZE) maxi = max(maxi, board[i][j]);
	return maxi;
}
void update_maxi() { Fori(SIZE) Forj(SIZE) ans = max(ans, board[i][j]); }

bool moveLine(Dir dir, int idx) {
	int dest, cnt(0);
	bool join = false;

	if (dir == LEFT) {
		dest = 0;
		for (int i = 1; i < SIZE; i++) {
			if (!board[idx][i]) continue;

			if (!board[idx][dest]) board[idx][dest] = board[idx][i];
			else {
				if (board[idx][dest] & board[idx][i]) {
					board[idx][dest] <<= 1;
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
		dest = SIZE - 1;
		for (int i = SIZE - 2; i >= 0; i--) {
			if (!board[idx][i]) continue;

			if (!board[idx][dest]) board[idx][dest] = board[idx][i];
			else {
				if (board[idx][dest] & board[idx][i]) {
					board[idx][dest] <<= 1;
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
		for (int i = 1; i < SIZE; i++) {
			if (!board[i][idx]) continue;

			if (!board[dest][idx]) board[dest][idx] = board[i][idx];
			else {
				if (board[dest][idx] & board[i][idx]) {
					board[dest][idx] <<= 1;
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
		dest = SIZE - 1;
		for (int i = SIZE - 2; i >= 0; i--) {
			if (!board[i][idx]) continue;

			if (!board[dest][idx]) board[dest][idx] = board[i][idx];
			else {
				if (board[dest][idx] & board[i][idx]) {
					board[dest][idx] <<= 1;
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

	return join;
}
bool move(Dir dir) {
	bool join = false;
	Fori(SIZE) if (moveLine(dir, i)) join = true;
	return join;
}

void DFS(int cnt, int cur_value) {
	int maxi_value = cur_value << cnt;
	if (maxi_value <= ans) return;
	if (!cnt) {
		update_maxi();
		return;
	}

	for (Dir dir = UP; dir < DIR_NUM; ++dir) {
		if (!prevJoin && (prevDir == dir || prevDir == opposite(dir))) continue;
		int temp[20][20]; memcpy(temp, board, sizeof(board));
		prevJoin = move(dir);
		DFS(cnt - 1, get_maxi());
		memcpy(board, temp, sizeof(temp));
	}
}

int main() {
	Sync;

	init();
	DFS(10, 2);
	out ans;
}