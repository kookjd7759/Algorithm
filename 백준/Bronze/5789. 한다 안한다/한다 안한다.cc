#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	while (n--) {
		string st; cin >> st;
		if (st[st.size() / 2 - 1] == st[st.size() / 2]) cout << "Do-it\n";
		else cout << "Do-it-Not\n";
	}
}