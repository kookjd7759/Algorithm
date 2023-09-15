#include <iostream>
#include <queue>

using namespace std;

int table[1002][1002] {0, };
bool visited[1002][1002] {false, };
queue<pair<short, short>> que;
int step(0);

const int dir[4][2] = {
	0, 1,
	0, -1,
	1, 0,
	-1, 0
};

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL); cout.tie(NULL);
	
	for (int i = 0; i < 1002; i++)
		for (int j = 0; j < 1002; j++){
			table[i][j] = 0;
			visited[i][j] = false;
		}
	
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			cin >> table[i][j];
			if (table[i][j] == 2) {
				visited[i][j] = true;
				que.push({ i, j });
			}
		}
	
	while(true){
		queue<pair<short, short>> temp_que;
		bool check = false;
		while(que.size()){
			check = true;
			int x = que.front().first;
			int y = que.front().second;
			table[x][y] = step;
			
			for (int j = 0; j < 4; j++){
				int index_i = x + dir[j][0];
				int index_j = y + dir[j][1];
				
				if (!visited[index_i][index_j] && table[index_i][index_j] == 1){
					temp_que.push({ index_i, index_j });
					visited[index_i][index_j] = true;
				}
			}
			que.pop();
		}
	
		step++;
		
		if (!check)
			break;
		else
			swap(que, temp_que);
	}
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (table[i][j] == 1 && !visited[i][j])
				cout << -1 << " ";
			else
				cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}