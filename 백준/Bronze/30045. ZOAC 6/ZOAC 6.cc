#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int ret(0);
	while (n--) {
		string st; cin >> st;
		for (int i = 0; i < st.size() - 1; i++) {
			if (st[i] == '0' && st[i + 1] == '1') { ret++; break;  }
			else if (st[i] == 'O' && st[i + 1] == 'I') { ret++; break; }
		}
	}
	cout << ret;
}