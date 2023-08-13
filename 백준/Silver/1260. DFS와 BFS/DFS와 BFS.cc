#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int N, M, V;

bool Points[1001];
vector<int> Lines[10001];

void Input() {
	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		int point1, point2; cin >> point1 >> point2;
		Lines[point1].push_back(point2);
		Lines[point2].push_back(point1);
	}

	for (int i = 0; i <= N; i++)
		sort(Lines[i].begin(), Lines[i].end());
}

void DFS_Funtion(int num) {
	if (!Points[num]) {
		Points[num] = true;
		cout << num << " ";

		for (int i = 0; i < Lines[num].size(); i++) {
			DFS_Funtion(Lines[num][i]);
		}
	}
}

void DFS() {
	fill_n(Points, 1001, false);
	DFS_Funtion(V);
	cout << "\n";
}

void BFS() {
	fill_n(Points, 1001, false);
	queue<int> que;

	Points[V] = true;
	cout << V << " ";

	for (int i = 0; i < Lines[V].size(); i++) {
		que.push(Lines[V][i]);
		Points[Lines[V][i]] = true;
		cout << Lines[V][i] << " ";
	}

	while (!que.empty()) {
		int Size = que.size();

		for (int i = 0; i < Size; i++) {
			int Front = que.front();
			que.pop();

			for (int j = 0; j < Lines[Front].size(); j++)
				if (!Points[Lines[Front][j]]) {
					que.push(Lines[Front][j]);
					Points[Lines[Front][j]] = true;
					cout << Lines[Front][j] << " ";
				}
		}
	}
}

int main() {
	Input();
	DFS();
	BFS();
}