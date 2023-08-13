#include <iostream>
#include <cmath>

using namespace std;

unsigned int Compute(unsigned int distance) {
	unsigned int num = distance; 

	if (sqrt(num) != (unsigned int)sqrt(num)) {
		num = ((unsigned int)sqrt(num) + 1) * ((unsigned int)sqrt(num) + 1);
	}
	unsigned int pre = ((unsigned int)sqrt(num) - 1) * ((unsigned int)sqrt(num) - 1);
	
	if (distance == num)
		return num - pre;
	else {
		if (distance <= pre + ((num - pre - 1) / 2))
			return num - pre - 1;
		else
			return num - pre;
	}
}

int main() {
	unsigned short TestCase; cin >> TestCase;
	for (int i = 0; i < TestCase; i++) {
		unsigned int x, y, distance; cin >> x; cin >> y;
		distance = y - x;
		cout << Compute(distance) << endl;
	}

	return 0;
}