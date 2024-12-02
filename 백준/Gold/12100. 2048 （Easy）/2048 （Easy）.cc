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

int SIZE, ans;
int board[20][20];

void init() { in SIZE; Fori(SIZE) Forj(SIZE) in board[i][j]; }
void rotation(int temp[20][20]) { Fori(SIZE) Forj(SIZE) board[SIZE - j - 1][i] = temp[i][j]; }
void update_maxi() { Fori(SIZE) Forj(SIZE) ans = max(ans, board[i][j]); }

void move() {
	Fori(SIZE) {
		int dest = 0;
		For1j(SIZE - 1) {
			if (!board[i][j]) continue;

			if (!board[i][dest]) board[i][dest] = board[i][j];
			else {
				if (board[i][dest] & board[i][j]) {
					board[i][dest] <<= 1;
					dest++;
				}
				else {
					dest++;
					if (dest == j) continue;
					board[i][dest] = board[i][j];
				}
			}
			board[i][j] = 0;
		}
	}
}

void DFS(int cnt) {
	if (!cnt) {
		update_maxi();
		return;
	}

	Fori(4) {
		int temp[20][20]; memcpy(temp, board, sizeof(board));
		move();
		DFS(cnt - 1);
		rotation(temp);
	}
}

void print(int arr[20][20]) {
	Fori(SIZE) {
		Forj(SIZE) out board[i][j] << ' ';
		ent;
	}
}

int main() {
	Sync;

	init();
	DFS(5);
	out ans;
}