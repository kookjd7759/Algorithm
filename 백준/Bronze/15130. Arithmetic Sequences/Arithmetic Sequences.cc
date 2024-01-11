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
	
	int arr[10], space(0), l, r, idxL(0);
	bool start = false;
	Fori(10) {
		in arr[i];
		if (arr[i] != 0) {
			start ? r = arr[i], idxL = i : l = arr[i];
			start = (start ? false : true);
		}
		else if (start) space++;
	}
	space++;
	if ((r - l) % space == 0) {
		int d = (r - l) / space;
		for (int i = idxL + 1; i < 10; i++) arr[i] = arr[i - 1] + d;
		for (int i = idxL - 1; i >= 0; i--) arr[i] = arr[i + 1] - d;
		Fori(10) out arr[i] << " ";
	}
	else out -1;
}