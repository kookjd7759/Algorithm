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
		int n; in n;
		if (!n) break;

		int Joe(0), James(0), Jean(0), Jane(0), X(0);
		Fori(n) {
			string st; in st;
			if ('A' <= st[0] && st[0] <= 'Z') {
				if (st[0] == 'X') X++;
				else if (st[0] == 'M' || st[0] == 'L') Joe++;
				else James++;
			}
			else {
				int size = stoi(st);
				if (size >= 12) Jean++;
				else Jane++;
			}
		}
		out Joe spc Jean spc Jane spc James spc X endl;
	}
}