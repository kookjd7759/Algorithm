#include <iostream>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >> 
#define out cout << 
#define spc << " " << 
#define ent << "\n"

using namespace std;

int main() {
	Sync;

	string st; in st;
	int l(0), r(0);
	for (int i = 0; i < st.size() / 2; i++) l += (st[i] - 48);
	for (int i = st.size() / 2; i < st.size(); i++) r += (st[i] - 48);
	if (l == r) cout << "LUCKY";
	else cout << "READY";
}