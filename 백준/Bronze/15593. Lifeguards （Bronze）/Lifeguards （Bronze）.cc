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

    int n, s[101], e[101], t[1001]; memset(t, 0, sizeof t);
    in n;
    Fori(n) {
        in s[i] >> e[i];
        for (int j = s[i]; j < e[i]; j++) t[j]++;
    }

    int ret(0);
    Fori(n) {
        for (int j = s[i]; j < e[i]; j++) t[j]--;
        int cnt(0);
        Forj(1001) if (t[j]) cnt++;
        ret = max(ret, cnt);
        for (int j = s[i]; j < e[i]; j++) t[j]++;
    }
    out ret endl;
}