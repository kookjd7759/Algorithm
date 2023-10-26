#include <iostream>
#include <algorithm>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >> 
#define out cout << 

using namespace std;

int arr[1000];

int main() {
	Sync;

	int n; in n;
	for (int i = 0; i < n; i++) in arr[i];
	sort(arr, arr + n);

	out arr[n - 1] - arr[0];
}