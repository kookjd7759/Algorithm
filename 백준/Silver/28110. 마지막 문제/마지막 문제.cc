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

	int n; in n;
	int* arr = new int[n];
	Fori(n) in arr[i];
	sort(arr, arr + n);

	int maxi(0);
	For1i(n - 1) {
		int space = arr[i] - arr[i - 1] - 1;
		maxi = max(maxi, space / 2 + (space % 2 == 0 ? 0 : 1));
	}
	if (maxi == 0) out - 1;
	else For1i(n - 1) {
		int space = arr[i] - arr[i - 1] - 1;
		int diff = space / 2 + (space % 2 == 0 ? 0 : 1);
		if (diff == maxi) {
			out arr[i - 1] + diff;
			break;
		}
	}
}