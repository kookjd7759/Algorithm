#include <iostream>
#include <cstring>
#include <cmath>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define For0i(x) for (int i = 0; i < x; i++)
#define For0j(x) for (int j = 0; j < x; j++)
#define For0k(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)

using namespace std;

int main() {
	Sync;
	int d[81]; memset(d, 0, sizeof(d));
	int a, b, c; in a >> b >> c;
	For1i(a) For1j(b) For1k(c) d[i + j + k]++;
	int max_(0), ret(0);
	For0i(81) if (max_ < d[i]){
		max_ = d[i];
		ret = i;
	}
	out ret;
}