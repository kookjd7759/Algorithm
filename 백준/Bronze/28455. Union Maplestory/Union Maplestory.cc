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

	auto uniScore = [&](int x) -> int {
		int ret(0);
		if (x >= 60) ret++;
		if (x >= 100) ret++;
		if (x >= 140) ret++;
		if (x >= 200) ret++;
		if (x >= 250) ret++;
		return ret;
	};

	int n; in n;
	int sum[2] = { 0, 0 };
	vector<int> vec(n);
	Fori(n) in vec[i];
	sort(vec.begin(), vec.end(), [&](const int& a, const int& b) {return a > b; });
	for (int i = 0; i < 42 && i < vec.size(); i++) {
		sum[0] += vec[i];
		sum[1] += uniScore(vec[i]);
	}
	out sum[0] spc sum[1];
}