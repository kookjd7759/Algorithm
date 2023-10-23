#include <iostream>
#include <cmath>

using namespace std;

int HIARC[5]{ 0, 0, 0, 0, 0 };

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		char c; cin >> c;
		if (c == 'H') HIARC[0]++;
		else if (c == 'I') HIARC[1]++;
		else if (c == 'A') HIARC[2]++;
		else if (c == 'R') HIARC[3]++;
		else if (c == 'C') HIARC[4]++;
	}
	cout << min(HIARC[0], min(HIARC[1], min(HIARC[2], min(HIARC[3], HIARC[4]))));
}