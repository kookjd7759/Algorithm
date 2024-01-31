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
	Fixed(2);
	
	double s[4]{ 0.8, 1.0, 1.2, 0.8 };
	double m[4]{ 15.5, 32.0, 40.0, 0.2 };
	int tc(1);
	Fori(3) m[i] /= 85.0;
	while (true) {
		int n; in n;
		if (!n) break;

		double ret(0);
		Fori(n) Forj(4) {
			int a; in a;
			ret += s[j] * a - m[j] * a;
		}
		out "Case #" << tc++ << ": RM" << ret endl;
	}
}