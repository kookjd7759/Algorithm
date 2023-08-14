#include <iostream>
#include <iomanip>

using namespace std;

double getScore(string st) {
	if (st[0] == 'F')
		return 0.0;

	double result = 0.0;
	result += 69 - st[0];

	if (st[1] == '+')
		result += 0.5;

	return result;
}

int main() {
	cout << fixed << setprecision(6);
	double sum_sco = 0.0, sum_res = 0.0;
	for (int i = 0; i < 20; i++) {
		string st, st_; double num;
		cin >> st >> num >> st_;

		if (st_ != "P") {
			sum_sco += num;
			sum_res += num * getScore(st_);
		}
	}

	cout << sum_res / sum_sco;
}

