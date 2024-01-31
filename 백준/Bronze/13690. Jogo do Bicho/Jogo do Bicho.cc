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

	while (true) {
		double v; int n, m;
		in v >> n >> m;
		if (v <= 0.000000001 && !n && !m) break;

		string a, b;
		a = to_string(n);
		b = to_string(m);
		int ai = a.length(), al;
		int bi = b.length(), bl;
		double maxi(0.0);
		if (ai < 4) {
			Fori(4 - ai) a.insert(a.begin(), '0');
			ai = 4;
		}
		if (bi < 4) {
			Fori(4 - bi) b.insert(b.begin(), '0');
			bi = 4;
		}
		if (a.substr(ai - 4, 4) == b.substr(bi - 4, 4))
			maxi = max(maxi, v * 3000.0);
		if (a.substr(ai - 3, 3) == b.substr(bi - 3, 3))
			maxi = max(maxi, v * 500.0);
		if (a.substr(ai - 2, 2) == b.substr(bi - 2, 2))
			maxi = max(maxi, v * 50.0);
		al = stoi(a.substr(ai - 2, 2));
		bl = stoi(b.substr(bi - 2, 2));
		if (al == 0) al = 100;
		if (bl == 0) bl = 100;
		for (int i = 1; i <= 97; i += 4) {
			if ((al >= i && al <= i + 3) && (bl >= i && bl <= i + 3)) {
				maxi = max(maxi, v * 16.0);
				break;
			}
		}
		out maxi endl;
	}
}