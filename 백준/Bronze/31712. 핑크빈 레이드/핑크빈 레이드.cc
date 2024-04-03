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

	int skill_info[3][2], H, coolTime[3], time(0); memset(coolTime, 0, sizeof coolTime);
	Fori(3) in skill_info[i][0] >> skill_info[i][1]; in H;
	while (H > 0) {
		int mini = min(coolTime[0], min(coolTime[1], coolTime[2]));
		time += mini;
		if (mini == 0) {
			Fori(3) if (mini == coolTime[i])
				H -= skill_info[i][1],
				coolTime[i] = skill_info[i][0];
		}
		else {
			Fori(3) coolTime[i] -= mini;
		}
	}
	out time;
}