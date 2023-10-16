#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int cur(0), ret(0);
	while (n--) {
		int v; cin >> v;
		if (cur == v) {
			ret++;
			cur++;
			if (cur > 2) cur = 0;
		}
	}
	cout << ret;
}