#include <iostream>
#include <cstring>

using namespace std;

int table[1001][1001];

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, a, b; cin >> n >> a >> b;
	for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) 
			cin >> table[i][j];

	int me = table[a][b];
	bool ch = true;
	for (int i = 1; i <= n; i++)
		if (table[a][i] > me) ch = false;

	for (int i = 1; i <= n; i++)
		if (table[i][b] > me) ch = false;

	ch ? cout << "HAPPY" : cout << "ANGRY";
}