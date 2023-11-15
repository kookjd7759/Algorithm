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
	Fixed(10);

	while (true) {
		double d, e; in d >> e;
		if (!d && !e) break;
		int x(0), y(0);
		double dif(2e9), price(0);
		
		for (int i = 0; i <= d; i++) {
			int x_ = i, y_ = d - i;
			double p = sqrt(x_ * x_ + y_ * y_);
			if (abs(p - e) < dif) {
				x = x_; y = y_;
				price = p;
				dif = abs(p - e);
			}
		}
		out abs(e - price) endl;
	}
}