#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Node{
	int cost, from, to;
	Node(int a, int b, int c){ cost = c; from = a; to = b; }
};

bool comp(const Node &a, const Node &b){ return a.cost < b.cost; }

int V, E;
int Parent[100001];
vector<Node> vec;
vector<int> loadvec;

int findParent(int x){
	if (Parent[x] == x) return x;
	else return Parent[x] = findParent(Parent[x]);
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> V >> E;
	for (int i = 0; i <= V; i++) Parent[i] = i;
	for (int i = 0; i < E; i++){
		int a, b, c; cin >> a >> b >> c;
		Node node(a, b, c);
		vec.push_back(node);
	}
	sort(vec.begin(), vec.end(), comp);
	
	int ret = 0;
	for (int i = 0; i < E; i++){
		int x = vec[i].from; x = findParent(x);
		int y = vec[i].to; y = findParent(y);
		if (x != y){
			Parent[x] = y;
			ret += vec[i].cost;
			loadvec.push_back(vec[i].cost);
		}
	}
	
	int maxi = -1;
	for (const auto iter : loadvec)
		maxi = max(iter, maxi);
	cout << ret - maxi;
}