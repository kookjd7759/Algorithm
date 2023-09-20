#include <iostream>
#include <algorithm>
#include <vector>

#define INF 1e9

using namespace std;

struct Node{
	int from, to, cost;
	Node(int a, int b, int c) {from = a; to = b; cost = c;}
};

int N, M;
vector<Node> graph;
long long path[501];

bool bellmanFord(int start){
	path[start] = 0;
	
	for (int i = 1; i <= N; i++){
		for (int j = 0; j < M; j++){
			Node node = graph[j];
			
			if (path[node.from] == INF) continue;
			
			long long cost = path[node.from] + node.cost;
			if (path[node.to] > cost){
				path[node.to] = cost;
				if (i == N) return true;
			}
		}
	}
	
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	fill_n(path, 501, INF);
	
	cin >> N >> M;
	for (int i = 0; i < M; i++){
		int a, b, c; cin >> a >> b >> c;
		Node node(a, b, c);
		graph.push_back(node);
	}
	
	bool excute = bellmanFord(1);
	if (excute)
		cout << "-1\n";
	else{
		for (int i = 2; i <= N; i++)
			path[i] != INF ? cout << path[i] << "\n" : cout << "-1\n";
	}
}
	