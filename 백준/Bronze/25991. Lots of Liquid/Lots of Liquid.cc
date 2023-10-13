#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << fixed; cout.precision(7);
	int n; cin >> n;
	double sum(0.0);
	while (n--) {
		double a; cin >> a; sum += pow(a, 3);
	}
	cout << pow(sum, 1.0 / 3);
}