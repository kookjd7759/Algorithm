#include <iostream>

using namespace std;

int main() {
	int n1, n2; cin >> n1 >> n2;
	int a = 100 - n1; cout << a << " ";
	int b = 100 - n2; cout << b << " ";
	int c = 100 - (a + b); cout << c << " ";
	int d = a * b; cout << d << " ";
	int q = (d / 1000) * 10 + (d % 1000) / 100; cout << q << " ";
	int r = ((d % 100) / 10) * 10 + (d % 10); cout << r << "\n";
	cout << c + q << " " << r;
}