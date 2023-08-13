#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> st;
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		if (num != 0)
			st.push(num);
		else 
			st.pop();
	}

	int sum = 0;
	while(st.size() != 0) {
		sum += st.top();
		st.pop();
	}

	cout << sum;

	return 0;
}