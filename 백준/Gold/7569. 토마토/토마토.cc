#include <iostream>
#include <vector>

using namespace std;

struct Cell {
	int i, j, k;
	bool visited = false;
};

int table[102][102][102];
int NoneCnt(0), YesCnt(0), SpreadCount(0);
vector<Cell> vec;

bool OneSpread() {
	int index_list[6][3] = {
		0, 0, 1,
		0, 0, -1,
		0, 1, 0,
		0, -1, 0,
		1, 0, 0,
		-1, 0, 0,
	};
	bool excuted = false;
	vector<Cell> tempvec;
	for (int v_i = 0; v_i < vec.size(); v_i++) {
		if (!vec[v_i].visited) {
			vec[v_i].visited = true;

			for (int i = 0; i < 6; i++) {
				int index_i = vec[v_i].i + index_list[i][0];
				int index_j = vec[v_i].j + index_list[i][1];
				int index_k = vec[v_i].k + index_list[i][2];

				if (table[index_i][index_j][index_k] == -1 || table[index_i][index_j][index_k] == 1)
					continue;
				else {
					excuted = true;
					table[index_i][index_j][index_k] = 1;
					YesCnt++;
					Cell cell; cell.i = index_i; cell.j = index_j; cell.k = index_k;
					tempvec.push_back(cell);
				}
			}

		}
	}
	vec.clear();
	vec = tempvec;
	return excuted;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n, h; cin >> m >> n >> h;
	for (int k = 0; k < 102; k++)
		for (int i = 0; i < 102; i++)
			for (int j = 0; j < 102; j++)
				table[i][j][k] = -1;

	for (int k = 1; k <= h; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> table[i][j][k];
				if (table[i][j][k] == 1) {
					Cell cell; cell.i = i; cell.j = j; cell.k = k;
					vec.push_back(cell);
					YesCnt++;
				}
				else if (table[i][j][k] == -1)
					NoneCnt++;
			}
		}
	}

	while (OneSpread()) SpreadCount++;
	if (NoneCnt + YesCnt != (m * n * h))
		cout << -1;
	else
		cout << SpreadCount;
}