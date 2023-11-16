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

struct Node {
	int x, l;
	char c;
};

int main() {
	Sync;

	int n; in n;
	vector<Node> vec(n);
	Fori(n) in vec[i].x;
	Fori(n) in vec[i].l;
	Fori(n) in vec[i].c;
	for (int i = 0; i < vec.size(); i++) {
		for (int j = i + 1; j < vec.size(); j++) {
			if (abs(vec[i].x - vec[j].x) <= vec[i].l + vec[j].l &&
				vec[i].c != vec[j].c)
				out "YES\n" << i + 1 spc j + 1, exit(0);
		}
	}
	out "NO";
}