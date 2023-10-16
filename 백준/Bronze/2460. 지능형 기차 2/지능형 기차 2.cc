#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int cur(0), ret(0);
	for (int i = 0; i < 10; i++) {
		int a, b; cin >> a >> b;
		cur -= a;
		cur += b;
		ret = max(ret, cur);
	}
	cout << ret;
}