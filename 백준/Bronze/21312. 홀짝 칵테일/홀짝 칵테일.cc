#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b, c; cin >> a >> b >> c;
	bool a_o = (a & 1);
	bool b_o = (b & 1);
	bool c_o = (c & 1);
	if (a_o == b_o && b_o == c_o) cout << a * b * c;
	else {
		int ret(1);
		if (a_o) ret *= a;
		if (b_o) ret *= b;
		if (c_o) ret *= c;
		cout << ret;
	}
}