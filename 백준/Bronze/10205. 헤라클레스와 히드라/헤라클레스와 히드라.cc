#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	for (int i = 1; i <= t; i++) {
		int head(1); cin >> head;
		string st; cin >> st;
		for (int j = 0; j < st.size(); j++) {
			if (st[j] == 'c') head++;
			else head--;
		}
		cout << "Data Set " << i << ":\n";
		cout << head << "\n\n";
	}
}