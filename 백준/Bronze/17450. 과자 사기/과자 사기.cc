#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int sk[3][2];
	for (int i = 0; i < 3; i++) {
		cin >> sk[i][0]; cin >> sk[i][1];
	}
	double min_(2e9);
	int min_idx(0);
	for (int i = 0; i < 3; i++) {
		int price = sk[i][0] * 10, kg = sk[i][1] * 10;
		if (price >= 5000) price -= 500;
		double d = (double)price / (double)kg;
		if (min_ > d) {
			min_idx = i;
			min_ = d;
		}
	}
	if (min_idx == 0) cout << "S";
	else min_idx == 1 ? cout << "N" : cout << "U";
}