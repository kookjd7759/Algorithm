#include <iostream>
#include <cstring>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

const string triangle[3] = {
	{"  *  "},
	{" * * "},
	{"*****"}
};

char board[3072][6144];

void func(int l, int x, int y) {
	if (l == 1) {
		for (int i = 0; i < 3; i++) for (int j = 0; j < 5; j++)
			board[x + i][y + j] = triangle[i][j];

		return;
	}

	int t = 3 * l / 2;

	func(l / 2, x, y + t);
	func(l / 2, x + t, y);
	func(l / 2, x + t, y + 2 * t);
}

int main() {
	Sync;

	memset(board, ' ', sizeof(board));
	int n; cin >> n;
	func(n / 3, 0, 0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n - 1; j++) cout << board[i][j];
		cout << '\n';
	}

	return 0;
}