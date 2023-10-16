#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	for (int i = 1; i <= t; i++) {
		int a, b; cin >> a >> b;
		vector<int> vec(b + 1);
		for (int j = 1; j <= b; j++) cin >> vec[j];

		int cur = vec[a];
		int ret(1);
		while (cur != 0) {
			ret++;
			cur = vec[cur];
		}
		cout << "Data Set " << i << ":\n" << ret << "\n\n";
	}
}