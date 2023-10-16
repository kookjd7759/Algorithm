#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	while (n--) {
		int y(0), k(0);
		for (int i = 0; i < 9; i++) {
			int ys, ks; cin >> ys >> ks;
			y += ys; k += ks;
		}
		if (y == k) cout << "Draw";
		else y > k ? cout << "Yonsei" : cout << "Korea";
		cout << "\n";
	}
}