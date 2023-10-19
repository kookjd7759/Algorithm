#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	double t; cin >> t;
	double n = t / 2.0;
	cout << (int)(n * n + 0.5) << "\n";
}