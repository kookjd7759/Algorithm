#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int bdt[3][2];
	for (int i = 0; i < 3; i++) {
		cin >> bdt[i][0]; cin >> bdt[i][1];
	}
	int b = max(abs(bdt[0][0] - bdt[2][0]), abs(bdt[0][1] - bdt[2][1]));
	int d = abs(bdt[1][0] - bdt[2][0]) + abs(bdt[1][1] - bdt[2][1]);
	if (b == d) cout << "tie";
	else b < d ? cout << "bessie" : cout << "daisy";
}