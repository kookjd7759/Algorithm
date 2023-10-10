#include <iostream>

using namespace std;

int main() {
	int ret = 11 * 24 * 60 + 11 * 60 + 11;
	int d, h, m; cin >> d >> h >> m;
	ret = d * 24 * 60 + h * 60 + m - ret;
	ret < 0 ? cout << -1 : cout << ret;
}
