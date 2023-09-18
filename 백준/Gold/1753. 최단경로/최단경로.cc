#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int V, E, K;
vector<pair<int, int>> graph[20001];
vector<int>* path;

void dijkstra() {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que; que.push({ 0, K });
	path = new vector<int>(V + 1, -1); path->at(K) = 0;
	
	while (!que.empty()) {
		int cur_cost = que.top().first;
		int cur_node = que.top().second;
		que.pop();
		
		if (path->at(cur_node) != -1 && path->at(cur_node) < cur_cost)
			continue;
		
		for (int i = 0; i < graph[cur_node].size(); i++) {
			int next_cost = cur_cost + graph[cur_node][i].second;
			int next_node = graph[cur_node][i].first;
			if (path->at(next_node) == -1 || next_cost < path->at(next_node)) {
				path->at(next_node) = next_cost;
				que.push({ next_cost, next_node });
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> V >> E >> K;
	for (int i = 0; i < E; i++) {
		int u, v, w; cin >> u >> v >> w;
		graph[u].push_back({ v, w });
	}

	dijkstra();

	for (int i = 1; i < path->size(); i++) {
		path->at(i) == -1 ? cout << "INF" : cout << path->at(i);
		cout << "\n";
	}
}