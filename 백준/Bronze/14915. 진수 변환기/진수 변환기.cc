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
    string digit = "0123456789ABCDEF";
    int m(0), n(0); in m >> n;
    int ret[101]; memset(ret, 0, sizeof(ret));

    int idx(0);
    for (; m / n != 0; idx++) {
        ret[idx] = (m % n);
        m = m / n;
    }
    ret[idx] = m;
    for (int j = idx; j >= 0; j--) {
        out digit[ret[j]];
    }
}