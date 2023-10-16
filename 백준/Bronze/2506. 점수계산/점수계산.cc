#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int point(1), score(0);
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		if (num) score += point++;
		else point = 1;
	}
	cout << score;
}