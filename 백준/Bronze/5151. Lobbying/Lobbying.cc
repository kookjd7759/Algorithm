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
    for (int tc = 1; tc <= T; tc++) {
        int n, m, y; in n >> m >> y;
        double* donation = new double[n];
        fill_n(donation, n, 0);
        Fori(m) {
            int num, year; double money; in num >> year >> money;
            if (0 <= y - year && y - year < 1000)
                donation[num - 1] += money;
        }

        double Y(0.0), N(0.0);
        Fori(n) {
            char c; in c;
            if (c == 'Y')
                Y += 1.0;
            else N += 1 / (1 + (donation[i] / 10000.0));
        }

        out "Data Set " << tc << ":\n";
        out Y spc N endl;
        ent;
    }
}