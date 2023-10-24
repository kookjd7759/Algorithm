#include <iostream>
#include <stack>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;

stack<int> st;

int main() {
	Sync;

	int n; cin >> n;
	while (n--) {
		int a; cin >> a;
		st.push(a);
	}

	int cnt(0), prev(0);
	while (!st.empty()) {
		int num = st.top();
		st.pop();

		if (num > prev) {
			cnt++;
			prev = num;
		}
	}
	cout << cnt;
}