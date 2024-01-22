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
	
	ll n, k, x, y, col, cycle; in n >> k >> x >> y;
	col = (n / k) * x + (n - (n / k)) * y;
	cycle = (k - 1) * y + x;

	Testcase{
	ll a; in a;
	a %= col;
	if (a == 0) {
		out n endl;
		continue;
	}

	ll ret = (1);
	ret += (a / cycle) * k;
	if (a % cycle == 0) {
		out (a / cycle) * k endl;
		continue;
	}
	a %= cycle;

	if (0 < a <= (k - 1) * y) out ret + (a - 1) / y endl;
	else out ret + k - 1 endl;
	}
}