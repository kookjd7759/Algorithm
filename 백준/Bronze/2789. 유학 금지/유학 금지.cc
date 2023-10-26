#include <iostream>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;

int main() {
	Sync;

	string st; cin >> st;
	for (int i = 0; i < st.size(); i++) {
		if (st[i] != 'A' && st[i] != 'B' && st[i] != 'C' &&
			st[i] != 'D' && st[i] != 'E' && st[i] != 'G' &&
			st[i] != 'I' && st[i] != 'M' && st[i] != 'R')
			cout << st[i];
	}
}