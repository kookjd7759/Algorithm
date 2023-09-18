#include <iostream>
#include <vector>
#include <cstring>


using namespace std;

int V, deep_node = -1, max_cost(0);
vector<pair<int, int>> graph[10001];
bool visited[10001];

void DFS(int start, int cost){
	visited[start] = true;
	if (cost > max_cost){
		max_cost = cost;
		deep_node = start;
	}
	
	for (int i = 0; i < graph[start].size(); i++){
		int next = graph[start][i].first;
		if (!visited[next])
			DFS(next, cost + graph[start][i].second);
	}
}

int main() {
	cin >> V;
	for (int i = 0; i < V - 1; i++){
		int f, t, w; cin >> f >> t >> w;
		graph[f].push_back({ t, w });
		graph[t].push_back({ f, w });
	}
	
	memset(visited, false, sizeof(visited));
	DFS(1, 0);

	max_cost = 0;

	memset(visited, false, sizeof(visited));
	DFS(deep_node, 0);
	cout << max_cost;
}