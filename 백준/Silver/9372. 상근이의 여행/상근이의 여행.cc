#include <iostream>
#include <vector>

using namespace std;

struct Node{
	int from, to;
	Node(int a, int b){ from = a; to = b; }
};

int N, M;
int Parent[1001];
vector<Node> vec;

int findParent(int x){
	if (Parent[x] == x) return x;
	else return Parent[x] = findParent(Parent[x]);
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while (t--){
	    vec.clear();
	    cin >> N >> M;
    	for (int i = 0; i <= N; i++) Parent[i] = i;
    	for (int i = 0; i < M; i++){
    		int a, b; cin >> a >> b;
    		Node node(a, b);
    		vec.push_back(node);
    	}
    	
    	int ret = 0;
    	for (int i = 0; i < M; i++){
    		int x = vec[i].from; x = findParent(x);
    		int y = vec[i].to; y = findParent(y);
    		if (x != y){
    			Parent[x] = y;
    			ret++;
    		}
    	}
    	cout << ret << "\n";
	}
}