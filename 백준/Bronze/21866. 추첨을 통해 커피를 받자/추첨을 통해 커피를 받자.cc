#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int s[9]{ 100, 100, 200, 200, 300, 300, 400, 400, 500 };
	int ans[9];
	int sum(0);
	for (int i = 0; i < 9; i++) cin >> ans[i];
	for (int i = 0; i < 9; i++) {
		if (s[i] < ans[i]) { sum = -1; break; }
		else sum += ans[i];
	}

	if (sum < 0) cout << "hacker";
	else sum >= 100 ? cout << "draw" : cout << "none";
}