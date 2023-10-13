#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string st; cin >> st;
	int r(st.size() - 1);
	while (r >= 0 && st[r] == '0') r--;

	int cnt(0);
	for (int i = 0; i <= r; i++) 
		if (st[i] == '0') cnt++;
	cout << cnt;
}