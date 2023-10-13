#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n; cin >> n;
	int ret(0);
	while (n--) {
		int a, b; cin >> a >> b;
		ret = max(ret, a * b);
	}
	cout << ret;
}