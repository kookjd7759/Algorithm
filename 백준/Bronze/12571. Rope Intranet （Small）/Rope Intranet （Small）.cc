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

	int t; in t;
	For1i(t) {
		int n; in n;
		vector<pair<int, int>> vec(n);
		Forj(n) in vec[j].first >> vec[j].second;
		out "Case #" << i << ": ";

		if (n == 1) out 0;
		else if (n == 2) {
			bool ch1 = vec[0].first < vec[1].first && vec[0].second < vec[1].second;
			bool ch2 = vec[0].first > vec[1].first && vec[0].second > vec[1].second;
			if (!ch1 && !ch2) out 1;
			else out 0;
		}
		ent;
	}
}