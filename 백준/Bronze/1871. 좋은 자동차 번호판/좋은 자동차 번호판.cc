#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

#include <vector>
#include <stack>
#include <queue>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
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
	int arr[11]; Fori(11) arr[i] = (1 << i);

	int n; in n;
	while (n--) {
		string st; in st;
		int first = (st[0] - 'A') * 26 * 26 + (st[1] - 'A') * 26 + (st[2] - 'A');
		int second = (st[4] - '0') * 1000 + (st[5] - '0') * 100 + (st[6] - '0') * 10 + (st[7] - '0');
		out(abs(first - second) <= 100 ? "nice" : "not nice") endl;
	}
}