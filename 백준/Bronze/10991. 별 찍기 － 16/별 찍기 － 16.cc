#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	auto star = [&](int size) -> void {
		for (int i = 1; i <= size; i++) {
			if (i & 1) cout << "*";
			else cout << " ";
		}
		cout << "\n";
		};

	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) cout << " ";
		star(i * 2 - 1);
	}
}