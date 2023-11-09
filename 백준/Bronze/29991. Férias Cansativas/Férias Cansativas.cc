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
#define Roop(x) while(x--) 

using namespace std;

int main() {
	Sync;

	int line, l, g; in line >> l >> g;
	vector<int> lost(l), gain(g);
	Fori(l) in lost[i];
	Fori(g) in gain[i];

	int idx_l(0), idx_g(0), now(0), cnt(0);
	while (true) {
		if (idx_l != l && now + lost[idx_l] <= line) {
			now += lost[idx_l];
			idx_l++;
		}
		else if (idx_g == g) break;
		else {
			now -= gain[idx_g];
			idx_g++;
		}
		cnt++;
	}
	out cnt;
}