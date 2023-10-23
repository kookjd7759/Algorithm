#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, p(0), n(0), g(0); cin >> N;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		if (a == 0) g++;
		else a > 0 ? p++ : n++;
	}

	if (N & 1) {
		if (g > (N / 2)) cout << "INVALID";
		else if (p > n) cout << "APPROVED";
		else cout << "REJECTED";
	}
	else {
		if (g >= (N / 2)) cout << "INVALID";
		else if (p > n) cout << "APPROVED";
		else cout << "REJECTED";
	}
}