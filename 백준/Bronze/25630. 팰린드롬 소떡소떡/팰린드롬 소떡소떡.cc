#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	string st; cin >> st;
	int l(0), r(n - 1), ret(0);
	while (l <= r) {
		if (st[l] != st[r]) ret++;
		l++;
		r--;
	}
	cout << ret;
}