#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int prev(0), ret(0);
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		if (prev <= a) ret++;
		prev = a;
	}
	cout << ret;
}