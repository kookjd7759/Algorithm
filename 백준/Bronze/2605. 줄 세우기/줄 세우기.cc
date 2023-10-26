#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;
int main() {
	Sync;

	int n; cin >> n;
	vector<int> arr(n);

	for (int i = 1; i <= n; i++) {
		int a; cin >> a;
		arr.insert(arr.begin() + a, i);
	}

	for (int i = n - 1; i >= 0; i--) cout << arr[i] << ' ';
}