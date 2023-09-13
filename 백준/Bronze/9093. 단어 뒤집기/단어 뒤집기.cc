#include <iostream>
#include <string>
#include <vector>

using namespace std;

int dp[1005];

int main() {
	int t; cin >> t;
	string st; getline(cin, st);
	while (t--) {
		getline(cin, st);
		vector<int> vec; vec.push_back(-1);
		for (int i = 0; i < st.size(); i++)
			if (st[i] == ' ')
				vec.push_back(i);
		vec.push_back(st.size());

		for (int i = 1; i < vec.size(); i++) {
			for (int j = vec[i] - 1; j >= vec[i - 1] + 1; j--)
				cout << st[j];
			cout << " ";
		}
		cout << "\n";
	}
}