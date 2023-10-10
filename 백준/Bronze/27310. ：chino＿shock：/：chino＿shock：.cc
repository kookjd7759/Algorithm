#include <iostream>

using namespace std;

int main() {
	string st; cin >> st;
	int ret(0);
	for (int i = 0; i < st.size(); i++){
		if (st[i] == '_') ret += 5;
		else if (st[i] == ':') ret++;
	}
	cout << ret + st.size();
}
