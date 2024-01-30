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

int l, h, p, e, n;
double ls(0), hs(0), ps(0), es(0);
double lc(0), hc(0), pc(0), ec(0);

int main() {
    Sync;
    Fixed(2);

    int T; in T;
    For1k(T) {
        int n; in n;
        double m, ret(0), v(0); in m;
        vector<double> mVec(n), tVec(n), fVec(n);
        Fori(n) {
            in mVec[i] >> tVec[i] >> fVec[i];
            m += mVec[i];
        }
        Fori(n) {
            double a = fVec[i] / m - 9.81;
            ret += tVec[i] * v + 0.5 * a * tVec[i] * tVec[i];
            v += a * tVec[i];
            m -= mVec[i];
        }
        out "Data Set " << k << ":\n" << ret endl;
        ent;
    }
}