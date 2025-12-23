#include <iostream>
#include <string>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

string* board;

char innerFunc(int x, int y, int size) {
	char c = board[x][y];
	for (int i = x; i < x + size; ++i) {
		for (int j = y; j < y + size; ++j) {
			if (c != board[i][j]) return '-';
		}
	}
	return c;
}

void func(int x, int y, int size) {
	char c = innerFunc(x, y, size);
	if (c == '-') {
		cout << "(";
		int split = size / 2;
		func(x, y, split);
		func(x, y + split, split);
		func(x + split, y, split);
		func(x + split, y + split, split);
		cout << ")";
	}
	else cout << c;
}

int main() {
	Sync;

	int n; cin >> n;
	board = new string[n];
	for (int i = 0; i < n; ++i) cin >> board[i];
	func(0, 0, n);
	
	delete[] board;

	return 0;
}