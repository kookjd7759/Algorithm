#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int hp, mp, at, df, h_, m_, a_, d_;
		cin >> hp >> mp >> at >> df >> h_ >> m_ >> a_ >> d_;
		int h = hp + h_; if (h < 1) h = 1;
		int m = mp + m_; if (m < 1) m = 1;
		int a = at + a_; if (a < 0) a = 0;
		int d = df + d_;

		cout << h + 5 * m + 2 * a + 2 * d << "\n";
	}
}