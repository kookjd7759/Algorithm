#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int ret(0);
	string st;
	while (cin >> st) {
		if (st[0] != '-' && !(st.size() == 1 && st[0] == '0')) ret++;
	}
	cout << ret;
}