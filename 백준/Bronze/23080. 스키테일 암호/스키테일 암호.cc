#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	string st; cin >> st;
	for (int i = 0; i < st.size(); i += n)
		cout << st[i];
}