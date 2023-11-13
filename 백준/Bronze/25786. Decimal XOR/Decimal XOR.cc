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

	string n1, n2; in n1 >> n2;
	while (n1.size() > n2.size()) {
		n2 = '0' + n2;
	}
	while (n1.size() < n2.size()) {
		n1 = '0' + n1;
	}
	Fori(n1.size()) {
		int num1 = n1[i] - '0';
		int num2 = n2[i] - '0';
		if ((num1 <= 2 && num2 <= 2) || (num1 >= 7 && num2 >= 7))
			out 0;
		else out 9;
	}
}