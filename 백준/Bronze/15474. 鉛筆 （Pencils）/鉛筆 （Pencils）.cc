#include <iostream>

using namespace std;

int main() {
	int n, a, b, c, d; cin >> n >> a >> b >> c >> d;
	int ret1, ret2;
	if (n % a != 0) ret1 = ((n / a) + 1) * b;
	else ret1 = (n / a)  * b;
	if (n % c != 0) ret2 = ((n / c) + 1) * d;
	else ret2 = (n / c)  * d;
	cout << min(ret1, ret2);
}
