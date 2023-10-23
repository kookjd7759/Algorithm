#include <iostream>
#include <cstring>

using namespace std;

int arr[10001];

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	memset(arr, 0, sizeof(arr));

	for (int i = 1; i < 10001; i++) for (int j = i; j < 10001; j += i) 
		arr[j]++;

	int t; cin >> t;
	while (t--) {
		int a; cin >> a;
		cout << a << " " << arr[a] << "\n";
	}
}