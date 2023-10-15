#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	string st; cin >> st;
	for (int i = 0; i < 5; i++) {
		cout << st[st.size() - 5 + i];
	}
}