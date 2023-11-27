#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed; cout.precision(x);
#define Interactive cin.tie(0)->sync_with_stdio(0);
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
	
	int num[3];
	Fori(3) num[i] = pow(256, i);

	vector<int> vec;
	int n; in n;
	for (int i = 2; i >= 0; i--) {
		vec.push_back(n / num[i]);
		n %= num[i];
	}

	while (vec[0] == 0) vec.erase(vec.begin());

	//for (const auto& iter : vec) out iter << " "; ent;

	int ans(0);
	Fori(vec.size()) ans += vec[i] * num[i];
	out ans;
}