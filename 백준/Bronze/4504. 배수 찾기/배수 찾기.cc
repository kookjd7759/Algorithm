#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	while (true) {
		int k; cin >> k;
		if (!k) break;
		cout << k;
		if (k % n == 0) cout << " is a multiple of ";
		else cout << " is NOT a multiple of ";
		cout << n << ".\n";
	}
}