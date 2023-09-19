#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int table[9][9];
bool x_able[9][10];
bool y_able[9][10];
bool sq_able[3][3][10];
vector<pair<int, int>> vec;

inline void check(int i, int j, int num, bool ver) {
	x_able[i][num] = ver;
	y_able[j][num] = ver;
	sq_able[i / 3][j / 3][num] = ver;
}

bool back_tracking(int index) {
	if (vec.size() <= index) return true;

	int x = vec[index].first, y = vec[index].second;
	bool able[10]; memset(able, false, sizeof(able));

	for (int i = 1; i <= 9; i++) {
		if (x_able[x][i]) able[i] = true;
		if (y_able[y][i]) able[i] = true;
		int x_temp = x / 3, y_temp = y / 3;
		if (sq_able[x_temp][y_temp][i]) able[i] = true;
	}

	for (int i = 1; i < 10; i++)
		if (!able[i]) {
			check(x, y, i, true);
			table[x][y] = i;
			if (back_tracking(index + 1))
				return true;
			table[x][y] = 0;
			check(x, y, i, false);
		}
	
	return false;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	for (int i = 0; i < 9; i++) {
		string st; cin >> st;
		for (int j = 0; j < 9; j++) {
			int num = st[j] - 48;
			table[i][j] = num;

			if (!num) {
				check(i, j, num, false);
				vec.push_back({ i, j });
			}
			else  check(i, j, num, true);
		}
	}

	back_tracking(0);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++)
			cout << table[i][j];
		cout << "\n";
	}
}