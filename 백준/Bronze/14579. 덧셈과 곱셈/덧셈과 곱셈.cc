#include <iostream>

#define ull unsigned long long

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int a, b; cin >> a >> b;
	ull ret(1);
	for (ull i = a; i <= b; i++) {
		ret *= ((1 + i) * i / 2);
		ret %= 14579;
	}
	cout << ret;
}