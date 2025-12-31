#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	int n; cin >> n;
	int maxi(-2e9);
	string ans("");
	for (int i = 0; i < n; ++i) {
		string st; int a;
		cin >> st >> a;
		if (maxi < a) {
			maxi = a;
			ans = st;
		}
	}

	cout << ans;

	return 0;
}
