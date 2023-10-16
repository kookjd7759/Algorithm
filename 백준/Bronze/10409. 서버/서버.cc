#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, t; cin >> n >> t;
	int arr[50];
	for (int i = 0; i < n; i++) cin >> arr[i];

	int cnt(0);
	for (int i = 0; i < n; i++) {
		if (t - arr[i] >= 0) {
			cnt++;
			t -= arr[i];
		}
		else break;
	}
	cout << cnt;
}