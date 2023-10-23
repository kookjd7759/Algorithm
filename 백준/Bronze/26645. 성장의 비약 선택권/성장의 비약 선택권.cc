#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int list[4]{ n,n,n,n };
	for (int i = 0; i < 8; i++) {
		if (list[0] <= 209) list[0]++;
		else break;
	}

	for (int i = 0; i < 4; i++) {
		if (list[1] <= 219) list[1]++;
		else break;
	}

	for (int i = 0; i < 2; i++) {
		if (list[2] <= 229) list[2]++;
		else break;
	}

	if (list[3] <= 239) list[3]++;

	int max_ = list[0], idx(0);
	for (int i = 0; i < 4; i++)
		if (max_ <= list[i]) {
			max_ = list[i];
			idx = i;
		}
	cout << idx + 1;
}