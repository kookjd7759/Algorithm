#include <iostream>

using namespace std;

int main() {
	int x, y, z; cin >> x >> y >> z;
	z *= 60; z += 30;
	x *= 60; y *= 60;
	x + y <= z ? cout << 1 : cout << 0;
}