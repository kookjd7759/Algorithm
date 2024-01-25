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
	vector<int> vec(n);
	Fori(n) in vec[i];
	int a, b, t1(0), t2(0);
	string st1, st2;
	in a >> st1 >> b >> st2;
	if (st1 == "right") {
		for (int i = a - 1; i < n; i++) t1 += vec[i];
	}
	else for (int i = a - 1; i >= 0; i--) t1 += vec[i];

	if (st2 == "right") {
		for (int i = b - 1; i < n; i++)
			if (!vec[i]) t2++;
	}
	else for (int i = b - 1; i >= 0; i--)
		if (!vec[i]) t2++;

	out t1 spc t2;
}