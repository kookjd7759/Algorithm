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

bool comp(const int& a, const int& b) {
	return a > b;
}

int main() {
	Sync;

	Testcase{
	int n, m; in n >> m;
	vector<int> red(n), white(m);
	Fori(n) in red[i];
	Fori(m) in white[i];
	/*
	sort(red.begin(), red.end(), comp);
	sort(white.begin(), white.end(), comp);
	int idx(0);
	while (true) {
		n -= red[idx];
		if (n <= 0) break;

		m -= white[idx];
		if (m <= 0) break;
		idx++;
	}
	*/
	out(n <= m ? "Yes" : "No") endl;
	};
}