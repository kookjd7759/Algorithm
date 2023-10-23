#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	char c; cin >> c;
	cout << 84 + abs('I' - c);
}