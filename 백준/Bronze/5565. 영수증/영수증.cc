#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int p; cin >> p;
	for (int i = 0; i < 9; i++) {
		int n; cin >> n;
		p -= n;
	}
	cout << p;
}