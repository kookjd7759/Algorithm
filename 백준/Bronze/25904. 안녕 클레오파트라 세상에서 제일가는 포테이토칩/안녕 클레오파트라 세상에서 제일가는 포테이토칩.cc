#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int limit[100], n, x; cin >> n >> x;
	for (int i = 0; i < n; i++) cin >> limit[i];

	int idx(0);
	while (true) {
		if (limit[idx] < x) break;

		x++; idx++;
		if (idx == n) idx = 0;
	}
	
	cout << idx + 1;
}