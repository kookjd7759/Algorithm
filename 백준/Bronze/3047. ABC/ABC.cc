#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int arr[3]; cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	for (int i = 0; i < 3; i++) {
		char c; cin >> c;
		cout << arr[c - 65] << " ";
	}
}