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

int main() {
	Sync;

    int t; in t;
    For1k(t){
        int m, n, p; in m >> n >> p;

        vector<vector<int>> vec(m, vector<int>(n));
        Fori(m) Forj(n) in vec[i][j];

        int sum(0);
        Fori(n) {
            int a(0);
            Forj(m) if (j != p - 1) a = max(a, vec[j][i]);
            sum += max(0, a - vec[p - 1][i]);
        }

        out "Case #" << k << ": " << sum endl;
    }
}