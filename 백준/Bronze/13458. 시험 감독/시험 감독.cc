#include <iostream>

#define sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

int arr[1000001];

int main() {
	sync;

	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	int b, c; cin >> b >> c;

	long long ret(0);
	for (int i = 0; i < n; i++) {
		arr[i] -= b;
		ret++;
		if (arr[i] <= 0) continue;

		if (arr[i] % c > 0) ret += arr[i] / c + 1;
		else ret += arr[i] / c;
	}
	cout << ret;
}