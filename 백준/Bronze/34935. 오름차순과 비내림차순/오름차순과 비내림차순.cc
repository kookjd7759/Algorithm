#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	long long int* arr = new long long int[n];
	for (int i = 0; i < n; ++i) cin >> arr[i];
	
	bool isUp = true;
	for (int i = 0; i < n - 1; ++i) if (arr[i] >= arr[i + 1])
	{ isUp = false; break; }
	cout << (isUp ? 1 : 0);

	return 0;
}