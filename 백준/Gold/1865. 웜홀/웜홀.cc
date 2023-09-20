#include <iostream>
#include <algorithm>
#include <vector>

#define INF 1e9

using namespace std;

int N, M, W;
int graph[501][501];
long long path[501];

bool bellmanFord(int start){
	path[start] = 0;
	
	for (int i = 1; i <= N; i++){
		for (int j = 1; j < 501; j++){
			for (int k = 1; k < 501; k++){
				if (graph[j][k] == INF) continue;
				
				int from = j, to = k, cost = graph[j][k];
				
				long long new_cost = path[from] + cost;
				if (path[to] > new_cost){
					path[to] = new_cost;
					if (i == N) return true;
				}
			}
		}
	}
	
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int tc; cin >> tc;
	while(tc--){
		fill_n(path, 501, INF); fill_n(&graph[0][0], 501 * 501, INF);
		cin >> N >> M >> W;
		for (int i = 0; i < M; i++){
			int a, b, c; cin >> a >> b >> c;
			if (graph[a][b] > c) graph[a][b] = c;
			if (graph[b][a] > c) graph[b][a] = c;
		}
		for (int i = 0; i < W; i++){
			int a, b, c; cin >> a >> b >> c; c *= -1;
			if (graph[a][b] > c) graph[a][b] = c;
		}
		
		bool excute = bellmanFord(1);
		excute ? cout << "YES\n" : cout << "NO\n";
	}
}