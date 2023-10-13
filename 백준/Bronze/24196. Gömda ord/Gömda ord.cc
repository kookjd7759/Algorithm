#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string st; cin >> st;
	int index(0);
	while (index <= st.size() - 1) {
		cout << st[index];
		index += (st[index] - ('A' - 1));
	}
}