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

	int n; in n;
	pair<ll, ll> start, end;
	in start.first >> start.second >> end.first >> end.second;

	ll mini(LONG_MAX), idx(-1);
	For1i(n) {
		pair<ll, ll> prev{ start.first, start.second };
		ll dis(0);
		int m; in m;
		while (m--) {
			ll a, b; in a >> b;
			dis += abs(prev.first - a) + abs(prev.second - b);
			prev.first = a;
			prev.second = b;
		}
		dis += abs(prev.first - end.first) + abs(prev.second - end.second);
		if (dis < mini) {
			mini = dis;
			idx = i;
		}
	}
	out idx;
}
