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

    int ret[4]; memset(ret, 0, sizeof ret);
	while (true) {
		vector<int> vec(3);
		Fori(3) in vec[i];
		sort(vec.begin(), vec.end());
		if (vec[0] + vec[1] <= vec[2]) break;
		ret[0]++;

		if (vec[0] * vec[0] + vec[1] * vec[1] == vec[2] * vec[2]) {
			ret[1]++; continue;
		}

		if (vec[0] * vec[0] + vec[1] * vec[1] > vec[2] * vec[2]) {
			ret[2]++; continue;
		}

		ret[3]++;
	}
	Fori(4) out ret[i] endl;
}