#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int score(0), prev = -2e9;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		if (a - prev != 1) score += a;
		prev = a;
	}
	cout << score;
}