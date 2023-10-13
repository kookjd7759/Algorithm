#include <iostream>

using namespace std;

int main() {
	int n, d; cin >> n >> d;
	int arr[30], cnt(0);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		cnt += arr[i];
	}

	int DperP = d / cnt;
	for (int i = 0; i < n; i++) {
		cout << arr[i] * DperP << "\n";
	}
}