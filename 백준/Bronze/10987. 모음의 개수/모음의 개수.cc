#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string st; cin >> st;
	int cnt(0);
	for (int i = 0; i < st.size(); i++) {
		if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u')
			cnt++;
	}
	cout << cnt;
}