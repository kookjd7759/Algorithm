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

	int main_a(0), main_b(0), sum_a(0), sum_b(0);
	Testcase{
	int m, a, b; in m >> a >> b;
	sum_a += a; sum_b += b;
	a > b ? main_a += m : main_b += m;
	};
	if (main_a > main_b && sum_a > sum_b) out 1;
	else if (main_a < main_b && sum_a < sum_b) out 2;
	else out 0;
}