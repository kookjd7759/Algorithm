#include <iostream>
#include <map>
using namespace std;

map<char, pair<int, int>> dir;
char info[2000][2000];

bool isSearchIndependent(int x, int y) {
	if (info[x][y] == 0) return true;
	else if (info[x][y] == 1) return false;

	char c = info[x][y];
	info[x][y] = 0;
	bool res = isSearchIndependent(x + dir[c].first, y + dir[c].second);
	info[x][y] = 1;

	return res;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	dir.insert(make_pair('U', make_pair(-1, 0)));
	dir.insert(make_pair('D', make_pair(1, 0)));
	dir.insert(make_pair('L', make_pair(0, -1)));
	dir.insert(make_pair('R', make_pair(0, 1)));

	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) 
		cin >> info[i][j];

	int count = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (isSearchIndependent(i, j)) count++;
		}
	}
	cout << count;
}