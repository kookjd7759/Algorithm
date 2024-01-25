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

    auto dist = [&](pair<int, int> a, pair<int, int> b) -> double {
        double temp_x = ((a.first - b.first) * (a.first - b.first));
        double temp_y = ((a.second - b.second) * (a.second - b.second));
        return sqrt(temp_x + temp_y);
        };

    int n; in n; n--;
    pair<int, int> cur; in cur.first >> cur.second;
    double min(2e9);
    pair<int, int> min_xy;
    Fori(n) {
        pair<int, int> xy; in xy.first >> xy.second;
        double d = dist(cur, xy);
        if (min > d) {
            min = d;
            min_xy = xy;
        }
    }
    out cur.first spc cur.second endl;
    out min_xy.first spc min_xy.second endl;
    out min;
}