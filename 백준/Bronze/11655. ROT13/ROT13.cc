#include <iostream>
#include <string>

using namespace std;

int dp[1005];

int main() {
	string st; getline(cin, st);
	for (int i = 0; i < st.size(); i++) {
		if (st[i] >= 97 && st[i] <= 122) {
			st[i] += (13 - 97);
			st[i] %= 26;
			st[i] += 97;
		}
		else if (st[i] >= 65 && st[i] <= 90) {
			st[i] += (13 - 65);
			st[i] %= 26;
			st[i] += 65;
		}
	}
	cout << st;
}