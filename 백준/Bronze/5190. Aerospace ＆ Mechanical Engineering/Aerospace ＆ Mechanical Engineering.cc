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
    Fixed(2);

    int T; in T;
    For1k(T) {
        out "Data Set " << k << ":\n";
        int n;
        double rm, ret(0.0), v(0.0);
        in n >> rm;
        double* m = new double[n];
        double* t = new double[n];
        double* f = new double[n];
        Fori(n) {
            in m[i] >> t[i] >> f[i];
            rm += m[i];
        }
        Fori(n) {
            double a = f[i] / rm;
            ret += v * t[i] + 0.5 * (a - 9.81) * t[i] * t[i];
            v += (a - 9.81) * t[i];
            rm -= m[i];
        }
        out round(ret * 100) / 100 endl;
    }
}