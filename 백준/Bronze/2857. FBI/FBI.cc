#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	vector<int> vec;
	for (int i = 0; i < 5; i++) {
		string st; cin >> st;
		for (int j = 0; j < st.size() - 2; j++)
			if (st[j] == 'F' && st[j + 1] == 'B' && st[j + 2] == 'I') {
				vec.push_back(i + 1);
				break;
			}
	}
	if (vec.size() == 0) cout << "HE GOT AWAY!";
	else for (const auto iter : vec)
		cout << iter << " ";
}