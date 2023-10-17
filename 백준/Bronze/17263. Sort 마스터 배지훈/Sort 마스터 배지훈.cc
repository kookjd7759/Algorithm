#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int ret(0);
	while (n--) {
		int num; cin >> num;
		ret = max(ret, num);
	}
	cout << ret;
}