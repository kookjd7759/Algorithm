#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, k; cin >> n >> k;
	int ret(0);
	while (n--) {
		int num; cin >> num;
		if (num <= k) ret++;
	}
	cout << ret;
}