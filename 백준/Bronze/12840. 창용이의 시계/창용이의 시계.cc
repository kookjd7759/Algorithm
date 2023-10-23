#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int cur_h, cur_m, cur_s; cin >> cur_h >> cur_m >> cur_s;
	int cur_time = cur_h * 60 * 60 + cur_m * 60 + cur_s;
	int q; cin >> q;
	while (q--) {
		int t; cin >> t;
		if (t == 1) {
			int c; cin >> c;
			cur_time += c;
			while (cur_time >= 24 * 60 * 60) cur_time -= 24 * 60 * 60;
		}
		else if (t == 2) {
			int c; cin >> c;
			cur_time -= c;
			while (cur_time < 0) cur_time = 24 * 60 * 60 + cur_time;
		}
		else {
			int temp = cur_time;
			cout << temp / (60 * 60) << " ";
			temp %= 60 * 60;
			cout << temp / 60 << " ";
			temp %= 60;
			cout << temp << "\n";
		}
	}
}