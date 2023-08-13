#include <iostream>

using namespace std;

int main() {
	int arr[9][9];
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			cin >> arr[i][j];

	int max = -1;
	pair<int, int> pos = { -1, -1 };
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			if (max < arr[i][j]) {
				max = arr[i][j];
				pos.first = i;
				pos.second = j;
			}

	cout << max << "\n";
	cout << pos.first + 1 << " " << pos.second + 1;
}