#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int num = n, ret(0);
	auto func = [&](int a) -> void {
		while (num + a <= 1000) {
			num += a; ret++;
		}
		};
	func(500);
	func(100);
	func(50);
	func(10);
	func(5);
	func(1);
	cout << ret;
}