#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int A, B, C; cin >> A >> B >> C;
	int n; cin >> n;
	int ret(0);
	while (n--) {
		int score(0);
		for (int i = 0; i < 3; i++) {
			int a, b, c; cin >> a >> b >> c;
			score += a * A + b * B + c * C;
		}
		ret = max(ret, score);
	}
	cout << ret;
}