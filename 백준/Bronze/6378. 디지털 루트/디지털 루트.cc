#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	auto digiroot = [&](string st) -> int {
		int num(0);
		for (int i = 0; i < st.size(); i++) num += st[i] - 48;
		return num;
		};

	string st;
	while (true) {
		cin >> st;
		if (st.size() == 1 && st[0] == '0') break;

		int num = digiroot(st);
		while (num >= 10) num = digiroot(to_string(num));
		cout << num << "\n";
	}
}