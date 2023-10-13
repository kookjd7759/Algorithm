#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a, b, c; cin >> a >> b >> c;
	bool ch1 = min(a, b) / c >= 2;
	bool ch2 = max(a, b) / min(a, b) <= 2;
	ch1 && ch2 ? cout << "good" : cout << "bad";
}