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

	string st; in st;
	while (st.size() < 4) st = '0' + st;
	set<string> s; s.insert(st);

	int cnt(1);
	while (st != "0000") {
		int n = (st[1] - '0') * 10 + (st[2] - '0');
		string temp = to_string(n * n);

		while (temp.size() < 4) temp = '0' + temp;
		if (s.count(temp) > 0) break;

		s.insert(temp);
		st = temp;
		cnt++;
	}
	out cnt;
}
