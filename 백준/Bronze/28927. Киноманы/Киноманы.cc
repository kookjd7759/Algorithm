#include <iostream>

using namespace std;

int main() {
	int sum1 = 0, sum2 = 0;
	int a1, a2, a3, b1, b2, b3;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	sum1 = a1 * 3 + a2 * 20 + a3 * 120;
	sum2 = b1 * 3 + b2 * 20 + b3 * 120;

	if (sum1 > sum2)
		cout << "Max";
	else if (sum1 < sum2)
		cout << "Mel";
	else
		cout << "Draw";
}