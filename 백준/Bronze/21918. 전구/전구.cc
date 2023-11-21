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

    int n, m; in n >> m;
    int L[4001]; memset(L, 0, sizeof(L));

    For1i(n) in L[i];
    Fori(m) {
        int a, b, c; in a >> b >> c;
        if (a == 1) L[b] = c;
        else if (a == 2) {
            for (int i = b; i <= c; i++) 
                L[i] = L[i] ? 0 : 1;
        }
        else if (a == 3) {
            for (int i = b; i <= c; i++) 
                L[i] = 0;
        }
        else if (a == 4) {
            for (int i = b; i <= c; i++) 
                L[i] = 1;
        }
    }
    For1i(n) out L[i] << ' ';
}