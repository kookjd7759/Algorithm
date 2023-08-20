#include <iostream>

using namespace std;

int main() {
	int a1, b1; cin >> a1 >> b1;
	int a2, b2; cin >> a2 >> b2;
	cout << min(a1 + b2, a2 + b1);
}