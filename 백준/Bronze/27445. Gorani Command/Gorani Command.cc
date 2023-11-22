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

	int n, m; in n >> m;
	vector<int> vecV(n - 1), vecH(m - 1);
	int mid, mini(2e9), idx(0);
	bool VH = 0;
	Fori(n - 1) {
		in vecV[i];
		if (vecV[i] < mini) {
			mini = vecV[i];
			VH = 0;
			idx = i;
		}
	}
	in mid;
	Fori(m - 1) {
		in vecH[i];
		if (vecH[i] < mini) {
			mini = vecH[i];
			VH = 1;
			idx = i;
		}
	}

	if (mid == 0) {
		out n spc 1;
	}
	else if (mini == 0) {
		if (!VH) out idx + 1 spc 1;
		else out n spc idx + 2;
	}
	else {
		if (!VH)
			out idx + 1 spc mini + 1;
		else
			out n - mini spc idx + 2;
	}
}