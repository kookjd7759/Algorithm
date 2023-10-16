#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (true) {
		string st; cin >> st;
		if (st.size() == 1 && st[0] == '0') break;

		int ret(0);
		for (int i = 0; i < st.size(); i++) {
			if (st[i] == '1') ret += 2;
			else if (st[i] == '0') ret += 4;
			else ret += 3;
		}
		ret += st.size() + 1;
		cout << ret << "\n";
	}
}