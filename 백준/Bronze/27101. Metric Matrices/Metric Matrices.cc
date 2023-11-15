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

	int matric[30][30], n; in n;
	Fori(n) Forj(n) in matric[i][j];
	auto ch1 = [&]() -> bool {
		Fori(n) if (matric[i][i] != 0) return false;
		return true;
		};

	auto ch2 = [&]() -> bool {
		Fori(n) Forj(n) if (i != j && matric[i][j] <= 0) return false;
		return true;
		};

	auto ch3 = [&]() -> bool {
		Fori(n) Forj(n) if (matric[i][j] != matric[j][i]) return false;
		return true;
		};

	auto ch4 = [&]() -> bool {
		Fori(n) Forj(n) Fork(n) if (matric[i][j] + matric[j][k] < matric[i][k]) return false;
		return true;
		};

	if (!ch1()) out 1;
	else if (!ch2()) out 2;
	else if (!ch3()) out 3;
	else if (!ch4()) out 4;
	else out 0;
}