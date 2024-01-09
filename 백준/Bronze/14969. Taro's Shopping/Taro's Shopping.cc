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
		int n, m; in n >> m;
		if (!n && !m) break;

		vector<int> list(n);
		Fori(n) in list[i];
		sort(list.begin(), list.end(), [&](const int& a, const int& b) {
			return a > b;
			});

		int maxi(-1);
		Fori(n - 1) {
			for (int j = i + 1; j < n; j++) {
				if (list[i] + list[j] <= m) maxi = max(maxi, list[i] + list[j]);
			}
		}
		if (maxi == -1) out "NONE\n";
		else out maxi endl;
	}
}