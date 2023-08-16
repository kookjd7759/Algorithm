#include <iostream>

using namespace std;

int main() {
	while (true) {
		int a, b, c; cin >> a >> b >> c;
		if (a == 0 and b == 0 and c == 0)
			break;

		int max_ = max(a, max(b, c));
		int sum;
		if (a == max_)
			sum = b + c;
		else if (b == max_)
			sum = a + c;
		else
			sum = a + b;
		if (max_ >= sum)
			cout << "Invalid\n";
		else
			if (a == b and b == c)
				cout << "Equilateral\n";
			else if (a == b or a == c or b == c)
				cout << "Isosceles\n";
			else
				cout << "Scalene\n";
	}
}