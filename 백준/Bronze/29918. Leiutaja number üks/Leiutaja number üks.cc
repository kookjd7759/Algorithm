#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n[6][2];
	for (int i = 0; i < 6; i++) cin >> n[i][0] >> n[i][1];

	int my = (n[0][0] + n[0][1] * 10);
	int max_(0);
	for (int i = 1; i < 6; i++) {
		max_ = max(max_, n[i][0] + n[i][1] * 10);
	}
	if (max_ < my) cout << 0;
	else cout << max_ - my + 1;
}