#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;

int cal_bacon(vector<vector<int>>* vec, int index){
	int *scoreBoard = new int[n + 1]; for (int i = 0; i < n + 1; i++) scoreBoard[i] = 0;
	bool *visited = new bool[n + 1]; for (int i = 0; i < n + 1; i++) visited[i] = false;
	visited[index] = true;
	
	queue<int> que; que.push(index);
	int cnt(1);
	while(que.size() != 0){
		int size = que.size();
		while(size--){
			int select = que.front();
			que.pop();
			
			for (int i = 0; i < vec->at(select).size(); i++){
				if (!visited[vec->at(select)[i]]) {
					scoreBoard[vec->at(select)[i]] = cnt;
					visited[vec->at(select)[i]] = true;
					que.push(vec->at(select)[i]);
				}
			}
		}
		cnt++;
	}
	
	int sum(0);
	for (int i = 1; i < n + 1; i++)
		sum += scoreBoard[i];
	return sum;
}

int main(){
	cin >> n >> m;
	vector<vector<int>> vec(n + 1);
	for (int i = 0; i < m; i++){
		int a, b; cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	
	int min_score = 516, min_index = -1;
	for (int i = 1; i <= n; i++){
		int n_score = cal_bacon(&vec, i);
		if (min_score > n_score){
			min_score = n_score;
			min_index = i;
		}
	}
	
	cout << min_index;
}