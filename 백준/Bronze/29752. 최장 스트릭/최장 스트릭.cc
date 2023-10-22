#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n; cin >> n;
	int ret(0), cnt(0);
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		if (a) {
			cnt++;
			ret = max(ret, cnt);
		}
		else cnt = 0;
	}
	cout << ret;
}