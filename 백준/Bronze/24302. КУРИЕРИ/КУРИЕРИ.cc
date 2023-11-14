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

	auto func1 = [&](int x) -> int {
		if (x <= 5) return 400;
		if (x <= 10) return 700;
		if (x <= 20) return 1200;
		if (x <= 30) return 1700;
		return x * 57;
		};
	
	auto func2 = [&](int x) -> int {
		if (x <= 2) return 90 + x * 90;
		if (x <= 5) return 100 + x * 85;
		if (x <= 20) return 125 + x * 80;
		if (x <= 40) return 325 + x * 70;
		return 925 + 55 * x;
		};

	int n, m; in n >> m; n /= 1000, m /= 1000;
	int ret = min(func1(n), func2(n)) + min(func1(m), func2(m));
	if (ret % 100 > 9) out ret / 100 << '.' << ret % 100;
	else out ret / 100 << '.' << '0' << ret % 100;
}