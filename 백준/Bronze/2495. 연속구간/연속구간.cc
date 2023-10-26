#include <iostream>
#include <cmath>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)

using namespace std;

int main() {
	Sync;

	Fori(3) {
		string st; in st;
		int ret(1), now(1);
		char prev = '-';
		Forj(st.size()) {
			st[j] == prev ? now++ : now = 1;
			prev = st[j];
			ret = max(ret, now);
		}
		out ret endl;
	}
}