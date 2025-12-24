#include <iostream>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

const int dir[6][3]{
	{1, 0, 0},
	{-1, 0, 0},
	{0, 1, 0},
	{0, -1, 0},
	{0, 0, 1},
	{0, 0, -1}
};

int main() {
	Sync;

	while (true) {
		int L, R, C; cin >> L >> R >> C;
		if (L == 0 && R == 0 && C == 0)
			break;

		int pos = 0;
		vector<vector<vector<char>>> building(L, vector<vector<char>>(R, vector<char>(C)));
		vector<vector<vector<bool>>> visit(L, vector<vector<bool>>(R, vector<bool>(C, false)));
		for (int f = 0; f < L; ++f) for (int x = 0; x < R; ++x) for (int y = 0; y < C; ++y) {
			cin >> building[f][x][y];
			if (building[f][x][y] == 'S') {
				pos = f * (R * C) + x * C + y;
				building[f][x][y] = '.';
			}
		}

		int min(-1);
		queue<pair<int, int>> que;
		que.push(make_pair(pos, 0));
		visit[pos / (R * C)][pos % (R * C) / C][pos % (R * C) % C] = true;
		while (!que.empty()) {
			pair<int, int> cur = que.front(); que.pop();
			int f = cur.first / (R * C);
			int x = cur.first % (R * C) / C;
			int y = cur.first % (R * C) % C;

			if (building[f][x][y] == 'E') {
				min = cur.second;
				break;
			}

			for (int i = 0; i < 6; ++i) {
				int f_nxt = f + dir[i][0];
				int x_nxt = x + dir[i][1];
				int y_nxt = y + dir[i][2];
				if (f_nxt < 0 || x_nxt < 0 || y_nxt < 0 ||
					f_nxt >= L || x_nxt >= R || y_nxt >= C) continue;
				if (visit[f_nxt][x_nxt][y_nxt] || 
					building[f_nxt][x_nxt][y_nxt] == '#') continue;
				que.push(make_pair(f_nxt * (R * C) + x_nxt * C + y_nxt, cur.second + 1));
				visit[f_nxt][x_nxt][y_nxt] = true;
			}
		}


		min == -1 ?
			cout << "Trapped!" :
			cout << "Escaped in " << min << " minute(s).";
		cout << "\n";
	}

	return 0;
}
