#include <iostream>

using namespace std;

int main() {
	long long a, b; cin >> a >> b;
	if ((a & 1) == 0 || (b & 1) == 0) cout << 0;
	else cout << min(a, b);
}