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

int n;
vector<int> vec;

int func(int x) {
	vec.push_back(x);
	int ret(0);

	while (x != 0) {
		ret += pow(x % 10, 2);
		x /= 10;
	}

	if (ret == 1) return 1;
	if (find(vec.begin(), vec.end(), ret) != vec.end()) return 0;
	return func(ret);
}

int main() {
	Sync;

	in n;
	out(func(n) == 1 ? "HAPPY" : "UNHAPPY");
}