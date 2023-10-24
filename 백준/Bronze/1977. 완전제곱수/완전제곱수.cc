#include <iostream>
#include <cstring>

#define sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

int arr[10001];

int main() {
	sync;
	memset(arr, 0, sizeof(arr));
	for (int i = 1; i * i <= 10000; i++) arr[i * i] = i;

	int m, n; cin >> m >> n;
	int sum(0), min_(2e9);
	bool first = true;
	for (int i = m; i <= n; i++) {
		if (arr[i]) {
			if (first) { min_ = i; first = false; }
			sum += i;
		}
	}

	sum == 0 ? cout << -1 : cout << sum << "\n" << min_;
}