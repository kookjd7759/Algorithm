#include <iostream>

using namespace std;

int main() {
	int n, p; cin >> n >> p;
	int ret = p;
	if (n >= 5) ret = min(p - 500, ret);
	if (n >= 10) ret = min(p / 10 * 9, ret);
	if (n >= 15) ret = min(p - 2000, ret);
	if (n >= 20) ret = min(p / 4 * 3, ret);
	ret <= 0 ? cout << 0 : cout << ret;
}