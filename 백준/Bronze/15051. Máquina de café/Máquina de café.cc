#include <iostream>

using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	int f = b * 2 + c * 4;
	int s = a * 2 + c * 2;
	int t = a * 4 + b * 2;
	cout << min(f, min(s, t));
}