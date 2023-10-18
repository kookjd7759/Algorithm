#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int s1, s2; cin >> s1 >> s2;
	string ans[3] = { "Wrong Answer", "Why Wrong!!!", "Accepted" };
	bool ch1(true), ch2(true);
	for (int i = 0; i < s1; i++) {
		int n, a; cin >> n >> a;
		if (n != a) ch1 = false;
	}

	for (int i = 0; i < s2; i++) {
		int n, a; cin >> n >> a;
		if (n != a) ch2 = false;
	}

	if (ch1 && ch2) cout << ans[2];
	else ch1 ? cout << ans[1] : cout << ans[0];
}