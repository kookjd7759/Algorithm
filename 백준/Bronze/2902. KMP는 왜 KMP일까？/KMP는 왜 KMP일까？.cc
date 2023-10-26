#include <iostream>
#include <stack>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;

int main() {
	Sync;

	string st; cin >> st;
	string ret = ""; ret += st[0];
	for (int i = 1; i < st.size(); i++) {
		if (st[i] == '-') ret += st[i + 1];
	}
	cout << ret;
}