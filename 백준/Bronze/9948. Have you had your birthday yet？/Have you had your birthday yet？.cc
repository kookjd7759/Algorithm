#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
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
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
	Sync;
	
	string month[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug",
	"Sep", "Oct", "Nov", "Dec" };

	while (true) {
		int d, m; string st; in d >> st;
		if (d == 0 && st == "#") break;

		st = st.substr(0, 3);
		Fori(12) if (st == month[i]) m = i + 1;
		if (d == 29 && m == 2) out "Unlucky";
		else if (d == 4 && m == 8) out "Happy birthday";
		else {
			if (m < 8) out "Yes";
			else if (m > 8) out "No";
			else {
				if (d < 4) out "Yes";
				else out "No";
			}
		}
		ent;
	}
}