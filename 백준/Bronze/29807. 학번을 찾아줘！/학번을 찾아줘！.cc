#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	int arr[5]{ 0, 0, 0, 0, 0 };
	for (int i = 0; i < t; i++) cin >> arr[i];

	int ret(0);
	if (arr[0] > arr[2]) ret += (arr[0] - arr[2]) * 508;
	else ret += (arr[2] - arr[0]) * 108;

	if (arr[1] > arr[3]) ret += (arr[1] - arr[3]) * 212;
	else ret += (arr[3] - arr[1]) * 305;

	if (arr[4] > 0) ret += arr[4] * 707;

	ret *= 4763;

	cout << ret;
}