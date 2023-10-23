#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string st; cin >> st;
	int idx = st.size() % 3;
	if (idx == 0) idx = 3;
	for (int i = 0; i < st.size(); i++) {
		if (idx == i) {
			cout << ",";
			idx += 3;
		}
		cout << st[i];
	}
}