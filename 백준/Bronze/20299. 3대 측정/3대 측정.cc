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

struct Node {
	int a, b, c;
};

int main() {
	Sync;

	int n, k, l, cnt(0); in n >> k >> l;
	vector<Node> vec;
	Fori(n) {
		int a, b, c; in a >> b >> c;
		if (a + b + c >= k && a >= l && b >= l && c >= l)
			vec.push_back({ a, b, c }), cnt++;
	}
	out cnt endl;
	Fori(vec.size()) out vec[i].a spc vec[i].b spc vec[i].c << " ";
}