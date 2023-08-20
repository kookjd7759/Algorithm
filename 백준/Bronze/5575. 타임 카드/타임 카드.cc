#include <iostream>

using namespace std;

int main() {
	for (int i = 0; i < 3; i++) {
		int h, m, s; cin >> h >> m >> s;
		int h_, m_, s_; cin >> h_ >> m_ >> s_;
		int h__ = h_ - h;
		int m__ = m_ - m;
		int s__ = s_ - s;
		if (s__ < 0) {
			s__ += 60;
			m__--;
		}

		if (m__ < 0) {
			m__ += 60;
			h__--;
		}

		cout << h__ << " " << m__ << " " << s__ << "\n";
	}
}