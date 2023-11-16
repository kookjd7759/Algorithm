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

	int user(0);
	int l; in l;
	while (l) {
		out "User " << ++user endl;

		int Q; in Q;
		while (Q--) {
			int x; in x;
			x *= l;

			out x / 100000 << '.';
			x %= 100000;
			if (x < 10000) out 0;
			if (x < 1000) out 0;
			if (x < 100) out 0;
			if (x < 10) out 0;
			out x endl;
		}

		in l;
	}
}