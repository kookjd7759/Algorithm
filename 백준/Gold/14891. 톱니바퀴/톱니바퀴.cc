#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

vector<char> gears_cur[4];
vector<char> gears_nxt[4];

void _moveCW(int idx) {
	gears_nxt[idx].insert(gears_nxt[idx].begin(), gears_nxt[idx][gears_nxt[idx].size() - 1]);
	gears_nxt[idx].pop_back();
}
void _moveCCW(int idx) {
	gears_nxt[idx].push_back(gears_nxt[idx].front());
	gears_nxt[idx].erase(gears_nxt[idx].begin());
}
void move(int idx, int dir) { dir == 1 ? _moveCW(idx) : _moveCCW(idx); }

bool visited[4];
void dfs(int idx, int dir) {
	move(idx, dir);
	visited[idx] = true;
	// to the left
	int left = idx - 1;
	if (left >= 0 && !visited[left] && gears_cur[left][2] != gears_cur[idx][6]) {
		dfs(left, dir == 1 ? -1 : 1);
	}
	// to the right
	int right = idx + 1;
	if (right < 4 && !visited[right] && gears_cur[idx][2] != gears_cur[right][6]) {
		dfs(right, dir == 1 ? -1 : 1);
	}
}

int main() {
	Sync;

	for (int i = 0; i < 4; ++i) {
		string line; cin >> line;
		for (int j = 0; j < 8; ++j)
			gears_cur[i].push_back(line[j]);
	}

	int n; cin >> n;
	while (n--) {
		int idx, dir; cin >> idx >> dir; idx--;
		memset(visited, false, sizeof(visited));
		for (int i = 0; i < 4; ++i) gears_nxt[i] = gears_cur[i];
		dfs(idx, dir);
		for (int i = 0; i < 4; ++i) gears_cur[i] = gears_nxt[i];
	}

	int score(0);
	for (int i = 0; i < 4; ++i) if (gears_cur[i][0] == '1')
		score += pow(2, i);

	cout << score << "\n";


	return 0;
}
