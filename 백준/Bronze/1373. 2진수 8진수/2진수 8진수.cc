#include <iostream>
#include <string>

using namespace std;

int dp[1005];

int main() {
	string st; cin >> st;
	while (st.size() % 3 != 0) 
		st = "0" + st;
	
	string result = "";
	for (int i = 0; i < st.size() / 3; i++) {
		int num = 0;
		if (st[i * 3] == '1')
			num += 4;

		if (st[i * 3 + 1] == '1')
			num += 2;

		if (st[i * 3 + 2] == '1')
			num += 1;

		result.push_back(num + 48);
	}
	cout << result;
}