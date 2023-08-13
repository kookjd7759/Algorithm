#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
	array<int, 9> arr;
	int Sum = 0;
	for (int& iter : arr) {
		cin >> iter;
		Sum += iter;
	}
	sort(arr.begin(), arr.end());

	for (int i = 0; i < arr.size() - 1; i++)
		for (int j = i + 1; j < arr.size(); j++) {
			if (Sum - (arr[i] + arr[j]) == 100) {
				for (int k = 0; k < arr.size(); k++) {
					if (k != i && k != j)
						cout << arr[k] << "\n";
				}

				exit(0);
			}
		}


}