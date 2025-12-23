#include <iostream>
#include <stack>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	int n; cin >> n;
	long long arr[90]; arr[0] = arr[1] = 1;
	for (int i = 2; i < n; ++i) arr[i] = arr[i - 1] + arr[i - 2];
	cout << arr[n - 1];

	return 0;
}
