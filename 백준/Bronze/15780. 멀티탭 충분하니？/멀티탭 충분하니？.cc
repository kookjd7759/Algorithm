#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, k; cin >> n >> k;
	int num(0);
	for (int i = 0; i < k; i++) {
		int m; cin >> m;
		(m & 1) ? num += m / 2 + 1 : num += m / 2;
	}

	n <= num ? cout << "YES" : cout << "NO";
}