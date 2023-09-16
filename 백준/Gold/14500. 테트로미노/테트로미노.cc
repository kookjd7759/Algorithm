#include <iostream>
#include <vector>

using namespace std;

int table[502][502];
bool visited[502][502];
int dir[4][2] = {
	0,1,
	0,-1,
	1,0,
	-1,0
};

int findMax(int x, int y, int size) {
	if (size == 1) return table[x][y];

	int max = -1, cal = -1;
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int new_x = x + dir[i][0];
		int new_y = y + dir[i][1];
		if (visited[new_x][new_y])
			continue;
		int temp = findMax(new_x, new_y, size - 1);
		if (cal < temp)
			cal = temp;
	}
	visited[x][y] = false;
	if (size == 4) {
		int d[4];
		d[0] = table[x][y - 1];
		d[1] = table[x + 1][y];
		d[2] = table[x][y + 1];
		d[3] = table[x - 1][y];

		int num[4];
		num[0] = d[1] + d[2] + d[3];
		num[1] = d[0] + d[2] + d[3];
		num[2] = d[0] + d[1] + d[3];
		num[3] = d[0] + d[1] + d[2];
		int max_ = 0;
		for (int i = 0; i < 4; i++)
			if (max_ < num[i])
				max_ = num[i];
		if (cal < max_) 
			return max_ + table[x][y];
	}

	return table[x][y] + cal;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	for (int i = 0; i < 502; i++) {
		for (int j = 0; j < 502; j++) {
			table[i][j] = -1;
			visited[i][j] = true;
		}
	}

	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> table[i][j];
			visited[i][j] = false;
		}
	}

	int max_(0);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			int sum = findMax(i, j, 4);
			max_ = max(max_, sum);
		}
	}
	cout << max_;
}