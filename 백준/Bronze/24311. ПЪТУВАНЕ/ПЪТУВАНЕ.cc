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
	
	int st_h, st_m; in st_h >> st_m;
	int to_h(0), to_m(0);
	int m1; in m1;
	int h2, m2; in h2 >> m2;
	int n; in n;
	int m3; in m3;

	to_h += h2;
	to_m += m1 + m2 + (n + 1) * m3 + 10;
	st_h -= to_h;
	st_m -= to_m;

	while (st_m < 0) {
		st_m += 60;
		st_h--;
	}

	if (st_h < 10) out 0;
	out st_h;
	out " ";
	if (st_m < 10) out 0;
	out st_m;
}