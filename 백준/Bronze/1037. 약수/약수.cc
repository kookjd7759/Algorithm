#include <iostream>

using namespace std;

int main() {
	int N, Max = 2, Min = 1000001;
	cin >> N;

	while (N--) {
		int num; cin >> num;

		if (Max < num)
			Max = num;
		if (Min > num)
			Min = num;
	}

	if (Max % 2 == 0)
		cout << Max * 2;
	else 
		cout << Max * Min;

	return 0;
}