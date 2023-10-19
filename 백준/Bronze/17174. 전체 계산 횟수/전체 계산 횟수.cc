#include <iostream>

using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int cnt = n;
	while (true) {
		n /= m;
		cnt += n;
		if (n < m) break;
	}
	cout << cnt;
}