#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int ret(2e9);
	while (n--) {
		int a, b; cin >> a >> b;
		ret = min(ret, a + b);
	}
	cout << ret;
}