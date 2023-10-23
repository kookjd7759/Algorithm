#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long k, n; cin >> k >> n;
	if (n == 1) cout << "-1";
	else {
		long long ret = (k * n) / (n - 1);
		if ((k * n) % (n - 1)) ret++;
		cout << ret;
	}
}

// ret >= k * n / (n - 1)