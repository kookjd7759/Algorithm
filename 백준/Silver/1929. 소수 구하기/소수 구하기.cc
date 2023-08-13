#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int min; cin >> min;
	int max; cin >> max;

	bool* Arr = new bool[max + 1] {};

	Arr[0] = true; Arr[1] = true;

	for (int i = 2; i * i <= max; i++) {
		if (!Arr[i]) {
			for (int j = i * 2; j <= max;j += i) {
				if (Arr[j] == false)
					Arr[j] = true;
			}
		}
	}

	for (int i = min; i <= max; i++) {
		if (!Arr[i]) {
			cout << i << "\n";
		}
	}

	return 0;
}