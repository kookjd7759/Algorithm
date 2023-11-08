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
#define Roop(x) while(x--) 

using namespace std;

int func(int ti) {
	int tmp = ti;
	if (ti < 0) tmp = ti + 2400;
	if (ti >= 2400) tmp = ti - 2400;
	if (tmp % 100 >= 60) tmp = 100 * (tmp / 100 + 1) + tmp % 100 - 60;
	if (tmp >= 2400) tmp -= 2400;
	return tmp;
}

int main() {
	Sync;

	int t; in t;
	out t << " in Ottawa\n";
	out func(t - 300) << " in Victoria\n";
	out func(t - 200) << " in Edmonton\n";
	out func(t - 100) << " in Winnipeg\n";
	out t << " in Toronto\n";
	out func(t + 100) << " in Halifax\n";
	out func(t + 130) << " in St. John's";
}