#include <iostream>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;

int n, m;
int graph[1001][1001];
vector<int>* path;

void dijkstra(int start) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que; que.push({ 0, start });
	path = new vector<int>(n + 1, -1); path->at(start) = 0;
	
	while (!que.empty()) {
		int cur_cost = que.top().first;
		int cur_node = que.top().second;
		que.pop();
		
		if (path->at(cur_node) != -1 && path->at(cur_node) < cur_cost)
			continue;
		
		for (int i = 1; i <= n; i++) {
			if (graph[cur_node][i] == -1)
				continue;
			
			int next_cost = cur_cost + graph[cur_node][i];
			int next_node = i;
			if (path->at(next_node) == -1 || next_cost < path->at(next_node)) {
				path->at(next_node) = next_cost;
				que.push({ next_cost, next_node });
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	memset(graph, -1, sizeof(graph));
	
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b, c; cin >> a >> b >> c;
		graph[a][b] != -1 ? graph[a][b] = min(graph[a][b], c) : graph[a][b] = c;
	}
	int start, end; cin >> start >> end;
	dijkstra(start);
	cout << path->at(end);
}