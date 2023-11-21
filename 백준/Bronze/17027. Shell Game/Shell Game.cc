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

int main() {
	Sync;

	int n; in n;
	int arr[100][3];
	Fori(n) in arr[i][0] >> arr[i][1] >> arr[i][2];

	int ret = 0;
	For1i(3) {
		int now = i, cnt(0);
		Forj(n){
			int a = arr[j][0];
			int b = arr[j][1];
			int g = arr[j][2];
			if (now == a) now = b;
			else if (now == b) now = a;

			if (now == g) cnt++;
		}
		ret = max(ret, cnt);
	}
	out ret;
}