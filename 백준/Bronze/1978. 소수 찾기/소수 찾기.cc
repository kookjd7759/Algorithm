#include <iostream>

using namespace std;

int main() {
	short size; cin >> size;
	short ans = 0;
	bool IsIt;

	for (int i = 0; i < size; i++) {
		IsIt = true;
		int num; cin >> num;

		if (num == 1)
			IsIt = false;

		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				IsIt = false;
				break;
			}
		}

		if (IsIt)
			ans++;
	}

	cout << ans;

	return 0;
}