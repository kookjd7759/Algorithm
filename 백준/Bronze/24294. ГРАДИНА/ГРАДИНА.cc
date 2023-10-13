#include <iostream>

using namespace std;

int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	cout << (max(a, c) + 2) * ((b + d) + 2) - (max(a, c) * (b + d));
}