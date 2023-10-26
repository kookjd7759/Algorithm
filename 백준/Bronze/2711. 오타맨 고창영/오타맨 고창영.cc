#include <iostream>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;

int main() {
	Sync;

	int t; cin >> t;
	while (t--) {
		int n; string st; cin >> n >> st;
		for (int i = 0; i < st.size(); i++) {
			if (i != n - 1) cout << st[i];
		}
		cout Endl;
	}
}