#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	double num;
	if ((double)b / c >= (double)c / b)
		num = (double)b / c;
	else
		num = (double)c / b;
	cout << (int)(a * num);
}