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
    
    int T; in T;
    for (int tc = 1; tc <= T; tc++) {
        int n, t(0), d(0); in n;
        Fori(n) {
            int a, b; in a >> b;
            if (abs(a - b) == 1) {
                if (a > b)
                    d += (a == 2 ? 6 : a + b);
                else
                    t += (b == 2 ? 6 : a + b);
            }
            else if (a > b) t += a;
            else if (b > a) d += b;
        }
        out "Game " << tc << ": Tessa " << t << " Danny " << d endl;
    }
}