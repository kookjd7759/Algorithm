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
	Fixed(8);

	int n;
	double x(0.0), y(0.0);
	in n >> x >> y;
	Fori(n - 1) {
		string st; in st;
		double d; in d;
		if (st.size() != 1) d = sqrt(d * d / 2.0);
		Forj(st.size()) {
			if (st[j] == 'N') y += d;
			else if (st[j] == 'E') x += d;
			else if (st[j] == 'W') x -= d;
			else if (st[j] == 'S') y -= d;
		}
	}
	out x spc y;
}