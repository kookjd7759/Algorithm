#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		int k; cin >> k;
		int media(0);
		string st; cin >> st;
		for (int i = 0; i < st.size(); i++) media |= (1 << (st[i] - 48));

		int cnt(0);
		while (k--) {
			int person(0);
			cin >> st;
			for (int i = 0; i < st.size(); i++) person |= (1 << (st[i] - 48));

			if (media & person) cnt++;
		}
		cout << "Data Set " << i << ":\n";
		cout << cnt << "\n\n";
	}
}