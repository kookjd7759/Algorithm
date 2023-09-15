#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool ret[100][100];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n; cin >> n;
	vector<vector<int>> vec(n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) {
			int num; cin >> num;
			if (num == 1) vec[i].push_back(j);
		}
	}
	
	for (int i = 0; i < n; i++){
		bool* visited = new bool[n]; for (int j = 0; j < n; j++) visited[j] = false;
		queue<int> que;
		for (const auto iter : vec[i])
			que.push(iter);
		
		while(que.size() != 0){
			int size = que.size();
			while(size--){
				int num = que.front();
				ret[i][num] = true;
				que.pop();
				
				if (!visited[num]){
					for (const auto iter : vec[num])
						que.push(iter);
					visited[num] = true;
				}
			}
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) {
			cout << ret[i][j] << " ";
		}
		cout << "\n";
	}
}
