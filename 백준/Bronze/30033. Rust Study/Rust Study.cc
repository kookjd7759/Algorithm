#include <iostream>

using namespace std;

int arr[1000];

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];

	int ret(0);
	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		if (arr[i] <= num) ret++;
	}
	cout << ret;
}
