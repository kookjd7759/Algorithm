#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (true) {
		int a, b; cin >> a >> b;
		if (a + b == 0) break;

		cout << a - (b - a) << "\n";
	}
}