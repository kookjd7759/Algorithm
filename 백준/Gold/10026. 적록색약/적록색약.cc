#include <iostream>
#include <string>

using namespace std;

int n, cnt = 0;
char table[100][100];
bool isVisited[100][100] = { false };

int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

void dfs(int x, int y) {
	isVisited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= n || ny < 0 || ny >= n) 
			continue;
		if (!isVisited[nx][ny] && table[x][y] == table[nx][ny]) 
			dfs(nx, ny);
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> table[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!isVisited[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt << " ";

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (table[i][j] == 'G') 
				table[i][j] = 'R';
			else 
				table[i][j] = table[i][j];
		}
	}
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			isVisited[i][j] = false;

	cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!isVisited[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt;

	return 0;
}