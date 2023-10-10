#include <iostream>
#include <string>

using namespace std;

int main() {
	int ret(0);
	string st; cin >> st;
	for (int i = 0; i < st.size(); i++)
		if (st[i] == '7') { ret += 2; break; }
	
	if (stoi(st) % 7 == 0) ret++;
	
	cout << ret;
}
