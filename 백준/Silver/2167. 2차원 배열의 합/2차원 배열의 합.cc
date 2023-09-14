#include <iostream>

using namespace std;

int table[302][302]{0, };

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			cin >> table[i][j];
			table[i][j] += table[i][j - 1] + table[i - 1][j] - table[i - 1][j - 1];
		}
	}
	int t; cin >> t;
	while(t--){
		int i, j, x, y; cin >> i >> j >> x >> y;
		cout << table[x][y] - (table[i - 1][y] + table[x][j - 1] - table[i - 1][j - 1]) << "\n";
	}
}