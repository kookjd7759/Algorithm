#include <iostream>
#include <stack>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	string line; cin >> line;
	stack<char> st;
	for (int i = 0; i < line.size() - 1; ++i)
		if (line[i] == '(' && line[i + 1] == ')')
			line[i] = line[i + 1] = '-';
	int count(0), ans(0);
	for (int i = 0; i < line.size(); ++i) {
		if (line[i] == '(') {
			st.push('(');
			count++;
			ans++;
		}
		else if (line[i] == ')') {
			st.pop();
			count--;
		}
		else { // line[i] == '-'
			++i;
			ans += count;
		}
	}

	cout << ans;

	return 0;
}