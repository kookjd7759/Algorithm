#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(6);
	double a, b; cin >> a >> b;
	cout << a*2 + 2* b * 3.141592;
}