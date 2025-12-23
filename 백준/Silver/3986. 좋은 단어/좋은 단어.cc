#include <iostream>
#include <stack>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	int n, cnt(0); cin >> n;
	for (int i = 0; i < n; ++i) {
		string word; cin >> word;
		stack<char> st;
		for (int j = 0; j < word.size(); ++j) {
			char c = word[j];
			if (st.empty()) st.push(c);
			else {
				if (st.top() == c) st.pop();
				else st.push(c);
			}
		}

		if (st.size() == 0) cnt++;
	}
	cout << cnt;

	return 0;
}