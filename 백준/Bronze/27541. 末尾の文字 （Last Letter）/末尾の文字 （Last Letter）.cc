#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	string st; cin >> st;
	if (st[st.size() - 1] == 'G') for (int i = 0; i < st.size() - 1; i++) cout << st[i];
	else { for (int i = 0; i < st.size(); i++) cout << st[i]; cout << "G"; }
}