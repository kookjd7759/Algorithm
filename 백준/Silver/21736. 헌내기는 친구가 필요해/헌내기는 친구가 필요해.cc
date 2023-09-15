#include <iostream>
#include <string>
#include <queue>

using namespace std;

int camp[602][602];
int dir[4][2] = {
	0,1,
	0,-1,
	1,0,
	-1,0
};

int main(){
	for (int i = 0; i < 602; i++)
		for (int j = 0; j < 602; j++)
			camp[i][j] = -1;
	
	queue<pair<int, int>> que;
	int n, m; cin >> n >> m;
	string st; getline(cin, st);
	for (int i = 1; i <= n; i++){
		getline(cin, st);
		for (int j = 1; j <= m; j++){
			if (st[j - 1] == 'O')
				camp[i][j] = 0;
			else if (st[j - 1] == 'I'){
				camp[i][j] = -1;
				que.push({ i, j });
			}
			else if (st[j - 1] == 'P')
				camp[i][j] = 2;
		}
	}
	
	int ret(0);
	while(que.size() != 0){
		int size = que.size();
		
		while(size--){
			int x = que.front().first;
			int y = que.front().second;
			que.pop();
			
			for (int i = 0; i < 4; i++){
				int index_x = x + dir[i][0];
				int index_y = y + dir[i][1];
				
				if (camp[index_x][index_y] == 0){
					que.push({ index_x, index_y });
					camp[index_x][index_y] = -1;
				}
				else if (camp[index_x][index_y] == 2){
					ret++;
					que.push({ index_x, index_y });
					camp[index_x][index_y] = -1;
				}
			}
		}
	}
	
	!ret ? cout << "TT" : cout << ret;
}