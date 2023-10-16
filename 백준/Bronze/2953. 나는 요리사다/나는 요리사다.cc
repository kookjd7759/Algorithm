#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int arr[5]{ 0, 0, 0, 0, 0 };
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			int n; cin >> n;
			arr[i] += n;
		}
	}

	int mx(0), idx(0);
	for (int i = 0; i < 5; i++) {
		if (mx < arr[i]) {
			idx = i;
			mx = arr[i];
		}
	}

	cout << idx + 1 << " " << mx;
}