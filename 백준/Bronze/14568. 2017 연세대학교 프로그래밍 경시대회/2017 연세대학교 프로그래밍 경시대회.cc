#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int ret(0);
	for (int i = 2; i < n - 1; i += 2) {
		int rest = n - i;
		ret += (rest - 2) / 2;
	}
	cout << ret;
}