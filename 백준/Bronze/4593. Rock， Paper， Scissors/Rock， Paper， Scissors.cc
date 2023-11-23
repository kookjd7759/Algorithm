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

	while (true) {
		string a, b; in a >> b;
		if (a == "E" && b == "E") break;

		int p1(0), p2(0);
		Fori(a.size()) {
			if (a[i] == 'R') {
				if (b[i] == 'S') p1++;
				else if (b[i] == 'P') p2++;
			}
			else if (a[i] == 'S') {
				if (b[i] == 'P') p1++;
				else if (b[i] == 'R') p2++;
			}
			else {
				if (b[i] == 'R') p1++;
				else if (b[i] == 'S') p2++;
			}
		}
		out "P1: " << p1 endl;
		out "P2: " << p2 endl;
	}
}
