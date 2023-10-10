#include <iostream>

using namespace std;

int main() {
	double a1, p1, r1, p2; cin >> a1 >> p1 >> r1 >> p2;
	if ((a1 / p1) > ((r1 * r1 * 3.14159265358979323846264338) / p2)) cout << "Slice of pizza";
	else cout << "Whole pizza";
}