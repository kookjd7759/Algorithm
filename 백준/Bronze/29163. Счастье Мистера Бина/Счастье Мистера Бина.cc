#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int size; cin >> size;
	int odd = 0, even = 0;
	while (size--) {
		int num; cin >> num;
		if (num % 2 == 0)
			even++;
		else
			odd++;
	}

	if (even > odd)
		cout << "Happy";
	else
		cout << "Sad";
}
