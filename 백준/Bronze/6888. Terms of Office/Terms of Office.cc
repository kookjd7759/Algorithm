#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int term = 60, s, e; cin >> s >> e;
	int n = s;
	while (n <= e) {
		cout << "All positions change in year " << n << "\n";
		n += term;
	}
}