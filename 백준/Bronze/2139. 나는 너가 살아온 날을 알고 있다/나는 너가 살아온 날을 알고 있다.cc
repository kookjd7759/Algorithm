#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed; cout.precision(x);
#define Interactive cin.tie(0)->sync_with_stdio(0);
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
	int d, m, y;
	int mArr[12] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };

	while (true) {
		in d >> m >> y;
		if (!d && !m && !y) break;

		int ret(0);
		bool ch = false;
		if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) ch = 1;
		if (ch && m > 2) ret++;

		Fori(m) ret += mArr[i];

		ret += d;

		out ret endl;
	}
}