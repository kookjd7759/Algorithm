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
	
	while (true) {
		string st; in st;
		if (st == "*") break;

		int cnt(0);
		double sum(0.0);
		Fori(st.size()) {
			if (st[i] == '/') {
				if (sum == 1.0) cnt++;
				sum = 0.0;
				continue;
			}

			if (st[i] == 'W') sum += 1;
			else if (st[i] == 'H') sum += 0.5;
			else if (st[i] == 'Q') sum += 0.25;
			else if (st[i] == 'E') sum += 0.125;
			else if (st[i] == 'S') sum += 0.0625;
			else if (st[i] == 'T') sum += 0.03125;
			else if (st[i] == 'X') sum += 0.015625;
		}
		out cnt endl;
	}
}