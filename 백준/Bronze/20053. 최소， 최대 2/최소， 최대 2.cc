#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
	while (t--) {
		int n; cin >> n; n--;
		int l; cin >> l;
		int r = l;
		while (n--) {
			int temp; cin >> temp;
			l = min(l, temp);
			r = max(r, temp);
		}
		cout << l << " " << r << "\n";
	}
}