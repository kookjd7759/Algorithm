#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string st; cin >> st;
		int cnt(0);
		for (int i = 0; i < st.size(); i++) {
			if (st[i] == 'D') break;
			cnt++;
		}
		cout << cnt << "\n";
	}
}