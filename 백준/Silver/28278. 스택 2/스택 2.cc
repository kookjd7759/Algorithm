#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	stack<int> st;
	int size; cin >> size;
	while (size--) {
		int ver; cin >> ver;
		if (ver == 1) {
			int x; cin >> x;
			st.push(x);
		}
		else if(ver == 2) {
			if (!st.empty()) {
				cout << st.top() << "\n";
				st.pop();
			}
			else
				cout << "-1" << "\n";
		}
		else if (ver == 3) {
			cout << st.size() << "\n";
		}
		else if (ver == 4) {
			if (st.empty())
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}
		else { // ver == 5
			if (!st.empty())
				cout << st.top() << "\n";
			else
				cout << "-1" << "\n";
		}
	}
	
}