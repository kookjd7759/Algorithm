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
	BOTTOM, EAST, WEST, NORTH, SOUTH, TOP
};

struct Dice {
private:
	int num[6]{0, 0, 0, 0, 0, 0};

public:
	void roll(Dir d) {
		int temp;
		if (d == EAST) {
			temp = num[BOTTOM];
			num[BOTTOM] = num[EAST];
			num[EAST] = num[TOP];
			num[TOP] = num[WEST];
			num[WEST] = temp;
		}
		else if (d == WEST) {
			temp = num[BOTTOM];
			num[BOTTOM] = num[WEST];
			num[WEST] = num[TOP];
			num[TOP] = num[EAST];
			num[EAST] = temp;
		}
		else if (d == NORTH) {
			temp = num[BOTTOM];
			num[BOTTOM] = num[NORTH];
			num[NORTH] = num[TOP];
			num[TOP] = num[SOUTH];
			num[SOUTH] = temp;
		}
		else if (d == SOUTH) {
			temp = num[BOTTOM];
			num[BOTTOM] = num[SOUTH];
			num[SOUTH] = num[TOP];
			num[TOP] = num[NORTH];
			num[NORTH] = temp;
		}
	}
	void set_bottom(int n) { num[BOTTOM] = n; }
	int top() { return num[TOP]; }
	int bottom() { return num[BOTTOM]; }
};

int main() {
	Sync;
	
	int N, M, x, y, k; in N >> M >> x >> y >> k;
	int** board = new int*[N];
	Fori(N) {
		board[i] = new int[M];
		Forj(M) in board[i][j];
	}

	Dice dice;
	Fori(k) {
		int d; in d;
		Dir dir = (Dir)d;
		bool check = (dir == EAST && y == M - 1) || (dir == WEST && y == 0) ||
			(dir == SOUTH && x == N - 1) || (dir == NORTH && x == 0);
		if (check) continue;

		if (dir == EAST) y++;
		else if (dir == WEST) y--;
		else if (dir == SOUTH) x++;
		else x--;

		dice.roll((Dir)dir);
		if (board[x][y] == 0) board[x][y] = dice.bottom();
		else {
			dice.set_bottom(board[x][y]);
			board[x][y] = 0;
		}
		
		out dice.top() endl;
	}
}