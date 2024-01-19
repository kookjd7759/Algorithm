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

	int dies[3][6];
	Fori(3) Forj(6) in dies[i][j];

	auto dieCheck = [&](int a, int b) -> int {
		int aScore(0), bScore(0);
		Fori(6) {
			Forj(6) {
				if (dies[a][i] > dies[b][j]) aScore++;
				else if (dies[a][i] < dies[b][j]) bScore++;
			}
		}
		if (aScore == 0 && bScore == 0) return -1;
		if (aScore > bScore) return 1;
		else if (aScore < bScore) return -1;
		else return 0;
		};

	Fori(3) {
		int ch[2], idx(0);
		Forj(3) {
			if (i == j) continue;
			ch[idx++] = dieCheck(i, j);
		}

		if ((ch[0] == 1 && ch[1] == 1) || 
			(ch[0] == 0 && ch[1] == 0)) {
			out i + 1;
			exit(0);
		}
	}
	out "No dice";
}