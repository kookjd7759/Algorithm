#include <iostream>
#include <cstring>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	bool chlist[26]; memset(chlist, false, sizeof chlist);
	string st; cin >> st;
	for (int i = 0; i < st.size(); i++) chlist[st[i] - 'A'] = true;
	for (int i = 0; i < 26; i++)
		if (!chlist[i]) { cout << (char)(i + 'A'); break; }
}