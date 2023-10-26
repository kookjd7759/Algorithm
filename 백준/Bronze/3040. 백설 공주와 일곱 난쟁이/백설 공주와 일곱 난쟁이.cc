#include <iostream>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;

int arr[9];

int main() {
	Sync;

	int sum(0);
	for (int i = 0; i < 9; i++) {
		cin >> arr[i]; sum += arr[i];
	}

	for (int i = 0; i < 9; i++) for (int j = 0; j < 9; j++) {
		if (i != j) {
			int num = sum - (arr[i] + arr[j]);
			if (num == 100) {
				for (int k = 0; k < 9; k++) 
					if (k != i && k != j) cout << arr[k] << "\n";
				exit(0);
			}
		}
	}
}