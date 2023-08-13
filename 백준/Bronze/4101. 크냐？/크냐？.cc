#include <iostream>

using namespace std;

int main() {
	while (true) {
		int num1, num2; cin >> num1 >> num2;
		if (num1 == 0 and num2 == 0)
			break;

		if (num1 > num2)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}