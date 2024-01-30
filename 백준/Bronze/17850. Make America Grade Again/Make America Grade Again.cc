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

    in l >> h >> p >> e >> n;
    Fori(n) {
        string s, t, g;
        in s >> t >> g;
        Forj(g.size()) {
            if (g[j] == '/') g[j] = ' ';
        }
        stringstream st;
        st.str(g);
        int a, b; st >> a >> b;
        if (s[0] == 'L') {
            ls += a;
            lc += b;
        }
        else if (s[0] == 'H') {
            hs += a;
            hc += b;
        }
        else if (s[0] == 'P') {
            ps += a;
            pc += b;
        }
        else {
            es += a;
            ec += b;
        }
    }
    out(int)(l * ls / lc + h * hs / hc + p * ps / pc + e * es / ec);
}