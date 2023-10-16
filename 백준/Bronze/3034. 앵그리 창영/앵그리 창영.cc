#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, w, h; cin >> n >> w >> h;
	int c = sqrt((w * w + h * h));
	while (n--) {
		int l; cin >> l;
		if (l > w && l > h && l > c) cout << "NE\n";
		else cout << "DA\n";
	}
}