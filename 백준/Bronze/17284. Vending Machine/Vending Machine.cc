#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	char c;
	int cur = 5000;
	while (cin >> c) {
		if (c == '1') cur -= 500;
		else if (c == '2') cur -= 800;
		else cur -= 1000;
	}
	cout << cur;
}