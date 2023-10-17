#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int fact[6]; fact[1] = 1;
	for (int i = 2; i < 6; i++) fact[i] = fact[i - 1] * i;
	while (true) {
		string st; cin >> st;
		if (st.size() == 1 && st[0] == '0') break;

		int ret(0);
		for (int i = 0; i < st.size(); i++) 
			ret += (st[st.size() - 1 - i] - 48) * fact[i + 1];
		cout << ret << "\n";
	}
}