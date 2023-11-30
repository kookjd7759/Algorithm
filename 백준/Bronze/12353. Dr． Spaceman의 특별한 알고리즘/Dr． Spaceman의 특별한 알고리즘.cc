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

	auto pri = [&](int x) {
		out x / 12 << '\'' << x % 12 << '\"';
		};

	int t; in t;
	For1i(t) {
		char c; string st1, st2;
		in c >> st1 >> st2;
		int sum(0);
		if (st1.size() == 4) sum += (st1[0] - '0') * 12 + (st1[2] - '0');
		else sum += (st1[0] - '0') * 12 + 10 + (st1[3] - '0');
		if (st2.size() == 4) sum += (st2[0] - '0') * 12 + (st2[2] - '0');
		else sum += (st2[0] - '0') * 12 + 10 + (st2[3] - '0');
		if (c == 'B') sum += 5;
		else sum -= 5;

		cout << "Case #" << i << ": ";
		bool odd = sum & 1;
		sum /= 2;
		if (odd) {
			pri(sum - 3);
			out " to ";
			pri(sum + 4);
			ent;
		}
		else {
			pri(sum - 4);
			out " to ";
			pri(sum + 4);
			ent;
		}
	}
}