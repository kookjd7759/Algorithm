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
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int mx[4]{ 0, 0, 1, -1 };
int my[4]{ 1, -1, 0, 0 };

int main() {
	Sync;

	while (true) {
		int a, b; in a >> b;
		if (!a && !b) break;

		char** board = new char* [b + 2];
		bool** visited = new bool* [b + 2];
		Fori(b + 2) {
			board[i] = new char[a + 2];
			visited[i] = new bool[a + 2];
			fill_n(board[i], a + 2, '#');
			fill_n(visited[i], a + 2, false);
		}
		queue<pair<int, int>> que;
		For1i(b) {
			For1j(a) {
				in board[i][j];
				if (board[i][j] == '@') {
					que.push({ i, j });
					visited[i][j] = true;
				}
			}
		}

		int cnt(0);
		while (!que.empty()) {
			pair<int, int> pos = que.front();
			que.pop();

			Fori(4) {
				int x = pos.first + mx[i];
				int y = pos.second + my[i];
				if (board[x][y] == '.' && !visited[x][y]) {
					visited[x][y] = true;
					cnt++;
					que.push({ x, y });
				}
			}
		}
		out cnt + 1 endl;
	}
}