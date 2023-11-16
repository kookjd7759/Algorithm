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

	vector<pair<int, int>> vec(3);
	Fori(3) in vec[i].first;
	Fori(3) in vec[i].second;
	int L; in L;

	sort(vec.begin(), vec.end(), [&](const pair<int, int>& a, const pair<int, int>& b) {
		return a.first > b.first;
		});

	bool ch = true;
	int ret(2e9);
	for (int i = vec[0].second; i >= 0; i--)
		for (int j = vec[1].second; j >= 0; j--)
			for (int k = vec[2].second; k >= 0; k--) {
				if (vec[0].first * i + vec[1].first * j + vec[2].first * k >= L) {
					ret = min(ret, i + j + k);
					ch = false;
				}
			}
	if (ch) out 0;
	else out ret;
}