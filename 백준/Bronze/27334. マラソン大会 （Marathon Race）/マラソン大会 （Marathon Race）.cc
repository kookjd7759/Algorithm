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
	
	int n; in n;
	vector<pair<int, int>> vec(n);
	Fori(n) in vec[i].first, vec[i].second = i;

	vector<pair<int, int>> temp = vec;
	sort(temp.begin(), temp.end());
	int rank(1), cnt(1);
	Fori(temp.size()) {
		if (i == 0) vec[temp[i].second].second = rank;
		else {
			if (temp[i - 1].first != temp[i].first) rank = cnt;
			vec[temp[i].second].second = rank;
		}
		cnt++;
	}
	Fori(vec.size()) out vec[i].second endl;
}