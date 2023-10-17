#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	char mpti[4][2]{
		'E', 'I',
		'S', 'N',
		'T', 'F',
		'J', 'P'
	};
	string st; cin >> st;
	for (int i = 0; i < 4; i++) {
		mpti[i][0] == st[i] ? cout << mpti[i][1] : cout << mpti[i][0];
	}
}