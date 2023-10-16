#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int ret(0);
	while (n--) {
		int a, b; cin >> a >> b;
		ret += b % a;
	}
	cout << ret;
}