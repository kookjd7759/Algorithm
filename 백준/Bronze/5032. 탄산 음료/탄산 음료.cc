#include <iostream>

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

	int a, b, c; in a >> b >> c;
	int have = a + b, ret(0);
	while (have >= c) {
		int create = have / c;
		ret += create;
		have %= c;
		have += create;
	}
	out ret;
}