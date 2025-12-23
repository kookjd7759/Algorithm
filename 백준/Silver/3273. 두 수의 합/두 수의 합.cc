#include <iostream>
#include <algorithm>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	int n, target, cnt(0); cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i) cin >> arr[i];
	sort(arr, arr + n);
	cin >> target;

	int l(0), r(n - 1);
	while (l < r) {
		int sum = arr[l] + arr[r];
		if (sum <= target) {
			if (sum == target) cnt++;
			l++;
		}
		else r--;
	}

	cout << cnt;

	delete[] arr;
	return 0;
}