#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int ret;
	if (n & 1) ret = 0;
	else ((n / 2) & 1) ? ret = 1 : ret = 2;

	cout << ret;
}