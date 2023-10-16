#include <iostream>
#include <cstring>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		bool alpa[26]; memset(alpa, false, sizeof(alpa));
		string st; cin >> st;
		for (int i = 0; i < st.size(); i++) alpa[st[i] - 65] = true;

		int sum(0);
		for (int i = 0; i < 26; i++)
			if (!alpa[i]) sum += i + 65;

		cout << sum << "\n";
	}
}