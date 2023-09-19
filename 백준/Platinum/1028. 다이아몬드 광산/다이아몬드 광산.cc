#include <iostream>
#include <cstring>

using namespace std;

int R, C;
bool mine[752][752];
int up[752][752];
int down[752][752];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	memset(mine, false, sizeof(mine));
	memset(up, 0, sizeof(up));
	memset(down, 0, sizeof(down));

	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		string st; cin >> st;
		for (int j = 0; j < C; j++) {
			int index_i = i + 1;
			int index_j = j + 1;
			int num = st[j] - 48;
			if (num) {
				mine[index_i][index_j] = num;
				up[index_i][index_j] += up[index_i - 1][index_j + 1] + 1;
				down[index_i][index_j] += down[index_i - 1][index_j - 1] + 1;
			}
		}
	}

	int ret(0);
	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			int L = up[i][j]; L++;
			while (true) {
				L--;
				if (L > ret) {
					int D_i = i + (L - 1);
					int U_i = i - (L - 1);
					int M_j = j + (L - 1);
					int R_j = j + (L - 1) * 2;
					if (D_i > R || U_i < 1 || M_j > C || R_j > C) continue;
					if (up[D_i][M_j] < L || down[D_i][M_j] < L || down[i][R_j] < L) continue;

					ret = L;
				}
				else break;
			}
		}
	}
	cout << ret;
}
