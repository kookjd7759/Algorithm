#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b; cin >> a >> b;
	a == 1 ? cout << a * b : cout << a * b - (a - 1);
}