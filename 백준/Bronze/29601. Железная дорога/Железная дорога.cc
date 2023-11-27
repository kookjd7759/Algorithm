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
	
	char c; int n; in c >> n;
	if (c == 'R') {
		if (1 > n || n > 54) out -1;
		else if (1 <= n && n <= 36) {
			int a = n / 4 + (n % 4 == 0 ? 0 : 1);
			int b = 1;
			int c = ((n & 1) ? -1 : 1);
			out a spc b spc c;
		}
		else {
			n -= 36;
			int a = n / 2 + (n % 2 == 0 ? 0 : 1);
			a = 10 - a;
			int b = 0;
			int c = ((n & 1) ? -1 : 1);
			out a spc b spc c;
		}
	}
	else if (c == 'C') {
		if (1 > n || n > 36) out -1;
		else {
			int a = n / 4 + (n % 4 == 0 ? 0 : 1);
			int b = 1;
			int c = ((n & 1) ? -1 : 1);
			out a spc b spc c;
		}
	}
}