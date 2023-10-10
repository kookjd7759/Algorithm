#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double A, B; cin >> A >> B;
	cout << 1.0 / (1.0 + pow(10, ((B - A) / 400.0)));
}
