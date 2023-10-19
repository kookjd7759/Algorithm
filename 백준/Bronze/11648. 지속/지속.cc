#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string st; cin >> st;
	int ret(0);
	while (st.size() > 1) {
		int num(1);
		for (int i = 0; i < st.size(); i++) num *= (st[i] - 48);
		st = to_string(num);
		ret++;
	}
	cout << ret;
}