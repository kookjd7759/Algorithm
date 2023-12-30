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

struct Node {
	int x, y;
	vector<double> d;
};

int main() {
	Sync;

	int n; in n;
	vector<Node> vec(n);
	Fori(n) {
		in vec[i].x >> vec[i].y;
		vec[i].d.reserve(n - 1);
	}

	Fori(n - 1) {
		for (int j = i + 1; j < n; j++) {
			double dist = sqrt(abs(vec[i].x - vec[j].x) * abs(vec[i].x - vec[j].x)
				+ abs(vec[i].y - vec[j].y) * abs(vec[i].y - vec[j].y));
			vec[i].d.push_back(dist);
			vec[j].d.push_back(dist);
		}
	}

	Testcase{
	double dist;
	int idx, cnt(0); in idx >> dist; idx--;
	Fori(n - 1) if (dist >= vec[idx].d[i]) cnt++;
	out cnt endl;

	};
}