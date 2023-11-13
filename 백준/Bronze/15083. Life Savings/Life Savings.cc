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
	Fixed(2);

	double price[3]; Fori(3) in price[i];
	sort(price, price + 3);
	double cou[3]; Fori(3) in cou[i];
	double use[2];
	use[0] = (price[0] + price[1] + price[2]) / 100 * cou[0];
	use[1] = price[2] / 100 * max(cou[1], cou[2]) +
		price[1] / 100 * min(cou[1], cou[2]);
	if (use[0] > use[1]) out "one " << use[0];
	else  out "two " << use[1];
}