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

	int n, m, cnt(0); in n >> m;
	string st; instr(st);
	while (m--) {
		instr(st);
		int score(0);
		Fori(st.size()) {
			if ('A' <= st[i] && st[i] <= 'Z') score += 4;
			else if (('a' <= st[i] && st[i] <= 'z') ||
				('0' <= st[i] && st[i] <= '9')) score += 2;
			else if (st[i] == ' ') score++;
		}
		if (n >= score) cnt++;
	}
	out cnt;
}