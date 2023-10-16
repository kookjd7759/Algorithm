#include <iostream>
#include <vector>

using namespace std;

vector<string> board;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int x, y; cin >> x >> y;
	for (int i = 0; i < x; i++) {
		string st; cin >> st;
		board.push_back(st);
	}

	for (int i = 0; i < x; i++) {
		int cnt(0);
		bool ch = false;
		for (int j = 0; j < y; j++) {
			if (board[i][j] == '#') {
				cnt++;
				ch = true;
			}
			else {
				if (cnt) cout << cnt << " ";
				cnt = 0;
			}
		}
		if (cnt || !ch) cout << cnt << " ";
		cout << "\n";
	}

	for (int i = 0; i < y; i++) {
		int cnt(0);
		bool ch = false;
		for (int j = 0; j < x; j++) {
			if (board[j][i] == '#') {
				cnt++;
				ch = true;
			}
			else {
				if (cnt) cout << cnt << " ";
				cnt = 0;
			}
		}
		if (cnt || !ch) cout << cnt << " ";
		cout << "\n";
	}
}