#include <iostream>
#include <cassert>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

struct Node {
	int fx;
	int fy;
	int tx;
	int ty;
};

bool isIntersect(
	int x1, int y1, int x2, int y2,
	int _x1, int _y1, int _x2, int _y2 ){
	assert(x1 <= x2); assert(y1 <= y2);
	assert(_x1 <= _x2); assert(_y1 <= _y2);
	if (x1 == x2 && _x1 == _x2) { // V and V
		if (x1 != _x1) return false;
		return
			((y1 <= _y1 && _y1 <= y2) || (y1 <= _y2 && _y2 <= y2)) ||
			((_y1 <= y1 && y1 <= _y2) || (_y1 <= y2 && y2 <= _y2));
	}
	else if (x1 == x2 && _y1 == _y2) { // V and H
		if ((x1 < _x1 || _x2 < x1) ||
			!(y1 <= _y1 && _y1 <= y2)) return false;
		return true;
	}
	else if (y1 == y2 && _x1 == _x2) { // H and V
		if ((y1 < _y1 || _y2 < y1) || 
			!(x1 <= _x1 && _x1 <= x2)) return false;
		return true;
	}
	else if (y1 == y2 && _y1 == _y2) { // H and H
		if (y1 != _y1) return false;
		return 
			((x1 <= _x1 && _x1 <= x2) || (x1 <= _x2 && _x2 <= x2)) ||
			((_x1 <= x1 && x1 <= _x2) || (_x1 <= x2 && x2 <= _x2));
	}
	else {
		cout << "ERROR\n";
		exit(0);
	}
}

bool onLine(int x1, int y1, int x2, int y2, int point_x, int point_y) {
	return (x1 <= point_x && point_x <= x2 && y1 <= point_y && point_y <= y2);
}

int main() {
	Sync;

	int N, M, K, from_x, from_y, to_x, to_y; cin >> N >> M >> K; N++, M++, K++;
	vector<Node> paths(K);
	for (int i = 1; i < K; ++i) {
		int id; cin >> id;
		cin >> paths[id].fx >> paths[id].fy >> paths[id].tx >> paths[id].ty;

		if (paths[id].fx == paths[id].tx &&
			paths[id].fy > paths[id].ty)
			swap(paths[id].fy, paths[id].ty);

		if (paths[id].fy == paths[id].ty &&
			paths[id].fx > paths[id].tx)
			swap(paths[id].fx, paths[id].tx);
	}
	cin >> from_x >> from_y >> to_x >> to_y;

	vector<vector<int>> graph(K);
	for (int i = 1; i < K - 1; ++i) {
		for (int j = i + 1; j < K; ++j) {
			if (isIntersect(
				paths[i].fx, paths[i].fy, paths[i].tx, paths[i].ty,
				paths[j].fx, paths[j].fy, paths[j].tx, paths[j].ty)) {
				graph[i].push_back(j);
				graph[j].push_back(i);
			}
		}
	}

	vector<bool> visited(K + 1, false);
	queue<pair<int, int>> que;
	for (int i = 1; i < K; ++i)
		if (onLine(paths[i].fx, paths[i].fy, paths[i].tx, paths[i].ty, from_x, from_y)) {
			que.push(make_pair(i, 0));
			visited[i] = true;
		}
	
	int ans(-1);
	while (!que.empty()) {
		int current = que.front().first;
		int depth = que.front().second;
		que.pop();

		if (onLine(paths[current].fx, paths[current].fy, paths[current].tx, paths[current].ty, to_x, to_y)) {
			ans = depth;
			break;
		}

		for (const int& next : graph[current]) {
			if (visited[next]) continue;
			que.push(make_pair(next, depth + 1));
			visited[next] = true;
		}
	}
	cout << ans + 1;

	return 0;
}
