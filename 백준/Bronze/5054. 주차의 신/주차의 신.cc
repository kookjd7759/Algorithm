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
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)

using namespace std;

int main() {
	Sync;

	int t; in t;
	while (t--) {
		int n; in n;
		int ma(0), mi(2e9);
		Fori(n) {
			int a; in a; 
			ma = max(ma, a);
			mi = min(mi, a);
		}
		out(ma - mi) * 2 endl;
	}
}