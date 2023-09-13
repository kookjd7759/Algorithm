#include <iostream>

using namespace std;

int cnt(0);
void func(int num) {
	if (num == 1) {
		return;
	}

	cnt++;
	if (num % 2 == 0) {
		func(num / 2);
		func(num / 2);
	}
	else {
		func(num / 2);
		func(num / 2 + 1);
	}
}

int main() {
	int n, m; cin >> n >> m;
	func(n * m);
	cout << cnt;
}