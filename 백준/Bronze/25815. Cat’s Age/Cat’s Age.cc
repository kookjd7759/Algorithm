#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed; cout.precision(x);
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

	int y, m; in y >> m;
	int rety(0), retm(0);

	if (y < 1) retm += 15 * m;
	else if (1 <= y && y < 2) rety += 15, retm = 9 * m;
	else if (y >= 2) {
		rety += 24;
		y -= 2;
		rety += y * 4;
		retm = m * 4;
	}

	if (retm > 12) rety += retm / 12, retm = retm % 12;
	out rety spc retm;
}