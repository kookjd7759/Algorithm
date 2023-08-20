#include <iostream>

using namespace std;

int main() {
	int tc; cin >> tc;
	while (tc--) {
		string st; cin >> st;
		if (st.length() >= 6 and st.length() <= 9)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}